# Exercises: Pointers

1.  Write a program that declares an integer, a real number, and a char, and pointers to integer, real, and char. [cite: 2] Associate the variables with the pointers (use &). [cite: 3] Modify the values of each variable using the pointers. [cite: 3] Print the values of the variables before and after the modification. [cite: 4]

2.  Write a program that contains two integer variables. [cite: 4] Compare their addresses and display the larger address. [cite: 5]

3.  Write a program that contains two integer variables. [cite: 5] Read these variables from the keyboard. [cite: 5, 6] Then, compare their addresses and display the content of the larger address. [cite: 6]

4.  Write a program that reads 2 integer values and calls a function that receives these 2 variables and swaps their content, that is, this function is called passing two variables A and B for example, and after the execution of the function, A will contain the value of B and B will have the value of A. [cite: 7]

5.  Write a program that reads two integer values and calls a function that receives these 2 input values and returns the larger value in the first variable and the smaller value in the second variable. [cite: 7, 8] Write the content of the 2 variables on the screen. [cite: 8]

6.  Develop a program that reads two integer values (A and B). [cite: 8, 9] Then, create a function that returns the sum of the double of the two numbers read. [cite: 9] The function should store the double of A in the variable A itself and the double of B in the variable B itself. [cite: 10]

7.  Create a program that contains a function that allows passing two integer numbers A and B by parameter. [cite: 10] The function must calculate the sum between these two numbers and store the result in variable A. This function should not have a return, but should modify the value of the first parameter. [cite: 10, 11] Print the values of A and B in the main function. [cite: 11]

8.  Create a program that contains an array of float containing 10 elements. [cite: 12] Print the address of each position of this array. [cite: 12]

9.  Create a program that contains a matrix of float containing 3 rows and 3 columns. [cite: 13, 14] Print the address of each position of this matrix. [cite: 14]

10. Create a program that contains an array of integers containing 5 elements. [cite: 14, 15] Using only pointer arithmetic, read this array from the keyboard and print the double of each value read. [cite: 15]

11. Create a program that contains an array containing 5 integer elements. [cite: 16, 17] Read this array from the keyboard and print the address of the positions containing even values. [cite: 17]

12. Write a program that reads three integer values and calls a function that receives these 3 input values and returns them sorted, that is, the smallest value in the first variable, the second smallest value in the middle variable, and the largest value in the last variable. [cite: 18] The function must return the value 1 if the three values are equal and 0 if there are different values. [cite: 19, 20] Display the sorted values on the screen. [cite: 20]

13. Develop a function that receives two strings as parameters and checks if the second string occurs within the first. [cite: 21, 22] Use pointer arithmetic to access the characters of the strings. [cite: 22]

14. Create a function that receives two parameters: an array and a value of the same type as the array. [cite: 22, 23] The function should fill the array elements with this value. [cite: 23, 24] Do not use indices to traverse the array, only pointer arithmetic. [cite: 24]

15. Create a function that receives an array as a parameter and prints it. [cite: 25, 26] Do not use indices to traverse the array, only pointer arithmetic. [cite: 26]

16. Consider the following declaration: int A, \*B, \*\*C, \*\*\*D; [cite: 26, 27] Write a program that reads the variable a and calculates and displays the double, triple, and quadruple of this value using only the pointers B, C, and D. The pointer B must be used to calculate the double, C the triple, and D the quadruple. [cite: 27]

17. Write a function that, given a real number passed as a parameter, returns the integer part and the fractional part of this number. [cite: 28, 29] Write a program that calls this function. [cite: 29] Prototype: `void frac(float num, int* integer, float* frac);` [cite: 29]

18. Implement a function that calculates the surface area and the volume of a sphere of radius R. This function must obey the prototype: `void calc_esfera (float R, float *area, float *volume)` The surface area and the volume are given, respectively, by: $A = 4 * p * R^2$ $V = 4/3 * p * R^3$ [cite: 30]

19. Write a function that accepts as a parameter an array of integers with N values, and determines the largest element of the array and the number of times this element occurred in the array. [cite: 30, 31] For example, for an array with the following elements: 5, 2, 15, 3, 7, 15, 8, 6, 15, the function should return to the program that called it the value 15 and the number 3 (indicating that the number 15 occurred 3 times). [cite: 31, 32] The function must be of type void. [cite: 32]

20. Implement a function that receives as a parameter an array of real numbers of size N and returns how many negative numbers there are in this array. [cite: 32, 33] This function must obey the prototype: `int negativos (float *vet, int N);` [cite: 33]

21. Write a program that declares an array of integers and a pointer to integers. [cite: 34] Associate the pointer to the array. [cite: 34, 35] Now, add one (+1) to each position of the array using the pointer (use \*). [cite: 35]

22. Create a function to sum two arrays. [cite: 36] This function must receive two arrays and return the sum in a third array. [cite: 36, 37] If the size of the first and second array is different, then the function will return ZERO (0). [cite: 37, 38] If the function is completed successfully, it should return the value ONE (1). [cite: 38, 39] Use pointer arithmetic for array manipulation. [cite: 39]

23. Write a function that returns the largest value of an array of size N. Write a program that reads N integer values, prints the array with k elements per line, and the largest element. [cite: 39, 40] The value of k should also be provided by the user. [cite: 40]

24. Write a function that receives an array of integers V and the addresses of two integer variables, min and max, and stores in these variables the minimum and maximum value of the array. [cite: 41, 42] Also write a main function that uses this function. [cite: 42]

25. Write a program that has a function to:

    * read 2 grades and return them by parameter (call a dedicated function to read 2 valid grades and return the 2 numbers read); [cite: 42, 43]
    * calculate the simple average and the weighted average and return them by parameter, where the second grade has a weight of 2 $\text{weighted\_average} = (n1 + n2 \* 2) / 3$; [cite: 43]

26. Implement a function that calculates the roots of a quadratic equation of the form $Ax^2 + Bx + C = 0$. Remembering that: $X = \frac{-B \pm \sqrt{\Delta}}{2A}$ Where $\Delta = B^2 - 4AC$ The variable A must be different from zero. [cite: 43, 44]
    * If $\Delta < 0$, there are no real roots.
    * If $\Delta = 0$, there is one real root.
    * If $\Delta \ge 0$, there are two real roots.

    This function must obey the following prototype: `int raizes (float A, float B, float C, float \*X1, float \*X2);` [cite: 45] This function should have as a return value the number of distinct real roots of the equation. [cite: 46, 47] If real roots exist, their values should be stored in the variables pointed to by X1 and X2.
