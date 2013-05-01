require 'lfsr/pure'

# The following LFSR will be 4 bits long, which means it will be able to
# iterate from 0 to 14. (14 == (2**4 - 2))
# A maximum value of 10 is set though, which means the values returned
# will be 'truncated' in the range [0, 10]
# The seed is 1. As long as you use the same seed, the pseudo-random 
# sequence will start with the same number.
gen = LFSR::Size4.new 9, 2

puts 10.times.map { gen.next_i }.join(" ") << "\n\n"

puts "once the sequence is complete, it starts again:"

puts 10.times.map { gen.next_i }.join(" ") << "\n\n"

puts "The seed can be changed at any time:"

gen.reset(0b1011)

puts 10.times.map { gen.next_i }.join(" ") << "\n"
