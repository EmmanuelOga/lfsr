require 'lfsr'

module LFSR::Pure
end

class LFSR::Pure::Size2 < LFSR::Base
  MASK = 0x3

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]) << 0x1)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]) << 0x1) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size3 < LFSR::Base
  MASK = 0x7

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]) << 0x2)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]) << 0x2) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size4 < LFSR::Base
  MASK = 0xf

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]) << 0x3)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]) << 0x3) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size5 < LFSR::Base
  MASK = 0x1f

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x4)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x4) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size6 < LFSR::Base
  MASK = 0x3f

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x5)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x5) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size7 < LFSR::Base
  MASK = 0x7f

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x6)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x6) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size8 < LFSR::Base
  MASK = 0xff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[4]) << 0x7)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[4]) << 0x7) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size9 < LFSR::Base
  MASK = 0x1ff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x8)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x8) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size10 < LFSR::Base
  MASK = 0x3ff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x9)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x9) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size11 < LFSR::Base
  MASK = 0x7ff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[4]) << 0xa)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[4]) << 0xa) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size12 < LFSR::Base
  MASK = 0xfff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0xb)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0xb) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size13 < LFSR::Base
  MASK = 0x1fff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0xc)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0xc) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size14 < LFSR::Base
  MASK = 0x3fff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[5]) << 0xd)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[5]) << 0xd) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size15 < LFSR::Base
  MASK = 0x7fff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[4]) << 0xe)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[4]) << 0xe) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size16 < LFSR::Base
  MASK = 0xffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[5]) << 0xf)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[5]) << 0xf) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size17 < LFSR::Base
  MASK = 0x1ffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x10)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x10) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size18 < LFSR::Base
  MASK = 0x3ffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x11)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x11) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size19 < LFSR::Base
  MASK = 0x7ffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x12)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x12) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size20 < LFSR::Base
  MASK = 0xfffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x13)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x13) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size21 < LFSR::Base
  MASK = 0x1fffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x14)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x14) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size22 < LFSR::Base
  MASK = 0x3fffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[4]^@reg[5]) << 0x15)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[4]^@reg[5]) << 0x15) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size23 < LFSR::Base
  MASK = 0x7fffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[5]) << 0x16)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[5]) << 0x16) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size24 < LFSR::Base
  MASK = 0xffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x17)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x17) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size25 < LFSR::Base
  MASK = 0x1ffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x18)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x18) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size26 < LFSR::Base
  MASK = 0x3ffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[6]) << 0x19)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[6]) << 0x19) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size27 < LFSR::Base
  MASK = 0x7ffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x1a)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x1a) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size28 < LFSR::Base
  MASK = 0xfffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x1b)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x1b) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size29 < LFSR::Base
  MASK = 0x1fffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[4]) << 0x1c)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[4]) << 0x1c) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size30 < LFSR::Base
  MASK = 0x3fffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x1d)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x1d) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size31 < LFSR::Base
  MASK = 0x7fffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x1e)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x1e) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size32 < LFSR::Base
  MASK = 0xffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[6]^@reg[7]) << 0x1f)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[6]^@reg[7]) << 0x1f) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size33 < LFSR::Base
  MASK = 0x1ffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x20)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x20) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size34 < LFSR::Base
  MASK = 0x3ffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[4]^@reg[8]) << 0x21)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[4]^@reg[8]) << 0x21) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size35 < LFSR::Base
  MASK = 0x7ffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[7]^@reg[8]) << 0x22)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[7]^@reg[8]) << 0x22) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size36 < LFSR::Base
  MASK = 0xfffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[7]^@reg[8]) << 0x23)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[7]^@reg[8]) << 0x23) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size37 < LFSR::Base
  MASK = 0x1fffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x24)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[6]) << 0x24) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size38 < LFSR::Base
  MASK = 0x3fffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[5]^@reg[6]) << 0x25)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[5]^@reg[6]) << 0x25) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size39 < LFSR::Base
  MASK = 0x7fffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[7]) << 0x26)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[7]) << 0x26) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size40 < LFSR::Base
  MASK = 0xffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[4]^@reg[5]) << 0x27)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[4]^@reg[5]) << 0x27) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size41 < LFSR::Base
  MASK = 0x1ffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x28)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[3]) << 0x28) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size42 < LFSR::Base
  MASK = 0x3ffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[5]^@reg[7]) << 0x29)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[5]^@reg[7]) << 0x29) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size43 < LFSR::Base
  MASK = 0x7ffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[5]^@reg[6]) << 0x2a)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[5]^@reg[6]) << 0x2a) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size44 < LFSR::Base
  MASK = 0xfffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[5]^@reg[6]) << 0x2b)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[5]^@reg[6]) << 0x2b) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size45 < LFSR::Base
  MASK = 0x1fffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x2c)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[4]) << 0x2c) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size46 < LFSR::Base
  MASK = 0x3fffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[6]^@reg[7]^@reg[8]) << 0x2d)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[6]^@reg[7]^@reg[8]) << 0x2d) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size47 < LFSR::Base
  MASK = 0x7fffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[5]) << 0x2e)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[4]^@reg[5]) << 0x2e) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size48 < LFSR::Base
  MASK = 0xffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[4]^@reg[7]^@reg[9]) << 0x2f)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[4]^@reg[7]^@reg[9]) << 0x2f) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size49 < LFSR::Base
  MASK = 0x1ffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[4]^@reg[5]^@reg[6]) << 0x30)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[4]^@reg[5]^@reg[6]) << 0x30) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size50 < LFSR::Base
  MASK = 0x3ffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[4]) << 0x31)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[4]) << 0x31) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size51 < LFSR::Base
  MASK = 0x7ffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[6]) << 0x32)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[6]) << 0x32) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size52 < LFSR::Base
  MASK = 0xfffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[6]) << 0x33)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[3]^@reg[6]) << 0x33) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size53 < LFSR::Base
  MASK = 0x1fffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[6]) << 0x34)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[6]) << 0x34) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size54 < LFSR::Base
  MASK = 0x3fffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[6]^@reg[8]) << 0x35)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[3]^@reg[6]^@reg[8]) << 0x35) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size55 < LFSR::Base
  MASK = 0x7fffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[6]) << 0x36)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[6]) << 0x36) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size56 < LFSR::Base
  MASK = 0xffffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[4]^@reg[7]) << 0x37)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[4]^@reg[7]) << 0x37) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size57 < LFSR::Base
  MASK = 0x1ffffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[5]) << 0x38)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[3]^@reg[5]) << 0x38) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size58 < LFSR::Base
  MASK = 0x3ffffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[5]^@reg[6]) << 0x39)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[5]^@reg[6]) << 0x39) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size59 < LFSR::Base
  MASK = 0x7ffffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[4]^@reg[7]) << 0x3a)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[4]^@reg[7]) << 0x3a) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size60 < LFSR::Base
  MASK = 0xfffffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[4]^@reg[5]) << 0x3b)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[2]^@reg[4]^@reg[5]) << 0x3b) while @reg > @max
    @reg - 1
  end
end


class LFSR::Pure::Size61 < LFSR::Base
  MASK = 0x1fffffffffffffff

  def next_i
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x3c)
    @reg = (@reg >> 1) | ((@reg[0]^@reg[1]^@reg[2]^@reg[5]) << 0x3c) while @reg > @max
    @reg - 1
  end
end

LFSR.default_to(LFSR::Pure)
