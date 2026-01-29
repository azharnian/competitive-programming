#include <iostream>
using namespace std;

int main(){
    int counter = 0, m = 30, n = 10;
    for (int i = 0; i < m;i++){
        if (i % 2 == 0){
            for (int j = 0; j < i; j++){
                cout << "*";
                counter++;
            }
        } else {
            for (int j = 0; j < n; j++){
                cout << "*";
                counter++;
            }
        }
    }

    cout << counter << endl;
}