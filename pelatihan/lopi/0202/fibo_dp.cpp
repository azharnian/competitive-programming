#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long fib(int n){

    if(memo[n] != -1)
        return memo[n];
    if(n == 1 || n == 2)
        return memo[n] = 1;
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main(){

    int n;
    cin >> n;
    memo.assign(n+1, -1);
    cout << fib(n) << endl;
}
