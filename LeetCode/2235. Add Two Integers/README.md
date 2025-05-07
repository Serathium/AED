# Problem
Given two integers `num1` and `num2`, return *the* **sum** *of the two integers.*

## Intuition
The problem seems simple at first glance and that's because it is. One possible issue I can see happening is an integer overflow, which I don't address	in this solution. 

## Approach
My approach to solving the problem was to directly return the sum itself, without storing the result in a variable inside the function. Doing so results in less memory used.

## Complexity

- Time complexity:
	T(n) = O(1), constant. The sum function executes a simple sum arithmetic operation and is called only once by the main function, that also calls printf only once.

- Space complexity:
	S(n) = O(1), constant. The program uses fixed size variables and there aren't and scalable data structures like arrays or lists, therefore the memory space utilized is constant and doesn't vary based on input size.
