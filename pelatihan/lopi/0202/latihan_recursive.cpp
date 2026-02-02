#include <iostream>
using namespace std;

int sum(int a, int b){
    if (b == 0) return a;
    return sum(a, b-1) + 1;
}

int sub(int a,int b){
    if (a == b) return 0;
    if (a > b) return sub(a, b+1) + 1;
    return sub(a+1, b) - 1;
}  

int mul(int a, int b){
    if (b == 1) return a;
    return a + mul(a, b-1);
}

int divd(int a, int b){
    if (a == b) return 1;
    return 1 + divd(a-b, b);
}

int pow(int a, int b){
    if (b == 0) return 1;
    return a * pow(a, b-1);
}

int main(){
    // cout << sub(5, 2) << endl;
    // cout << sub(2, 2) << endl;
    // cout << sub(1, 2) << endl;
    // cout << sub(-10, -3) << endl;
    // cout << sub(-10, 3) << endl;
    // cout << mul(3, 4) << endl;
    // cout << divd(12, 3) << endl;
    cout << pow(2, 3) << endl;
}