#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   char userName[20];
   int guess = -999
   int answer
   int turns = 0
   int keepGoing = -1

   srand(time(NULL));
   answer = rand();
   answer = answer % 100

   printf("What is your name? \n ");
   scanf("%s", userName);
   printf("Hello, %s \n", userName);


} //end main
