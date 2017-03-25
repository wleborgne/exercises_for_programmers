# Quote
Chapter 2, exercise 3

Ask for two string, one being a quote, the other being the person who said it.
Join the strings and print in the form:
```
<person> says, "<quote>"
```
A tricky thing here is deciding on the max size of the arrays which will hold the quote; I don't currently recall how to do this without static sizes for the arrays.

Decided to declare `max_input` as a constant, and also to create a constant for the newline chars used in truncating the input strings.

TODO: Put the input and string processing in functions rather than doing the same thing twice.
