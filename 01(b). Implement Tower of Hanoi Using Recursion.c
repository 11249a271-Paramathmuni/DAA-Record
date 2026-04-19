Aim: To write a C program to solve the Tower of Hanoi problem using recursion.

Algorithm:

Algorithm: TOWER_OF_HANOI(n, Source, Destination, Auxiliary)

If n = 1 then
→ Print "Move disk 1 from Source to Destination"
→ Return
Call TOWER_OF_HANOI(n-1, Source, Auxiliary, Destination)
Print "Move disk n from Source to Destination"
Call TOWER_OF_HANOI(n-1, Auxiliary, Destination, Source)
End

Program:

#include <stdio.h>

void tower(int n, char from, char to, char aux) 
{
    if (n == 1) 
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    tower(n-1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower(n-1, aux, to, from);
}

int main() 
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'C', 'B');

    return 0;
}

Sample Input:

Enter number of disks: 3

Sample Output:

Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C

Result: Thus, the Tower of Hanoi problem is solved successfully using recursio
