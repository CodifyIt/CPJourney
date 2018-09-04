# Nth Fibonacci Number
Here we start with the basic problem of finding the **nth** number of Fibonacci series.

### Fibonacci Series is as following
> 1 1 2 3 5 8 13 21 34 . . . .

From the series we can conclude that for **nth** number (n>2)<br />
The Fibonacci Number is **Sum of (n-1)th Fibonacci Number and (n-2)th Fibonacci Number**.<br />
That is, **Fibonacci[n] = Fibonacci[n-1] + Fibonacci[n-2]**.<br />

## Explanation of Solutions.
### 1. Fibonacci
> From the basic rule of Fibonacci we see that nth term is equal to the sum of (n-1)th and (n-2)th term.
> The base conditions i.e the first and the second number of the series are 1 1,therefore they are hardcoded.
> The recursive call will return 1 when it encounters n == 1 or n == 0

The recursive calls look like following tree.
>				[3+2]=[5]   fib(4)
>			  	      /	   \
>		  [2+1]=[3] fib(3) 		  [1+1]=[2] fib(2)
>		           /	  \				   /	 \
>     [1+1]=[2] fib(2) [1] fib(1) [1] fib(1) [1] fib(0)
>		       /	 \
>     [1] fib(1) [1] fib(0)
