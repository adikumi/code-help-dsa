# personal notes

i forget stuffs a lot so i'lll write any interesting notable things here.

***

## converting a charchter to ascii

any `char` will be converted to it's ascii representation, on doing `int()`.

```C++
char c = 'a';
int i = int(c); // i = 97
```

***

## converting a number to characters.

ie. convert `(int)232` to `(char)'232'`.

```C++
int i = 6;
char c = i + '0'; // important step
cout << c;
// this works or 0-9.
```