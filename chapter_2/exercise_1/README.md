# Hello
Chapter 2, exercise 1

It's been a while since I've had to use a static typed language;
it took me a while to remember/find good ways to declare a string
and get user input relatively safely.

The fun bit was finding a way to strip the newline. `strcspn` is a
pretty good solution. In the docs I found, it's declared as:
```C
size_t strcspn(const char *dest, const char *src);
```
 Briefly, it returns the length of the largest
string from the beginning of `dest` that doesn't contain any of the characters in `src`.

In our use case, that happens to be the position of the newline characters, so setting that position of `dest` to `0` will terminate the string earlier.

Note: this current solution does not completely satisfy the constraint of keeping input, string concatenation, and output separate.
