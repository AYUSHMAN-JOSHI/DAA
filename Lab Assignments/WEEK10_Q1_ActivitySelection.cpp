//Activity Selection Problem.
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<pair<int,int> >activity(n);
cout<<"Input Start & End Time: ";
for(int i=0;i<n;i++)
    {cin>>activity[i].second;cin>>activity[i].first;}

sort(activity.begin(),activity.end());
//int j=0;
int endTime=-1,count=0;
int i=0;
while((i++)<n){
    if(activity[i].second>=endTime)
    {
        count++;
        endTime=activity[i].first;
    }
}
cout<<"Maximum No. of activities: "<<count;
}
