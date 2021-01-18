#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    public:
    int v; //no. of vertices
    list<T>*adj;
    graph(int n){
        //array initialization if used
        this->v=n;
        this->adj=new list<int>[this->v];
    }
    void add_edge(T n1,T n2,bool bidir=true){
        adj[n1].push_back(n2);
        if(bidir){
            adj[n2].push_back(n1);
        }        
    }
    void dfsHelper(int src,unordered_map<int,T>visited){
        visited[src]=true;
        //cout<<src<<"\n";
        for(auto neighbour:this->adj[src])
        if(not visited[neighbour])
        dfsHelper(neighbour,visited);   
    }
    void dfs(int src){
        //unordered_map<int,bool> visited;
        dfsHelper(src,visited);
    } 
    int connectedComp(){
        unordered_map<int,bool> visited;
        int result=0;
        for (int i = 0; i < v-1; i++)
        {
            if(not visited[i])
            {
                dfsHelper(i,visited);
                result++;
            }
        }
        return result;
    }
};
int main(){
    graph<int> g(5);
    g.add_edge(0,1);
    g.add_edge(2,1);
    g.add_edge(3,2);
    g.add_edge(4,5); 
    cout<<g.connectedComp();
    return 0;
}