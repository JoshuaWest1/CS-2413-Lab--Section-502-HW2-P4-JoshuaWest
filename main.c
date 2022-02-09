/*
AUTHOR: Joshua Wade West
HW #: HW2 Problem 4
SPECIFICATION: a program to concatenate two strings 
FOR: CS 2413 Lab- Section 502
*/
#include<stdio.h>
#include<string.h>
int main(void)
{

  int n;//variable used for length
   char String1[100];//First string
   char P1[100]= " ";//string1 is partially saved into
   char P2[100]= " ";//string2 is partially saved into
   char String2[100];//second string
   char FIN[200]= " ";//final string
   


   printf("Enter first string: ");//asks user for a string
   fgets(String1, 100, stdin);//fgets gets a string up to 100 char


n = strlen(String1);//n is the length of the string

//fgets includes \n at the end, so to make the strings one line i must get rid of it

for(int i = 0; i < n-1; i++){//loops for the length of the string except fot the last char
P1[i]=String1[i];//copies String 1 to P1
}


//Does the exact same as above but for String2 to P2
   printf("Enter second string: ");
   fgets(String2, 100, stdin);
n = strlen(String2);

for(int i = 0; i < n-1; i++){
P2[i]=String2[i];
}



   strcat(FIN,P1);//concatenates P1 into Fin
   strcat(FIN,P2);//concatenates P2 into Fin
   puts(FIN);//Outputs Fin

   return 0;
}