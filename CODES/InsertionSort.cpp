#include<iostream>
using namespace std;
void InsertionSort(int A[],int n)
{
int temp;
for(int i=1;i<n;i++)
{
int j=i-1;
temp=A[i];
while(j>=0 && temp<A[j])
    {
    A[j+1]=A[j];
    j--;
    }
    A[j+1]=temp;
}
}
main()
{
int n;
cout<<"Enter array limit: ";
cin>>n;
int A[n];
cout<"Enter array elements: ";
for(int i=0;i<n;i++)
cin>>A[i];
InsertionSort(A,n);
cout<<"\nArray after sorting: ";
for(int i=0;i<n;i++)
cout<<A[i]<<" ";
}
