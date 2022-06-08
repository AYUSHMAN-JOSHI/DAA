/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
  ////////////////////////////////////
    //Comparable function:
    bool compare(pair<int,int> a,pair<int,int> b)
    {
        double i1=a.first/a.second;
        double i2=b.first/b.second;
        return i1>i2;
    }
int main(){
    int flag=0;
    //Inputting values:
    vector<pair<int,int> >item;
    int n;
    cout<<"Input number of items: ";
    cin>>n;
    item.resize(n);
    cout<<"Input values: ";
    for(int i=0;i<n;i++)
    {
        cin>>item[i].first;
    }
    cout<<"Input weight: ";
    for(int i=0;i<n;i++)
    {
        cin>>item[i].second;
    }
    int k;
    cout<<"Input capacity of sack: ";
    cin>>k;

    ////////////////////////////////////////////
    //Sorting according to value/weight:
    sort(item.begin(),item.end(),compare);
    //////////////////////////////////////////////
    double profit=0;
    for(int i=0;i<n;i++){
        if(k>=item[i].second)
        {
            flag++;
            k-=item[i].second;
            profit+=item[i].first;
        }
        else{
            profit+=(item[i].first/(double)item[i].second)*k;
            break;
        }
    }
    cout<<"Maximum Value: "<<profit<<endl;;
    for(int i=0;i<=flag;i++)
    {
        cout<<"Item-weight:";
        cout<<endl;
        cout<<item[i].second;
    }

}
