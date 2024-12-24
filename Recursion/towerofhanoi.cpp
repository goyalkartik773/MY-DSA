#include <iostream>
using namespace std;
void hanoi(int n, char source, char helper, char destination)
{
    if (n == 0)
    { // s2=s3;

        return;
    }
    //  cout<<s1<<"->"<<s3<<endl;
    hanoi(n - 1, source, destination, helper); // sabse pahela apko n-1 rings ko helper wali position per store karna matlab helper position hi destination position hai
    cout << source << "->" << destination << endl; //humesha rings ko source sai destination tak hi le jana hai
    hanoi(n - 1, helper, source, destination); // jab n-1 rings helper per pahuch gayi to unhe final destination per le jao matlab helper source reverse ho jayega
    //    cout<<s1<<"->"<<s3<<endl;
}
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}