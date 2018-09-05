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

The answer will be generated as follows

![Fibonacci(4) expansion](images/Fib(4)%20Value%20Tree.png)

### 2. Fibonacci
In previous solution we can see that the algorithm is computing **fib(2)** twice.<br />
If we take an array, let's say **memo[n+1]** and store the result of **fib(2)** in it when it is computed for the first time,<br />
and use the calculated result when we need to calculate **fib(2)** again.<br />

![Fibonacci(4) expansion](images/Fib%20memo%201.png)

The answer will be generated as follows

![Fibonacci(4) expansion](images/Fib%20memo%202.png)