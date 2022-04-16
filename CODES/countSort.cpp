#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please input array limit: ";
    cin>>n;
    int A[n];
    cout<<"Please input array elements: ";
    for(int i=0;i<n;i++)
        cin>>A[i];
int Max=A[0];
        for(int i=1;i<n;i++)
        if(A[i]>Max)
        Max=A[i];
int Count[Max+1]={0};
//creating count array:
for(int i=0;i<n;i++)
    Count[A[i]]++;
//modified count array:
for(int i=1;i<=Max;i++)
    Count[i]+=Count[i-1];

int Output[n];
for(int i=0;i<n;i++)
                {Count[A[i]]--;
                Output[Count[A[i]]]=A[i];}
cout<<"\nSorted Array: ";
        for(int i=0;i<n;i++)
          cout<<Output[i]<<" ";
}
