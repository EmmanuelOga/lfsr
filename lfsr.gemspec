# encoding: UTF-8

Gem::Specification.new do |s|
  s.name = 'lfsr'
  s.version = '1.0.0'
  s.summary = "Generate sequences of pseudo random numbers"
  s.description = <<-EOF
    The generation of random numbers is too important to be left to chance.
    A Linear Feedback Shift Register is an automaton that
    can be used to generate a long sequence of different pseudo-random numbers.
  EOF
  s.email = 'emmanueloga@gmail.com'
  s.homepage = 'http://github.com/EmmanuelOga/lfsr'
  s.authors = ["Emmanuel Oga"]

  s.files = %w[
    scripts/genc.rb
    scripts/bench
    scripts/genruby.rb
    scripts/taps.rb
    examples/sample.rb
    test/lfsr_test.rb
    LICENSE
    lfsr.gemspec
    ext/lfsr/extconf.rb
    ext/lfsr/lfsr.c
    ext/lfsr/lfsr.h
    Rakefile
    lib/lfsr.rb
    lib/lfsr/fast.rb
    lib/lfsr/pure.rb
    README.markdown
  ]
  s.test_files = ["test/lfsr_test.rb"]
  s.extra_rdoc_files = ["LICENSE"]
  s.extensions = ["ext/lfsr/extconf.rb"]
  s.require_paths = ["lib"]
end
