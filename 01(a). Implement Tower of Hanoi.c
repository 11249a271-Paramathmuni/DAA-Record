Aim: To solve the Tower of Hanoi problem using recursion and display the sequence of moves.

Algorithm: TOWER_OF_HANOI(n, Source, Destination, Auxiliary)

Start
If n = 1 then
  Print "Move disk 1 from Source to Destination"
  Return
Call TOWER_OF_HANOI(n-1, Source, Auxiliary, Destination)
Print "Move disk n from Source to Destination"
Call TOWER_OF_HANOI(n-1, Auxiliary, Destination, Source)
Stop

Program:

#include <stdio.h>

void toh(int n, char x, char y, char z)
{
    if(n == 1)
    {
        printf("\nDisk %d from %c to %c", n, x, y);
    }
    else
    {
        toh(n-1, x, z, y);
        printf("\nDisk %d from %c to %c", n, x, y);
        toh(n-1, z, y, x);
    }
}

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    toh(n, 'A', 'B', 'C');

    return 0;
}

Sample Input:

Enter the number of disks: 3

Sample Output:

Disk 1 from A to B
Disk 2 from A to C
Disk 1 from B to C
Disk 3 from A to B
Disk 1 from C to A
Disk 2 from C to B
Disk 1 from A to B

Result: Thus, the Tower of Hanoi problem is solved successfully using recursion, and the sequence of moves is displayed.
