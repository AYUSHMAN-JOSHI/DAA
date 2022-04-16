#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Please input array limit: ";
cin>>n;
char A[n];
cout<<"Please input array elements: ";
for(int i=0;i<n;i++)
    cin>>A[i];

int Count[26]={0};
for(int i=0;i<n;i++)
    Count[(int)A[i]-97]++;

for(int i=1;i<26;i++)
    Count[i]+=Count[i-1];

char Output[n];
for(int i=0;i<n;i++)
        {Count[(int)A[i]-97]--;
    Output[Count[(int)A[i]-97]]=A[i];}

    cout<<"\nSorted Array: ";
    for(int i=0;i<n;i++)
            cout<<Output[i]<<" ";

}
