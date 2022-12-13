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

ie. convert `(int)7` to `(char)'7'`.

```C++
int i = 6;
char c = i + '0'; // important step
cout << c;
// this works or 0-9.
```

***

## Check if a number is odd or even.

For checking a number `n` is odd or even, we generally do this :

```
int n;
if (n%2 == 0)
{
    cout << "n is even";
}
```

But, we can also do this to check if a number is odd or even :

```
int n;
if (n&1 == 1)
{
    cout << "n is odd";
}
else
{
    cout << "n is even";
}
```

`(any_number & 1) == 1` only if the number is odd.

`(any_number & 1) == 0` only if the number is even.

***

Power of 2 alternative method

`n = 8` check if it is a power of 2.

if number of set bits is equal to 1, then, the number is a power of 2.

```C++
int count = 0;
while(n != 0)
{
    if (n&1 == 1)
    {
        coount++;
    }
    n = (n>>1);
}
if (count == 1)
{
    cout << "power of 2.";
}
else
{
    cout << "not power of 2";
}
```