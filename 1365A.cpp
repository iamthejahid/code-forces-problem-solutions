 #include <iostream>
using namespace std;
 
int main() {
    int testCase;
    cin >> testCase;
 
    int row, column;
    string lastWinner;
    for (int i = 0; i < testCase; i++) {
        lastWinner = "Vivek";
        cin >> row >> column;
 
        int arr[row][column];
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < column; k++) {
                cin >> arr[j][k];
            }
        }
 
        for (int j = 0; j < row; j++) {
            for (int k = 0; k < column; k++) {
                int clearRow = 0, clearCol = 0;
 
                for (int l = 0; l < row; l++) {
                    if (arr[l][k] == 1) {
                        clearRow = 1;
                        break;
                    }
                }
 
                for (int l = 0; l < column; l++) {
                    if (arr[j][l] == 1) {
                        clearCol = 1;
                        break;
                    }
                }
 
                if (clearRow == 0 && clearCol == 0) {
                    if (lastWinner == "Vivek") {
                        lastWinner = "Ashish";
                        arr[j][k] = 1;
                    } else {
                        lastWinner = "Vivek";
                        arr[j][k] = 1;
                    }
                }
            }
        }
        cout << lastWinner << endl;
    }
    return 0;
}