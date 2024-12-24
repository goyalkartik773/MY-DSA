#include<iostream>
#include<vector>
using namespace std;
void flood_fill(vector<vector<int>> &arr,int sr,int sc,int previous_color,int target_color)
{
    if(sr>arr.size()-1||sr<0||sc>arr[0].size()-1||sc<0||arr[sr][sc]!=previous_color) // base coinditions where we donot want to fill the color
    return ;
    arr[sr][sc]=target_color;
    flood_fill(arr,sr+1,sc,previous_color,target_color); // down
    flood_fill(arr,sr,sc+1,previous_color,target_color); // right
    flood_fill(arr,sr-1,sc,previous_color,target_color); // up
    flood_fill(arr,sr,sc-1,previous_color,target_color); // left
return ;
}
int main()
{
    vector<vector<int>> arr={{1,1,1},{1,1,0},{1,0,1}};
    int prevcol=arr[1][1];
    cout<<"Before flood fill:\n";
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    flood_fill(arr,1,1,prevcol,2);
    cout<<"\nAfter flood fill:\n";
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}