Aim: To write a C program to find the nth Fibonacci number using both:
Recursion method
Iteration method

Algorithm:

Algorithm: FIB_RECURSIVE(n)
If n ≤ 1, return n
Return FIB_RECURSIVE(n−1) + FIB_RECURSIVE(n−2)
End

Algorithm: FIB_ITERATIVE(n)
If n = 0, return 0
Assign a ← 0
Assign b ← 1
For i ← 2 to n do
  c ← a + b
  a ← b
  b ← c
Return b
End

Program:

#include <stdio.h> 
int fib_rec(int n) { 
    if (n <= 1) 
        return n; 
    return fib_rec(n-1) + fib_rec(n-2); 
} 

int fib_iter(int n) { 
    int a = 0, b = 1, c, i; 
    if (n == 0) return 0; 
    for (i = 2; i <= n; i++) { 
        c = a + b; 
        a = b; 
        b = c; 
    } 
    return b; 
} 

int main() { 
    int n; 
    printf("Enter n: "); 
    scanf("%d", &n); 
    printf("Recursive Fibonacci: %d\n", fib_rec(n)); 
    printf("Iterative Fibonacci: %d\n", fib_iter(n)); 
    return 0; 
}

Sample Input:
Enter n: 6

Sample Output:

Recursive Fibonacci: 8
Iterative Fibonacci: 8

Result: Thus, the program to find the nth Fibonacci number using recursion and iteration is executed successfully, and the output is verified.
