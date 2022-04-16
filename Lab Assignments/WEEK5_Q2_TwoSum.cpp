#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int l,int m,int r)
{
 int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2],i;
for(i=0;i<n1;i++)
    L[i]=A[l+i];
for(i=0;i<n2;i++)
    R[i]=A[m+1+i];

    int j,k;
    i=0;j=0;k=l;
        while(i<n1 && j<n2)
    {
         if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
            k++;
        }
        else
        {
            A[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {

        A[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {

        A[k]=R[j];
        j++;
        k++;
    }
        }


void mergeSort(int A[],int l, int r)
{
    if(l<r)
{

int m=l+(r-l)/2;
mergeSort(A,l,m);
mergeSort(A,m+1,r);
merge(A,l,m,r);
}
}


int main()
{
    int n,t;
    cin>>t;
    while(t>0)
    {
    cout<<"Please input array limit: ";
    cin>>n;
    int A[n];
    cout<<"Please input array elements: ";
    for(int i=0;i<n;i++)
        cin>>A[i];
    int k;
    cout<<"Please input key: ";
    cin>>k;

    mergeSort(A,0,n-1);

    int i=0,j=n-1,flag=0;
    while(i<j)
    {
        if(A[i]+A[j]==k)
        {
            flag=1;
            break;
        }
         else if(k>A[i]+A[j])
            i++;
        else
            j--;
    }
    if(flag==0)
        cout<<"No Such Element Exist.";
    else
        cout<<A[i]<<" "<<A[j];
t--;
}
}
