#include <iostream>
#include <string>
using namespace std;

pair<int, int> search_2d_array(string arr[][3], int rows, int cols, string target) {
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            if (arr[row][col] == target) {
                return make_pair(row, col);
            }
        }
    }

    return make_pair(-1, -1);  // Return -1, -1 if element is not found
}

// Example usage
int main() {
    string array[][3] = {
        {"apple", "banana", "cherry"},
        {"dog", "elephant", "frog"},
        {"grape", "honeydew", "kiwi"}
    };

    int rows = 3;
    int cols = 3;
    string target = "frog";

    pair<int, int> location = search_2d_array(array, rows, cols, target);

    if (location.first != -1 && location.second != -1) {
        cout << "Element found at row: " << location.first << ", column: " << location.second << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
