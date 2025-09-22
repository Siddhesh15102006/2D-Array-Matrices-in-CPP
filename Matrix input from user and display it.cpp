#include <iostream>
using namespace std;

int main() {
     int rows = 3;
     int cols = 3;
    int arr[rows][cols];

    cout << "Enter the elements of the 3x3 matrix:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The first matrix is:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

Output :- 
#include <iostream>
using namespace std;

int main() {
     int rows = 3;
     int cols = 3;
    int arr[rows][cols];

    cout << "Enter the elements of the 3x3 matrix:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The first matrix is:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
