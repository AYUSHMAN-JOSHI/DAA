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
    int m,n;
    cout<<"Please input 1st array limit: ";
    cin>>m;
    int A[m];
    cout<<"Please input 1st array elements: ";
    for(int i=0;i<m;i++)
        cin>>A[i];
    cout<<"Please input 2nd array limit: ";
    cin>>n;
    int B[n];
    cout<<"Please input 2nd array elements: ";
    for(int i=0;i<n;i++)
        cin>>B[i];

    mergeSort(A,0,m-1);
    mergeSort(B,0,n-1);

int p=0,q=0;
while(p<m && q<n)
{
    if(A[p]==B[q])
    {
        cout<<A[p]<<" ";
        p++;
        q++;}
        else if(A[p]<B[q])
            p++;
        else
            q++;
}

}
