#include <iostream>
using namespace std;

int main() {
    char A[3][3];
    int B[3][3];

    cout << "Enter 6 characters"<<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter 6 integers"<<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "SUM"<<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << A[i][j] << "+" << B[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}
