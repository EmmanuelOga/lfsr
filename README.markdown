# Linear Feedback Shift Register

    The generation of random numbers is too important to be left to chance.
                                                                        Robert R. Coveyou

## What is a LFSR?

A linear feedback shift register (LFSR) is a shift register whose input
bit is a linear function of its previous state. The initial value of the
LFSR is called the seed.

Because the operation of the register is deterministic, the stream of
values produced by the register is completely determined by its current
(or previous) state.

Likewise, because the register has a finite number of possible states,
it must eventually enter a repeating cycle.

However, an LFSR with a well-chosen feedback function can produce a
sequence of bits which appears random and which has a very long cycle.
Applications of LFSRs include generating pseudo-random numbers,
pseudo-noise sequences, fast digital counters, and whitening sequences.

[Full Wikipedia Explanation](http://en.wikipedia.org/wiki/Linear_feedback_shift_registers).

## How to use it

This gem supports ruby 1.9 and greater only.

```ruby
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
```

Produces:

```
8 5 4 9 6 2 0 7 3 1

once the sequence is complete, it starts again:
8 5 4 9 6 2 0 7 3 1

The seed can be changed at any time:
4 9 6 2 0 7 3 1 8 5
```

## Notes

### Randomness

The main reason you would use a LFSR is because you need a long,
non-repeating sequence of numbers.

A shuffled array of numbers can be used for this, but using a LFSR is
nice because you don't need to allocate memory for each of the numbers
in the sequence.

The disadvantage is that a LFSR doesn't generate numbers that are hard
to distinguish from a truly random source. The sequence of numbers a
LFSR generates is kind of... well... predictable.

Depending on your use case this may or may not be a problem for you.

### Seed

The seed gets truncated to the number of bits of the LFSR.

The seed must be a non 0 value, in relation to the size of the register
you are using.

For instance, if I try to use a seed of 8 for a LFSR::Size3, it will
fail, because the seed is truncated to the bits of the register, and
0b1000 truncated to 3 bits is 0.

If you don't provide a seed, Time.now.to_i will be used to seed the
LFSR.

## Fast / Pure-ruby versions

There are **two ways to require the library**:

```ruby
require 'lfsr/fast' # C extesion

gen = LFSR::Fast::Size3.new
gen = LFSR::Size3.new # defaults to the lastest required generators, in this case Fast
```

or:

```ruby
require 'lfsr/pure' # C extesion

gen = LFSR::Pure::Size3.new
gen = LFSR::Size3.new # defaults to the lastest required generators, in this case Pure
```

On my system, the performance of LFSR C extension is more than 10X that of the pure ruby version and more than 2X faster than calling rand():

Output of scripts/bench:

    Bits	| Pure	| C ext	| rand	| Vs P.	| Vs rand
    -----------------------------------------------
       2	| 0.22s	| 0.05s	| 0.12s	| 4.9X	| 2.5X
       3	| 0.26s	| 0.05s	| 0.12s	| 5.4X	| 2.5X
       4	| 0.32s	| 0.05s	| 0.12s	| 6.5X	| 2.4X
       5	| 0.50s	| 0.05s	| 0.12s	| 9.8X	| 2.4X
       6	| 0.54s	| 0.05s	| 0.12s	| 10.2X	| 2.3X
       7	| 0.55s	| 0.05s	| 0.12s	| 10.4X	| 2.3X
       8	| 0.56s	| 0.05s	| 0.12s	| 10.3X	| 2.2X
       9	| 0.57s	| 0.05s	| 0.12s	| 10.5X	| 2.3X
                ... and so on...

## Acknowledgements

The main shift loop is loosely based on [capricious'](https://raw.github.com/willb/capricious/master/lib/capricious/lfsr.rb).
The taps table comes from [here](http://home1.gte.net/res0658s/electronics/LFSRtaps.html).
I shamelessly stole the structure of this project from another C
extension, [rinku](https://github.com/vmg/rinku).

## License

The MIT License (MIT)

Copyright (c) 2013 Emmanuel Oga

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
