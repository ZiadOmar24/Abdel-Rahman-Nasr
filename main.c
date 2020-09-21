#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    int Test_case;
    printf("Enter Number of Test Cases : ");
    scanf("%d",&Test_case);
    int i;
    int divisor;


    while (Test_case>0)
    {
        scanf("%d",&x);
        divisor=0;
        i=x-1;
   while (i>0)
   {
       if (x%i==0)
       {
           divisor+=i;
       }
       i--;
   }
   if (x==1)
    printf("Perfect \n");

   else if (divisor==x)
    printf("perfect \n");
    else
    printf("not Perfect \n");

        Test_case--;
    }

    return 0;
}
