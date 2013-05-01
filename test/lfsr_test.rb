require 'test/unit'

require 'lfsr/pure'
require 'lfsr/fast'
require 'set'

class LFSRTests < Test::Unit::TestCase
  MAX_SEQUENCE_LENGTH = 2**16 # Keep tests at a runnable size... even if we don't test ALL the numbers generated for evey bit size.

  def test_gen
    assert_equal LFSR.gen(2).class, LFSR::Fast::Size3
    assert_equal LFSR.gen(3).class, LFSR::Fast::Size3
    assert_equal LFSR.gen(4).class, LFSR::Fast::Size3
    assert_equal LFSR.gen(5).class, LFSR::Fast::Size3
    assert_equal LFSR.gen(6).class, LFSR::Fast::Size3
    assert_equal LFSR.gen(7).class, LFSR::Fast::Size4
    assert_equal LFSR.gen(8).class, LFSR::Fast::Size4
    assert_equal LFSR.gen(9).class, LFSR::Fast::Size4

    assert_equal LFSR.gen(14).class, LFSR::Fast::Size4
    assert_equal LFSR.gen(15).class, LFSR::Fast::Size5
    assert_equal LFSR.gen(16).class, LFSR::Fast::Size5
  end

  2.upto(61) do |bits|
    ["Pure", "Fast"].each do |namespace|

      define_method("test_#{namespace}_#{bits}_bits") do
        gen = LFSR.const_get(namespace).const_get("Size#{bits}").new
        gen.reset(1)

        sequence = []

        (2**bits - 1).times do
          sequence <<  gen.next_i
          break if sequence.length > MAX_SEQUENCE_LENGTH
        end

        assert sequence.uniq!.nil?
      end

    end
  end
end
