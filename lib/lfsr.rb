module LFSR
  VERSION = "1.0.0"

  class Base
    attr_reader :reg
    attr_accessor :max
    attr_reader :seed

    def initialize(max = nil, seed = nil)
      # The C code depends on this being the first ivar to work properly.
      @reg = 1

      # This should be the second variable.
      @max = (max || self.class.const_get(:MASK) - 1) + 1

      reset seed
    end

    def reset(new_seed)
      @reg = @seed = (new_seed || Time.now.utc.to_i) & self.class.const_get(:MASK)
      raise ArgumentError, "The seed #{new_seed} is unacceptable for this register size" if new_seed && @reg == 0
      @reg = @seed = (new_seed || Time.now.utc.to_i) & self.class.const_get(:MASK) while @reg == 0
    end

    alias peek reg
  end

  # Get a LFSR with the appropriate number of bits to reach the maximum needed.
  def self.gen(max, namespace = LFSR)
    bits = Math.log2(max + 2).ceil
    namespace.const_get("Size#{bits < 3 ? 3 : bits}").new(max)
  end

  def self.default_to(namespace)
    2.upto(61) { |n| remove_const("Size#{n}")} if defined? LFSR::Size2
    2.upto(61) { |n| const_set("Size#{n}", namespace.const_get("Size#{n}")) }
  end
end
