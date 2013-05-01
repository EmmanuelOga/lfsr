require 'date'
require 'rake/clean'
require 'rake/extensiontask'

task :default => :test

# ==========================================================
# Generate files
# ==========================================================

file "lib/lfsr.rb" => "scripts/genruby.rb" do
  sh "ruby -Iscripts/ scripts/genruby.rb base > lib/lfsr.rb"
end

file "lib/lfsr/pure.rb" => "scripts/genruby.rb" do
  sh "ruby -Iscripts/ scripts/genruby.rb > lib/lfsr/pure.rb"
end

file "ext/lfsr/lfsr.c" => "scripts/genc.rb" do
  sh "ruby -Iscripts/ scripts/genc.rb > ext/lfsr/lfsr.c"
end

desc "Generate files"
task :generate => ["lib/lfsr.rb", "lib/lfsr/pure.rb", "ext/lfsr/lfsr.c"]

# ==========================================================
# Ruby Extension
# ==========================================================

Rake::ExtensionTask.new('lfsr')

task :compile => :generate

# ==========================================================
# Testing
# ==========================================================

require 'rake/testtask'
Rake::TestTask.new('test') do |t|
  t.test_files = FileList['test/*_test.rb']
  t.ruby_opts += ['-rubygems'] if defined? Gem
end
task 'test' => [:compile]

# PACKAGING =================================================================

require 'rubygems'
$spec = eval(File.read('lfsr.gemspec'))

def package(ext='')
  "pkg/lfsr-#{$spec.version}" + ext
end

desc 'Build packages'
task :package => package('.gem')

desc 'Build and install as local gem'
task :install => package('.gem') do
  sh "gem install #{package('.gem')}"
end

directory 'pkg/'

file package('.gem') => %w[pkg/ lfsr.gemspec] + $spec.files do |f|
  sh "gem build lfsr.gemspec"
  mv File.basename(f.name), f.name
end
