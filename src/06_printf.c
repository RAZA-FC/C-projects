#include <stdio.h>

int main(void)
{
    int pincode = 1907;
    float CGPA = 9.8;
    char fav[] = "Mobile";
    printf("My %s Pincode is %d and this is my cgpa %.1f" , fav , pincode , CGPA);  // %s is for string and %d is for numbers not for decimal numbers
// %f is for decimal numbers, also the order matters most like in this case first is string, second is interger, & third is floating number
    return 0;
}