#include<stdio.h>

int main()
{
int n,i,j,min,temp,comp=0,swaps=0;

printf("Please input array limit: ");
scanf("%d",&n);
int A[n];
printf("Please input array elements: ");
for(i=0;i<n;i++)
scanf("%d",&A[i]);


    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            {
                comp++;
                if(A[j]<A[min])
            min=j;}
              temp=A[i];
    A[i]=A[min];
    A[min]=temp;
    swaps++;
    }


printf("\nSorted Array:\n");
for(i=0;i<n;i++)
printf("%d  ",A[i]);

printf("\ncomparisons: %d\nswaps: %d",comp,swaps);
}


