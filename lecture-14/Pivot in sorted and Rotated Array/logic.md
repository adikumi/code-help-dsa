## Question : Find Pivot element in Sorted and Rotated Array.

#### What is **Pivot Element** ?
In this context, pivot is the point at which the array **breaks it's monotonicity.**

**Example :** 

`conider a sorted array : [1 3 5 7 9]`

Let's rotate it. We get, a **sorted and rotated array**

`[1 3 5 (7 9)] -> [1 3 5] and [7 9] -> [7 9] and [1 3 5] -> [7 9 1 3 5]`

`sorted and rotated array : [(7 9) 1 3 5]`

Now, in this array, `9` or `1` both can be considered the **pivot**.

The question wants us to find this pivot.

***

We use Binary Search to solve this problem. 

We can see, in case of pivot 

```C++
arr[i] > arr[i + 1] // for arr[i] == 9
```
or
```C++
arr[i] < arr[i - 1] // for arr[i] == 1
```

Which condition we want to use depends on the pivot we want to find.

Now, in case of Binary search we consider a `start` and `end` values and modify it depending on the value of mid.

Now, if we can clearly see, if we are on the left side of the pivot,