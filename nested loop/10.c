#include <stdio.h>
#include<conio.h>
int main()
{

    int rows = 5; // Number of rows in the pattern
    int number = 1; // Starting number

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

   return 0;
}





}
