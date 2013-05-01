require 'taps'

code = %$
#include <stdio.h>
#include "ruby.h"

#define bit(n) ((reg & (1 << (n))) >> (n))
#define RUBY_EXPORT __attribute__ ((visibility ("default")))

$
puts code.strip
puts

2.upto(MAXBITS) do |size|
  taps = ([size] + TAPS[size])
  bits_select = taps.uniq.map {|bit| "bit(#{size - bit})" }.join('^')

  code = %$
VALUE rb_lfsr_next_i_#{size}(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift#{size}:
  reg = (reg >> 1) | ((#{bits_select}) << 0x#{ sprintf "%x", size - 1 });
  if (reg > max) goto label_shift#{size};

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}
$
  puts code.strip
  puts
end

code = %$
void RUBY_EXPORT Init_lfsr() {
  VALUE rb_mLFSR = rb_const_get(rb_cObject, rb_intern("LFSR"));
  VALUE rb_cLFSR_Base = rb_const_get(rb_mLFSR, rb_intern("Base"));
  VALUE rb_mLFSR_Fast = rb_define_module_under(rb_mLFSR, "Fast");

  VALUE rb_cLFSR_SubClass;
$
puts code

2.upto(MAXBITS) do |size|
  code = %$
  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size#{size}", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_#{size}, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x#{sprintf("%x", (2**size)-1)}LLU));
$
  puts code
end


puts "}"
