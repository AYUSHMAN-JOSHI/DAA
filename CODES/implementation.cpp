#include<bits/stdc++.h>
using namespace std;

class graph{
public:
    map <int,list<int> > adj;
    void addEdge(int,int);
    void showGraph();
};
void graph::addEdge(int v,int e)
{
adj[v].push_back(e);

}
void graph::showGraph()
{
    int n=adj.size();
    cout<<n;
}

int main(){
    graph obj;
/**Storing graph as adjacency list:         */

int n,choice,e;
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
obj.showGraph();
}
