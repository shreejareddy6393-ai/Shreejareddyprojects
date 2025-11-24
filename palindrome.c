#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int num)
{
    int reversed = 0;
    int originalnumber = num;

    // lets reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    // 877%10=778
    printf("The reversed number is %d\n", reversed);
    if (originalnumber == reversed)
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
    int number;
    printf("Enter to check whether it is a plaindrome or not:\n");
    scanf("%d", &number);
    if (ispalindrome(number))

    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}
