/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main()
{
    int c;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);
    printf("Fahrenheit=%f\n", (c * (float)9/(float)5) + 32);
}
