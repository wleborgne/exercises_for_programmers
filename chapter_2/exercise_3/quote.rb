#!/usr/bin/env ruby

print "What is the quote? "
quote = gets.chomp

print "Who said it? "
they = gets.chomp

output = they + ' says,"' + quote +'"'
puts output
