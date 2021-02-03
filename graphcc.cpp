#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T,list<T>>adj;
    graph(){
        //array initialization if used
    }
    void add_edge(T n1,T n2,bool bidir=true){
        adj[n1].push_back(n2);
        if(bidir){
            adj[n2].push_back(n1);
        }        
    }
    void print(){
        for(auto row:this->adj){
        cout<<row.first<<"-->";
        for(auto el:row.second){
            cout<<el<<",";
        }
        cout<<endl;
    }
    }
};
int main(){
    graph<int> g1;
    // graph<string> g2;

    //unidirectional
    g1.add_edge(1,2,false);
    g1.add_edge(3,2,false);
    g1.add_edge(4,2,false);
    g1.add_edge(1,4,false);
    g1.add_edge(1,3,false);
    g1.add_edge(2,6,false);
    g1.add_edge(3,8,false);
    g1.add_edge(1,9,false);
    g1.print();
    cout<<endl;
    //bidirectional
    g1.add_edge(1,2);
    g1.add_edge(3,2);
    g1.add_edge(4,2);
    g1.add_edge(1,4);
    g1.add_edge(1,3);
    g1.add_edge(2,6);
    g1.add_edge(3,8);
    g1.add_edge(1,9);
    g1.print();

    return 0;
}