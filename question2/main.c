#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


bool chkAutomor(int num1)
{

    int sqno = num1 * num1;
    while (num1 > 0)
    {
        if (num1 % 10 != sqno % 10)
            return false;
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}

int main()
{
    int i;
    printf(" The Authomorphic numbers are: ");

    for(i=1;i<=1000;i++)
    {
        if(chkAutomor(i))
            printf("%d ", i);
    }
    printf("\n");
}
