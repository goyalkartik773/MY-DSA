#include <iostream>
using namespace std;
class graph_class
{
private:
    int **arr;
    int rows;
    int cols;

public:
    graph_class(int rows, int cols)
    {
        this->rows = rows;
        this->cols = cols;
        arr = new int *[rows]; // declare no of row pointers
        for (int i = 0; i < rows; i++)
        {
            // each row contain same no of cols;
            arr[i] = new int[cols];
            // intialising the matrix with zeros
            for (int j = 0; j < cols; j++)
                arr[i][j] = 0;
        }
    }
    ~graph_class()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i]; // free each row or each column corresponding to that row
        }
        delete[] arr; // free rows;
    }
    void add_edge(int src, int des, bool bi_directional = true)
    {
        if (bi_directional == true)
        {
            // unordered_graph
            arr[src][des] = 1;
            arr[des][src] = 1;
        }
        else // directed graph
            arr[src][des] = 1;
    }
    void display_graph()
    {
        cout<<"\n Adjanecy matrix is:\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{

    int vertice, edges;
    cout << "enter no of vertices\n";
    cin >> vertice;
    cout << "enter no of edges\n";
    cin >> edges;
    int src, des;
    graph_class *gh = new graph_class(vertice, vertice);
    while (edges)
    {
        cout << "enter src\n";
        cin >> src;
        cout << "enter des\n";
        cin >> des;
        gh->add_edge(src, des);
        edges--;
    }
    gh->display_graph();
    delete gh;
}