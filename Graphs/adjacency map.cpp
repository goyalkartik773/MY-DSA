#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class graph_class
{
private:
    vector<unordered_map<int, int>> graph;
    int vertices;
    int edges;

public:
    graph_class(int v, int e)
    {
        graph.resize(v, unordered_map<int, int>()); // size of the graph will be no of vertices in the graph her vertice per ek empty map hai intially
        edges = e;
    }
    void add_edge(int src, int des, int wt, bool bi_directional = true)
    {
        // intially assuming that graph is undirected if pass false then it overides the value of bi_directional and make the graph undirected
        if (bi_directional == true)
        {
            graph[src][des] = wt;
            graph[des][src] = wt;
        }
        else
            graph[src][des] = wt;
    }
    void display_graph()
    {
        for (int i = 0; i < graph.size(); i++)
        {
            cout << i << "->";
            for (auto ele : graph[i])
                cout << "(" << ele.first << "," << ele.second << ")" << "->";
            cout << endl;
        }
        cout << endl;
    }
};
int main()
{
    int v;
    int e;
    cout << "enter no of vertices\n";
    cin >> v;
    cout << "enter no of edges\n";
    cin >> e;
    int src;
    int des;
    int wt;
    graph_class gh(v, e);
    while (e != 0)
    {
        cout << "enter src\n";
        cin >> src;
        cout << "enter des\n";
        cin >> des;
        cout << "enter weight\n";
        cin >> wt;
        gh.add_edge(src, des, wt); // undirected graph for directed graph just pass one more parameter as false
        e--;
    }
    gh.display_graph();
}