#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    // returns 1 if c1>ca and 0 otherwise. if c1=c2 it wil return -1
    if (char1 == char2)
    {
        return -1;
    }

    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if((char2 == 'r') && (char1 == 's')){
        return 1;
    }
    else
    {
        return 0;
    }
        if ((char1 == 'p') && (char2 == 'r'))
        {
            return 1;
        }
        else if ((char2 == 'p') && (char1 == 'r')){
            return 1;
        }
        else
    {
            return 0;
    }

            if ((char1 == 's') && (char2 == 'p'))
            {
                return 1;
            }
            else if ((char2 == 's') && (char1 == 'p'))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        
    

int main()
{
    int p1score = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to rock paper scissor.\n ");
    for (int i = 0; i < 3; i++)
    {
        // take players 1 input
        printf("Player 1's Turn: \n");
        printf(" choose  1 for rock. choose 2 for paper.\n chose 3 for scissors \n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("you choose%c\n", playerchar);

        // generate computers input
        printf("computers Turn: \n");
        printf(" choose 1 for rock. choose 2 for paper.\n chose 3 for scissors \n");
              
        
        temp = generaterandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("computer choose %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("cpu got it!\n\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compchar += 1;
            playerchar += 1;
            printf("its a draw!\n\n");
        }
        else
        {
            playerchar += 1;
            printf("its a draw!!\n\n");
        }
        printf("you:%d\n cpu:%d\n", p1score
        ,compscore);
    }

    // srand takes seed as an input an dis defined inside stdlib.h
    if (p1score>compscore)
    {
        printf("you win \n");
    }
    else if (p1score<compchar)
    {
        printf("computers wins \n");
    }else{
        printf("its draw");
    }
    
    return 0;
}
