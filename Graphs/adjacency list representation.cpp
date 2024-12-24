#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include<stack>
#include <set>
#include <unordered_set>
using namespace std;
class graph_class
{
public:
    vector<list<int>> graph;
    int vertices;
    int edges;

public:
    graph_class(int v, int e)
    {
        graph.resize(v, list<int>()); // size of the graph will be no of vertices in the graph
        edges = e;
    }
    void add_edge(int src, int des, bool bi_directional = true)
    {
        // intially assuming that graph is undirected if pass false then it overides the value of bi_directional and make the graph undirected
        if (bi_directional == true)
        {
            graph[src].push_back(des);
            graph[des].push_back(src);
        }
        else
            graph[src].push_back(des);
    }
    void display_graph()
    {
        for (int i = 0; i < graph.size(); i++)
        {
            cout << i << "->";
            for (auto ele : graph[i])
                cout << ele << ",";
            cout << endl;
        }
        cout << endl;
    }
};
void dfs_visit(vector<list<int>> graph,unordered_set<int> st,int src)
{
    stack<int> s;
    s.push(src);
    st.insert(src);
    while(st.size()!=0)
    {
        int temp = s.top();
        s.pop();
        cout<<temp<<" ";
        for(auto neighbour: graph[temp]){
            if(st.find(neighbour)==st.end()){
            s.push(neighbour);
            st.insert(neighbour);
        }
    }
}
}
bool dfs_path(vector<list<int>> graph, unordered_set<int> st, int src, int des)
{
    if (src == des)
        return true;
    st.insert(src);
    for (auto neighbour : graph[src])
    {
        if (st.find(neighbour) == st.end()) // matlab abhi ye neighbour unvisited hai
        {
            bool res = dfs_path(graph, st, neighbour, des);
            if (res == true)
                return true;
        }
    }
    return false;
}
void dfs_allpaths(vector<vector<int>> &ans, vector<int> &path, vector<list<int>> graph, unordered_set<int> st, int src, int des)
{
    if (src == des)
    {
        path.push_back(src);
        ans.push_back(path);
        path.pop_back(); // backtracking karte samay path ko khali karta jana hai
    }
    st.insert(src);
    path.push_back(src);

    for (auto neighbour : graph[src])
    {
        if (st.find(neighbour) == st.end()) // ye neighbour abhi aap ne visit nahi kara hai
        {
            dfs_allpaths(ans, path, graph, st, neighbour, des);
        }
    }
    path.pop_back(); // backtrack karte samay path ke nodes ko remove karte jana hai
    st.erase(src);   // node ko unvisit karna jarrori hai kyuki wo nodes dusra path ka raste banega
    return;
}
void bfs_min_dis(vector<list<int>> graph, unordered_set<int> st, int src, int arr[])
{
    queue<int> q;
    q.push(src);
    arr[src] = 0;   // src ke respect mai sabhi paths ki shortest distancee find karega ye unweighted graph hai
    st.insert(src); // src ko pahela hi visit karlo
    while (q.size() != 0)
    {
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";
        for (auto neighbour : graph[temp])
        {
            if(st.find(neighbour)==st.end()) // ye neighbour ko abhi visit nahi kiya hai
            {
                q.push(neighbour);
                st.insert(neighbour);
                arr[neighbour]=arr[temp]+1;
            }
        }
    }
}
int main()
{
    // int v;
    // int e;
    // cout<<"enter no of vertices\n";
    // cin >> v ;
    // cout<<"enter no of edges\n";
    // cin>> e;
    // int src;
    // int des;
    graph_class *gh = new graph_class(7, 8);
    gh->add_edge(0, 1);
    gh->add_edge(0, 4);
    gh->add_edge(1, 3);
    gh->add_edge(1, 5);
    gh->add_edge(3, 4);
    gh->add_edge(5, 6);
    gh->add_edge(5, 2);
    gh->add_edge(2, 6);

    // while (e != 0)
    // {
    //     cout << "enter src\n";
    //     cin >> src;
    //     cout << "enter des\n";
    //     cin >> des;
    //     gh.add_edge(src, des); // undirected graph for directed graph just pass one more parameter as false
    //     e--;
    // }
    gh->display_graph();
    unordered_set<int> st; // this set will contain those nodes which we already visited in the graph
    // if(dfs_path(gh->graph,st,3,9))
    // cout<<"true atleat one path exists between source and destination";
    // else
    // cout<<"false";
    // vector<vector<int>> v;
    // vector<int> path;
    // dfs_allpaths(v, path, gh->graph, st, 0, 6);
    // cout<<v.size();
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v[i].size();j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int arr[7];
    // bfs_min_dis(gh->graph,st,0,arr);
    // cout<<endl;
    // for(int i=0;i<7;i++)
    // {
    //     cout<<"min distance for idx ->"<<i<<" "<<arr[i]<<"\n";
    // }
    dfs_visit(gh->graph,st,0);

}