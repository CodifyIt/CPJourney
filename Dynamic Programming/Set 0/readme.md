# Nth Fibonacci Number
Here we start with the basic problem of finding the **nth** number of Fibonacci series.

### Fibonacci Series is as following
> 1 1 2 3 5 8 13 21 34 . . . .

From the series we can conclude that for **nth** number (n>2).<br />
The Fibonacci Number is **Sum of (n-1)th Fibonacci Number and (n-2)th Fibonacci Number**.<br />
That is, **Fibonacci[n] = Fibonacci[n-1] + Fibonacci[n-2]**.<br />

## Explanation of Solutions.
### 1. Fibonacci (Top-Down Approach)
From the basic rule of Fibonacci we see that nth term is equal to the sum of (n-1)th and (n-2)th term.<br />
The base conditions i.e the first and the second number of the series are 1 1,therefore they are hardcoded.<br />
The recursive call will return 1 when it encounters n == 1 or n == 0

The recursive calls look like following tree.

![Fibonacci(4) expansion](images/Fib(4)%20Tree.png)

The answer will be generated as follows

![Fibonacci(4) expansion](images/Fib(4)%20Value%20Tree.png)

> Time Complexity ~ O(2^n)<br />
> Space Complexity ~ O(n), if recursion stack is taken in to account, else O(1)

### 2. Fibonacci (Top-Down with Memoization)
In previous solution we can see that the algorithm is computing **fib(2)** twice.<br />
If we take an array, let's say **memo[n+1]** and store the result of **fib(2)** in it when it is computed for the first time,<br />
and use the calculated result when we need to calculate **fib(2)** again.<br />

![Fibonacci(4) expansion](images/Fib%20memo%201.png)

The answer will be generated as follows

![Fibonacci(4) expansion](images/Fib%20memo%202.png)

It doesn't looks much of an improvement, but imagine if we take fib(6) then we will have to compute the entire fib(4) twice.<br />
Similarly, with increase in the value of 'n', the amount required to construct a tree will decrease significantly.<br />

> Time complexity ~ O(n) ( much less than O(2^n))<br />
> Space Complexity ~ O(n) (Extra space required to memorize the result of a state)

### 3. Fibonacci (Bottom-Up approach)
Since we know that the solution for 0th Fibonacci number is 1 and for 1st Fibonacci number is 1, further we know that 2nd Fibonacci number is calculated using 0th and st Fibonacci number, hence we can start building our solution from this known base case and continue building it till we reach the desired state.

The solution works as follows

![Fibonacci(4) generation](images/Fib%20BU%20array.png)

> Time complexity ~ O(n)<br />
> Space Complexity ~ O(n)

### 4. Fibonacci (Bottom-Up approach with space optimization)
Since we need to remember only the result of the last two states, therefore, we can use only two variables to store the result of previous two states rather than using an entire array.

The solution works as follows
	
![Fibonacci(4) generation](images/Fib%20BU%20var.png)

> Time complexity ~ O(n)<br />
> Space Complexity ~ O(1)