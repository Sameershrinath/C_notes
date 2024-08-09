// ELementary Data Types
// Classification fo data types:
// 1.Primitive/Primary -Boolean,String,Int
// 2.User Defined - Stack,Linked List,Queue
// 3.Derived Data Type- Array

// %d 	Decimal integer	4 bytes
// %f	Float	4 bytes
// %If	Long double	8 bytes
// %c	Character	1 byte

// Write a C program to print  size of different data types in C 

#include <stdio.h>

int main() {
   printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of long: %d bytes\n", sizeof(long));
    return 0;
}

// properties of data object
// 1.Data-- Data object is the general term for a region of data storage that can be used to hold values.
// 2.Variable--  variables stores the value of the data.
// 3.constant--  The data which value is fixed and it cannot be changed.
// 4.data type-- Different Types of the data like integers, float, string,boolean
// 5.declaration
// 6.Type check
// 7.Type conversion

// Write a C program to take two float input from the user and display This program
#include <stdio.h>

int main() {
  float a,b;
  printf("Enter the value of the a:\n ");
  scanf("%f",&a);
  printf("Enter the value of the b:\n ");
  scanf("%f",&b);

  printf("You entered a as %f and b as %f. ", a,b);


  return 0;
}

//Write a C program to show the employee details

#include <stdio.h>

int main() {
 char fname[10];
 char lname[10];
 int id;
printf("Enter Your name : \n");
scanf("%s %s",&fname,&lname);
printf("Enter Your id : \n");
scanf("%d",&id);
printf("Your Entered name is %s %s. \n your id is : %d \n",fname,lname,id);
    return 0;
}



//What is the array?
//------------------------
// An array is a data structure that stores a fixed size sequential data
//------------------------
// Advantage of array
//====================
// Code optimization 
// Ease of traversing
// Ease of sorting
// Random access  
//---------------------------
// Disadvantages of Array
//====================
// Fixed size
// Costly resizing
// Inefficient insertions/deletions
// Memory overhead
// No bound checking
// Lack of flexibility
// Inconsistent access times


// Array


#include <stdio.h>

int main() {
    // Declare and initialize an array with 5 elements
    int marks[5];
    
    // Manually add elements to the array
    marks[0] = 85; // Add the first element
    marks[1] = 90; // Add the second element
    marks[2] = 78; // Add the third element
    marks[3] = 92; // Add the fourth element
    marks[4] = 88; // Add the fifth element

    // Display the elements of the array
    printf("Marks entered are:\n");
    printf("Student 1: %d\n", marks[0]);
    printf("Student 2: %d\n", marks[1]);
    printf("Student 3: %d\n", marks[2]);
    printf("Student 4: %d\n", marks[3]);
    printf("Student 5: %d\n", marks[4]);

    return 0;
}