#include <stdio.h>  
// Includes standard input/output functions like printf and scanf

int main(void)
{
  
/*
  char name[18];
  // Declare a character array to store the user's name
  // Fixed size: maximum 17 characters + null terminator

  int age;
  // Declare an integer variable to store age

  printf("Enter your name: ");
  // Prompt the user to enter their name

  scanf("%s", name);
  // Reads a string from input until a space, tab, or newline is encountered
  // DOES NOT check buffer size → can cause buffer overflow if input is too long
  // This is unsafe in real-world, kernel, or IoT code

  printf("Enter your age : ");
  // Prompt the user to enter their age

  scanf("%d", &age);
  // Reads an integer and stores it in 'age'
  // '&' passes the ADDRESS of age (pointer)
  // scanf needs the memory address to write the value

  printf("Thanks %s, You are %d years old\n", name, age );
  // Prints the name and age using format specifiers
  // %s → string, %d → integer
*/



  //int main(void)
//{
    // double gpa;
    // Declare a variable of type double
    // double is used for decimal (floating-point) values with higher precision

    // printf("Enter your gpa: ");
    // Prompt the user to enter their GPA

    // scanf("%lf", &gpa);
    // %lf tells scanf to expect a DOUBLE value
    // &gpa passes the ADDRESS of gpa so scanf can store the value there
    // Using %d here would be WRONG and causes undefined behavior
    // %d is only for int, not for floating-point numbers

    //printf("Your gpa is %f", gpa);
    // %f is used in printf to print floating-point numbers
    // In printf, both float and double use %f
//}

  
//int main(void)
//{
    //char grade;
    // Declare a character variable
    // Stores exactly ONE character (1 byte)

    //printf("Enter your grade: ");
    // Prompt the user to enter a grade

    //scanf("%c", &grade);
    // %c reads exactly ONE character
    // This includes whitespace like newline ('\n')
    // &grade passes the memory address

    //printf("Your grades are %c", grade);
    // Prints the character stored in grade
//}

 

 //char name[20];
// Declare a character array of size 20
// Can store at most 19 characters + null terminator

//printf("Enter your name: ");
// Prompt the user for input

//scanf("%s", name);
// Reads characters until whitespace (space, tab, newline)
// DOES NOT check buffer length
// If input is longer than 19 characters → buffer overflow
// Stops reading at the first space (cannot read full names)

//printf("Your name is %s", name);
// Prints the string stored in name


 char name[20];
// Declare a character array of size 20
// Fixed-size buffer, stack memory

printf("Enter your name: ");
// Prompt the user for input

fgets(name, 20, stdin);
// Reads up to 19 characters or until newline
// PREVENTS buffer overflow
// Keeps spaces in the input
// Stores '\n' if input fits in the buffer

printf("Your name is %s", name);
// Prints the string
// If newline was stored, it will also be printed

  return 0;    }