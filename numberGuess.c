#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  char userName[20];
  int guess = -999;
  int answer;
  int turns = 0;
  int keepGoing = -1;

  srand(time(NULL));
  answer = rand();
  answer = answer % 100;

  printf("What is your name? \n ");
  scanf("%s", userName);
  printf("Hello, %s \n", userName);

  while (keepGoing == -1){
    turns += 1;
    printf("Guess an integer between 1 and 100 \n");
    scanf("%d", &guess);
    if (guess < answer){
      printf("Too low \n");
    } else if (guess > answer){
      printf("Too high \n");
    } else {
      printf("Correct!, you win! \n");
      keepGoing = 0;
    } // end if
  } // end while
  
  if (turns < 7){
    printf("Great job, you performed above average");
  } else if (turns > 7){
    printf("Yyou could do better, you performed below average");
  } else {
    printf("Good job, your performance was average");
  } // end if

  return 0;
} //end main
