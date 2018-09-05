# Nth Fibonacci Number
Here we start with the basic problem of finding the **nth** number of Fibonacci series.

### Fibonacci Series is as following
> 1 1 2 3 5 8 13 21 34 . . . .

From the series we can conclude that for **nth** number (n>2).<br />
The Fibonacci Number is **Sum of (n-1)th Fibonacci Number and (n-2)th Fibonacci Number**.<br />
That is, **Fibonacci[n] = Fibonacci[n-1] + Fibonacci[n-2]**.<br />

## Explanation of Solutions.
### 1. Fibonacci
> From the basic rule of Fibonacci we see that nth term is equal to the sum of (n-1)th and (n-2)th term.<br />
> The base conditions i.e the first and the second number of the series are 1 1,therefore they are hardcoded.<br />
> The recursive call will return 1 when it encounters n == 1 or n == 0

The recursive calls look like following tree.

![Fibonacci(4) expansion](images/Fib(4)%20Tree.png)

The computation of will be in following way.

![Fibonacci(4) expansion](images/Fib(4)%20Value%20Tree.png)
