#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    deque<int> RES;
    deque< deque<int> > DQ;
    DQ.push_back(deque<int>());
    while(Q > 0){
        string S;
        cin >> S;
        if (S == "add"){
            int L, X, Y;
            cin >> L >> X >> Y;
            for (int i=1; i<=Y; i++){
                DQ[L-1].push_back(X);
            }
        } else if (S == "new"){
            DQ.push_back(deque<int>());
        } else if (S == "out"){
            int L, Z;
            cin >> L >> Z;
            RES.push_back(DQ[L-1][Z-1]);
        }
        Q--;
    }
    for (auto item : RES){
        cout << item << "\n";
    }
}