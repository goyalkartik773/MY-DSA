#include <iostream>
#include<string>
using namespace std;
// int maize(int sr, int sc, int er, int ec)
// {
//     if (sr > er || sc > ec)
//         return 0;
//     if (sr == er)
//     {
//         cout << "D";
//         return 1;
//     }
//     if (sc == ec)
//     {
//         cout << "R";
//         return 1;
//     }
//     // rightways = sr+1,sc,er,ec   // downways = sr,sc+1,er,ec
//     return maize(sr + 1, sc, er, ec) + maize(sr, sc + 1, er, ec)+maize(sr,);
// }
// void printmaize(int sr, int sc, int er, int ec, string s)
// {
//     if (sr > er || sc > ec)
//     {
//         return;
//     }
//     if (sr == er && sc == ec)
//     {
//         cout << s<<endl;
//         return;
//     }
//     printmaize(sr + 1, sc, er, ec, s + 'D');  // pahela downways print honge maine pahela down chala mai 
//     printmaize(sr , sc+1, er, ec, s + 'R');
    
// }
// int maize(int row,int col)
// {
//     if(row==0&&col==0)
//     return 1;
//     if(row<0||col<0)
//     return 0;
//     return maize(row-1,col)+maize(row,col-1);
// }
void printmaize(int row,int col, string s)
{
    if (row<0 || col<0)
    {
        return;
    }
    if (row==0&&col==0)
    {
        cout << s<<endl;
        return;
    }
    printmaize(row-1,col,s+'D');
    printmaize(row,col-1,s+'R');
}

int main()
{
   
    printmaize(2,2,"");
}