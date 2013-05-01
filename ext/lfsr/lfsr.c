#include <stdio.h>
#include "ruby.h"

#define bit(n) ((reg & (1 << (n))) >> (n))
#define RUBY_EXPORT __attribute__ ((visibility ("default")))

VALUE rb_lfsr_next_i_2(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift2:
  reg = (reg >> 1) | ((bit(0)^bit(1)) << 0x1);
  if (reg > max) goto label_shift2;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_3(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift3:
  reg = (reg >> 1) | ((bit(0)^bit(1)) << 0x2);
  if (reg > max) goto label_shift3;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_4(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift4:
  reg = (reg >> 1) | ((bit(0)^bit(1)) << 0x3);
  if (reg > max) goto label_shift4;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_5(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift5:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(3)) << 0x4);
  if (reg > max) goto label_shift5;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_6(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift6:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(4)) << 0x5);
  if (reg > max) goto label_shift6;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_7(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift7:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(3)) << 0x6);
  if (reg > max) goto label_shift7;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_8(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift8:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(3)^bit(4)) << 0x7);
  if (reg > max) goto label_shift8;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_9(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift9:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(4)) << 0x8);
  if (reg > max) goto label_shift9;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_10(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift10:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(4)) << 0x9);
  if (reg > max) goto label_shift10;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_11(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift11:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(4)) << 0xa);
  if (reg > max) goto label_shift11;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_12(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift12:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(6)) << 0xb);
  if (reg > max) goto label_shift12;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_13(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift13:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(4)) << 0xc);
  if (reg > max) goto label_shift13;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_14(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift14:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(5)) << 0xd);
  if (reg > max) goto label_shift14;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_15(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift15:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(4)) << 0xe);
  if (reg > max) goto label_shift15;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_16(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift16:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(3)^bit(5)) << 0xf);
  if (reg > max) goto label_shift16;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_17(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift17:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(3)) << 0x10);
  if (reg > max) goto label_shift17;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_18(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift18:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(5)) << 0x11);
  if (reg > max) goto label_shift18;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_19(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift19:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(5)) << 0x12);
  if (reg > max) goto label_shift19;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_20(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift20:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(6)) << 0x13);
  if (reg > max) goto label_shift20;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_21(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift21:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(5)) << 0x14);
  if (reg > max) goto label_shift21;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_22(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift22:
  reg = (reg >> 1) | ((bit(0)^bit(3)^bit(4)^bit(5)) << 0x15);
  if (reg > max) goto label_shift22;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_23(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift23:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(5)) << 0x16);
  if (reg > max) goto label_shift23;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_24(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift24:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(4)) << 0x17);
  if (reg > max) goto label_shift24;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_25(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift25:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(3)) << 0x18);
  if (reg > max) goto label_shift25;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_26(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift26:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(6)) << 0x19);
  if (reg > max) goto label_shift26;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_27(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift27:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(5)) << 0x1a);
  if (reg > max) goto label_shift27;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_28(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift28:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(6)) << 0x1b);
  if (reg > max) goto label_shift28;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_29(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift29:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(4)) << 0x1c);
  if (reg > max) goto label_shift29;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_30(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift30:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(6)) << 0x1d);
  if (reg > max) goto label_shift30;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_31(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift31:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(3)) << 0x1e);
  if (reg > max) goto label_shift31;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_32(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift32:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(6)^bit(7)) << 0x1f);
  if (reg > max) goto label_shift32;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_33(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift33:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(6)) << 0x20);
  if (reg > max) goto label_shift33;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_34(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift34:
  reg = (reg >> 1) | ((bit(0)^bit(3)^bit(4)^bit(8)) << 0x21);
  if (reg > max) goto label_shift34;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_35(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift35:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(7)^bit(8)) << 0x22);
  if (reg > max) goto label_shift35;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_36(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift36:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(7)^bit(8)) << 0x23);
  if (reg > max) goto label_shift36;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_37(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift37:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(6)) << 0x24);
  if (reg > max) goto label_shift37;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_38(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift38:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(5)^bit(6)) << 0x25);
  if (reg > max) goto label_shift38;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_39(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift39:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(7)) << 0x26);
  if (reg > max) goto label_shift39;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_40(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift40:
  reg = (reg >> 1) | ((bit(0)^bit(3)^bit(4)^bit(5)) << 0x27);
  if (reg > max) goto label_shift40;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_41(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift41:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(3)) << 0x28);
  if (reg > max) goto label_shift41;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_42(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift42:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(5)^bit(7)) << 0x29);
  if (reg > max) goto label_shift42;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_43(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift43:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(5)^bit(6)) << 0x2a);
  if (reg > max) goto label_shift43;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_44(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift44:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(5)^bit(6)) << 0x2b);
  if (reg > max) goto label_shift44;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_45(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift45:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(4)) << 0x2c);
  if (reg > max) goto label_shift45;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_46(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift46:
  reg = (reg >> 1) | ((bit(0)^bit(6)^bit(7)^bit(8)) << 0x2d);
  if (reg > max) goto label_shift46;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_47(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift47:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(4)^bit(5)) << 0x2e);
  if (reg > max) goto label_shift47;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_48(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift48:
  reg = (reg >> 1) | ((bit(0)^bit(4)^bit(7)^bit(9)) << 0x2f);
  if (reg > max) goto label_shift48;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_49(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift49:
  reg = (reg >> 1) | ((bit(0)^bit(4)^bit(5)^bit(6)) << 0x30);
  if (reg > max) goto label_shift49;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_50(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift50:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(3)^bit(4)) << 0x31);
  if (reg > max) goto label_shift50;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_51(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift51:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(6)) << 0x32);
  if (reg > max) goto label_shift51;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_52(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift52:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(3)^bit(6)) << 0x33);
  if (reg > max) goto label_shift52;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_53(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift53:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(6)) << 0x34);
  if (reg > max) goto label_shift53;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_54(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift54:
  reg = (reg >> 1) | ((bit(0)^bit(3)^bit(6)^bit(8)) << 0x35);
  if (reg > max) goto label_shift54;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_55(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift55:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(6)) << 0x36);
  if (reg > max) goto label_shift55;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_56(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift56:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(4)^bit(7)) << 0x37);
  if (reg > max) goto label_shift56;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_57(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift57:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(3)^bit(5)) << 0x38);
  if (reg > max) goto label_shift57;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_58(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift58:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(5)^bit(6)) << 0x39);
  if (reg > max) goto label_shift58;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_59(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift59:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(4)^bit(7)) << 0x3a);
  if (reg > max) goto label_shift59;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_60(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift60:
  reg = (reg >> 1) | ((bit(0)^bit(2)^bit(4)^bit(5)) << 0x3b);
  if (reg > max) goto label_shift60;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}

VALUE rb_lfsr_next_i_61(VALUE self) {
  unsigned long long reg = NUM2ULL(ROBJECT(self)->as.ary[0]), max = NUM2ULL(ROBJECT(self)->as.ary[1]);

  label_shift61:
  reg = (reg >> 1) | ((bit(0)^bit(1)^bit(2)^bit(5)) << 0x3c);
  if (reg > max) goto label_shift61;

  ROBJECT(self)->as.ary[0] = ULL2NUM(reg);

  return ULL2NUM(reg - 1);
}


void RUBY_EXPORT Init_lfsr() {
  VALUE rb_mLFSR = rb_const_get(rb_cObject, rb_intern("LFSR"));
  VALUE rb_cLFSR_Base = rb_const_get(rb_mLFSR, rb_intern("Base"));
  VALUE rb_mLFSR_Fast = rb_define_module_under(rb_mLFSR, "Fast");

  VALUE rb_cLFSR_SubClass;

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size2", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_2, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3LLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size3", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_3, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7LLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size4", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_4, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size5", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_5, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size6", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_6, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size7", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_7, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size8", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_8, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size9", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_9, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size10", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_10, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size11", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_11, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size12", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_12, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size13", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_13, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size14", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_14, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size15", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_15, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size16", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_16, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size17", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_17, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size18", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_18, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size19", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_19, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size20", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_20, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size21", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_21, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size22", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_22, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size23", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_23, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size24", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_24, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size25", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_25, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size26", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_26, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size27", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_27, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size28", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_28, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size29", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_29, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size30", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_30, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size31", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_31, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size32", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_32, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size33", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_33, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size34", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_34, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size35", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_35, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size36", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_36, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size37", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_37, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size38", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_38, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size39", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_39, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size40", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_40, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size41", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_41, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size42", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_42, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size43", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_43, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size44", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_44, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size45", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_45, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size46", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_46, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size47", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_47, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size48", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_48, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size49", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_49, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size50", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_50, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size51", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_51, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size52", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_52, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size53", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_53, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size54", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_54, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3fffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size55", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_55, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7fffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size56", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_56, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xffffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size57", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_57, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1ffffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size58", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_58, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x3ffffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size59", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_59, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x7ffffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size60", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_60, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0xfffffffffffffffLLU));

  rb_cLFSR_SubClass = rb_define_class_under(rb_mLFSR_Fast, "Size61", rb_cLFSR_Base);
  rb_define_method(rb_cLFSR_SubClass, "next_i", rb_lfsr_next_i_61, 0);
  rb_define_const(rb_cLFSR_SubClass, "MASK", ULL2NUM(0x1fffffffffffffffLLU));
}
