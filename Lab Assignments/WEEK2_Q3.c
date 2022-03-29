/*Give an array of nonnegative integers, design an algorithm and a program to count the number of pairs
of integers such that their difference is equal to a given key,k.
*/

#include<stdio.h>
int main()
{
    int n,i,j,key,count=0;
    printf("Input array limit: ");
    scanf("%d",&n);
    int A[n];
    printf("Input array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("Input key: ");
    scanf("%d",&key);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(A[i]-A[j]==key || A[j]-A[i]==key)
        count++;
    printf("number of pairs: %d",count);
}
