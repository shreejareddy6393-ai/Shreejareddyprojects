#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main()
{
   char name[50];
   char username[60];
   int randomNum;

   // Asking for user's name 
   printf("Enter your name: ");
   scanf("%s", name);

   //initiializing random number generator
   srand(time(0));
   randomNum=rand() % 1000; // random number between 0 and 999

   // create username (first 3 letters+ random number)
   if (strlen(name) >=3){
    sprintf(username, "%.3s%d", name, randomNum);
   }
   else{
    sprintf(username, "%s%d", name , randomNum);

   }
   printf(" Generated username: %s\n",username);
   return 0;
   }

    
