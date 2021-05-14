//The program to find whether the number is prime or not
#include <stdio.h>
 
int prime_num(int, int); //function prototype
 
int main()
{
    int num, result;
    printf("Enter a number: "); //taking number from the user
    scanf("%d", &num);
    result = primeno(num, num / 2);
    if (result == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int prime_num(int num, int i) //function definition
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return prime_num(num, i - 1);
       }       
    }
}
