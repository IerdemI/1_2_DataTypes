// ELEC2645 Unit 1 - Activity 2 - Data Types
// Add the code to complete the steps below
// Keep the print statements as they are unless told to do so in order for the test script to check your work properly

#include <stdio.h>

int main() {

   // initialise variables 
   int total =0;
   float circumference =0;
   float area =0;
   const float PI = 3.1415926536; // constant variable ensures it cannot be changed, common practice to use all caps for constants

// Step 1: Create two integers, a and b, which add up to 10.
// Then, set total = a + b.
// Hint: make sure to initialise a and b to some values that add up to 10
// Let the print statement below print the value of total



   printf("%d\n", total);


   // Step 2: Calculate the circumference and area of a circle of radius 1.5. 
   // Hint: create a new float for the radius, then update the values
   // You can use r*r instead of pow(r,2) for now


   printf("%f\n", circumference);
   printf("%f\n", area);




   // Step 3 Print the area of the circle but with units of meters
   // Hint: update the unit variable to be 'm' and add %c in the printf statement
   // dont forget to add the other argument to the printf statement too!

   char unit = 'f';

   printf("%f\n",area);


   // Step 4: add a printf statement to print the line "Leeds! Leeds! Leeds!"
   // Hint: use %s to print a string and dont forget the \n for a new line

   

   return 0;
}
