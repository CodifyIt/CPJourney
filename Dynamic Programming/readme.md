# Dynamic Programming
This directory deals with my journey with Dynamic Programming.

It won't be as easy as the other tracks, but I'll try to keep it simple.

Much of the approaches to DP are directly inhereted following sources
### **[GeeksForGeeks](www.geeksforgeeks.org)**
### **[Competitive Programming (NUS)](https://www.comp.nus.edu.sg/~stevenha/myteaching/competitive_programming/cp1.pdf)**

Starting from Set 0, every Set has the index prefixed with every code file, which is the way in which I recommend approaching the certain set.

>### **Usually I will be starting by making a simple recursive solution to the problem, known as Top-Down approach.**
>### **Then I'll add memoization to the above approach in order to deal with overlapping sub-problems.**
>### **Finally, I'll derive Bottom-Up approach from the latter to further decrease the complexity and run time.**

### What is Top-Down approach?
> It is a way to approach to solution by dividing the problem in to sub-problems and combining their result to get the final result.<br />
> We start from Top, i.e. the required answer, and keep dividing the problem in to sub-problems and dividing those sub-problems in to further sub sub-problems.<br />
> Until we reach a certain pre-defined base case and start computing the result and returning it to the super-problem.

>In conclusion, we start from the required answer and keep dividing it, recursively,  until we reach the base case and then come back to it by calculating the result and hence return the final result.

### What is Bottom-Up approach?
> It is a way to approach to solution by starting from the base case i.e known to us and thus computing the result for next state until we reach the desired answer.

### What is memoization?
> It is a technique in which we store the result of a state and use stored result without computing the answer for the state again.