#include <stdio.h>

/* 
    Name: Zain Mohamed Saeed Kazi
    Roll No: 37
    UIN: 251P040
    Division: C
*/

void counter() {
static int count = 0; // static variable retains value between function calls
count++;

printf("Function called %d times\n", count);
}

    int main() {
        counter();
        counter();
        counter();
        counter();
    return 0  ;
}