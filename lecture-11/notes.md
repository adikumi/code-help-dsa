## Time Complexity

It is the amount of time taken by an algorithm to run as a function of the input.

**WHY ?**

- for making more optiml program.
- comparison of algorithms.

***

#### Types

Big O : upper bound

Theta O : for average case omplexity

Omega O : lower bound

***

#### Notations

- Constant Time : $O(1)$
- Linear Time : $O(n)$
- Logarithmic Time : $O(log n)$
- Quadratic Time : $O(n^2)$
- Cubic Time : $O(n^3)$

##### Order

$O(1)$ -> $O(log n)$ -> $O(n)$ -> $O(n \times log n)$ -> $O(n ^ 2)$ -> $O(n ^ 3)$ -> $O(2 ^ n)$ -> $O(n!)$

## TIME COMPLEXITY CHART

| Inputs         | Complexity                 |
| -------------- | -------------------------- |
| < $[10 .. 11]$ | $O(n!)$, $O(n ^ 6)$        |
| < $[15 .. 18]$ | $O(2 ^ n \times 2 ^ n)$    |
| < $100$        | $O(n ^ 4)$                 |
| < $400$        | $O(n ^ 3)$                 |
| < $2000$       | $O(n ^ 2 log n)$           |
| < $10 ^ 4$     | $n ^ 2$                    |
| < $10 ^ 6$     | $n log n$                  |
| < $10 ^ 8$     | $O(n)$, $O(log n)$, $O(1)$ |

***

## Space Complexity

Amount of memory taken by the algorithm to run.