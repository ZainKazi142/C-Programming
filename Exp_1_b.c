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

    int marksP, marksC, marksM, sum;
    float avg;

    printf("Enter Marks obtained in Physics out of 100: \n");
    scanf("%d", &marksP);

    printf("Enter Marks obtained in Chemistry out of 100: \n");
    scanf("%d", &marksC);

    printf("Enter Marks obtained in Mathematics out of 100: \n");
    scanf("%d", &marksM);

    sum = marksP + marksC +marksM;
    avg = sum/3;
    printf("Average Percentage of the Student in PCM = %.2f \n", avg);
    
    (avg>=50.00)? printf("Student is eligible"):printf("Student is not eligible");

    return 0;
}