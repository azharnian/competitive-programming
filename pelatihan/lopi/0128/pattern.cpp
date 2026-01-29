#include <iostream>
using namespace std;

int main(){
    int row = 5, col = 7;
    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++){
            if (j == 1 || j == col || i == 1 || i == row){
                cout << "* ";
            } else {
                cout << "^ ";
            }
        }
        cout << "\n";
    }

}