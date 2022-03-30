#include<stdio.h>
void sortInsertion(int[],int);
int main()
{
int n,i;

printf("Please input array limit: ");
scanf("%d",&n);
int A[n];
printf("Please input array elements: ");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
sortInsertion(A,n);
printf("\nSorted Array:\n");
for(i=0;i<n;i++)
printf("%d  ",A[i]);
}

void sortInsertion(int A[],int n)
{
    int t,i,j;
    for(i=1;i<n;i++)
    {
        t=A[i];
        j=i-1;
        while(j>=0 && t<A[j])
        {
            A[j+1]=A[j];
            j--;
        }

        A[j+1]=t;
    }
}
