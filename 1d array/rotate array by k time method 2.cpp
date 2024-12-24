#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1, 6, 2, 3, 7, 4};
    int k = 2; // Number of rotations

    // Perform rotation k times
    while (k > 0) {
        int temp = v.back(); // Store the last element
        for (int i = v.size() - 1; i > 0; i--) {
            v[i] = v[i - 1]; // Shift elements to the right
        }
        v[0] = temp; // Place the last element at the beginning
        k--;
    }

    // Print the rotated vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
