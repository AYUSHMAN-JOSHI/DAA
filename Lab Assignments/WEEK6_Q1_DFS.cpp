#include<bits/stdc++.h>
using namespace std;

class graph{
public:
    map<int,bool>visited;
    map<int,list<int> > adj;
    int flag;
    graph()
    {
        flag=0;
    }
    void addEdge(int,int);
    void DFS(int,int);
};
void graph::addEdge(int v,int e)
{
adj[v].push_back(e);

}
void graph::DFS(int v,int destination){
visited[v]=true;

//cout<<v<<" ";
list<int>stack;
stack.push_back(v);
for(auto a:adj[v])
{
    if(!visited[a])
        {if(v==destination)
    {flag=1;break;}
        DFS(a,destination);}
}
}

int main(){
    graph obj;
/**Storing graph as adjacency list:         */

int n,choice,e,source,destination;
cout<<"Please input no. of vertices: ";
cin>>n;
for(int i=0;i<n;i++)
{
    while(1){
        cout<<"Press 1 to add an edge to vertex "<<i<<" else to continue: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Input adjacent vertex: ";
            cin>>e;
            obj.addEdge(i,e);
        }
        else break;
    }
}
cout<<"Please input source: ";
cin>>source;
cout<<"Please input destination: ";
cin>>destination;
obj.DFS(source,destination);
if(obj.flag==1)
    cout<<"Yes Path Exists.";
else
    cout<<"No Such Path Exists.";
}
