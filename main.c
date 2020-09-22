
#include<stdio.h>

int remove_duplicate(int arr[], int n)
{

if (n==0 || n==1)
return n;

int temp[n];

int j = 0;
int i;
for (i=0; i<n-1; i++)
if (arr[i] != arr[i+1])
temp[j++] = arr[i];
temp[j++] = arr[n-1];

for (i=0; i<j; i++)
arr[i] = temp[i];

return j;
}


int main()
{
int sum=0;
int n;
n=20;
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}

n = remove_duplicate(arr, n);


for (i=0; i<n; i++)
{
    sum+=arr[i];
printf("%d",arr[i]);
printf(" ");
}
printf("\nSum of the Unique Values equals ");
printf("%d",sum);

return 0;
}
