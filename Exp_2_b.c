#include<stdio.h>

int main()
{
    /*
    Name: Zain Mohamed Saeed Kazi
    UIN: 251P040
    Roll No: 37
    Division: C
    Class: Comps_1
    */

    int num1, num2;
    int sum = 0;

    printf("Enter the Number to Start from: ");
    scanf("%d", &num1);

    printf("Enter the Number to End at: ");
    scanf("%d", &num2);
    
    for (int i = num1; i<=num2; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum +i;
        }
        else if ( i % 2 ==0)
        {
            i = i + 1;
            sum = sum + i;
        }
    }
    printf("Sum of all the Odd Numbers between the 2 numbers is: %d", sum);

    return 0;
}