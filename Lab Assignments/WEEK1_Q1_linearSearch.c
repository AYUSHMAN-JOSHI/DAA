/*
WEEk-1
23-Feb-2022
Wednesday.

Question1:
Write a program of linear search for t test cases,which also prints the no. of comparisons made in each test case.
Print "Key Found" if found and Print "Key Not Found" if it is not found in the array. */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int i=0,j,n,t,comp,k,flag;
    printf("Give no. of test cases: ");
    scanf("%d",&t);
    while(i!=t)
    {
        printf("\nInput array limit: ");
        scanf("%d",&n);
        int A[n];
        printf("Input array elements: ");
        for(j=0;j<n;j++)
            scanf("%d",&A[j]);
        printf("Input key to search: ");
        scanf("%d",&k);
        comp=0;
        flag=0;
        for(j=0;j<n;j++)
        {
            comp++;
            if(k==A[j])
            {
                printf("\nKey Found");
                flag=1;
                printf("\nNo. of Comparisons: %d",comp);
                break;
            }
        }
        if(flag==0)
            printf("\nKey Not Found");
    i++;
    }
}
