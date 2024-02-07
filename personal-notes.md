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

## Storing Negative numbers in C++

We convertthe number to it's **2's compliment** and then store it.

```C++
// first bit = 0 ~ POSITIVE NUMBER
// first bit = 1 ~ NEGATIVE NUMBER

// 2's compliment = 1's compliment + 1.

// 1's compliment is just the bits **flipped**.
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

## Power of 2 alternative method

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

***

## XOR

`0 ^ x = x`

`x ^ x = 0`

***

## Pre-defined Functions in C++

min(), max(), sort(), swap()

***

## Binary Search Index Trick

In binary search, if :

`start = INT_MIN` 

and

`end = INT_MAX`, 

then, 

`mid = (start + end)/2` 

will be out of range of `int` datatype in C++.
So, we should be clever and use the following relation for `mid`. 
```C++
mid = (start/2 + end/2);

// or

mid = start + (end - start)/2
```

***

## Algorithm Complexity

Linear Search : `O(n)`

Binary Search : `O(log n)`

***

Lecture-11 didn't have any programming. It talked about space and time complexity.

[lecture.11 notes](lecture-11\notes.md)

***

## LeetCode Problems Code

[LeetCode - 186. Reverse Words in a String II](https://labs.thecodehelp.in/quick-compiler/view/eZzhCx9F)

***

## Good Artile for Pointers

[GFG - Pointers](https://www.geeksforgeeks.org/cpp-pointers/)

[Character Arrays and Pointers](https://labs.thecodehelp.in/quick-compiler/view/kIFVLjjO)

[Pointers and Functions](https://labs.thecodehelp.in/quick-compiler/view/p4fgb7l4)