#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    // x += y;
    // y = x - y;
    // x -= y;
    swap(x, y);
    cout << x << " " << y << endl;
}