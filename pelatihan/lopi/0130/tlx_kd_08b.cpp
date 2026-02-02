#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    deque<int> DQ, OUTPUT;
    while(Q>0){
        string S;
        cin >> S;
        if (S == "add"){
            int X, Y;
            cin >> X >> Y;
            for (int i=1; i<=Y; i++){
                DQ.push_back(X);
            }
            OUTPUT.push_back(DQ.size());
        } else if (S == "del"){
            int Y, POP;
            cin >> Y;
            for (int i=1; i<=Y; i++){
                if (i == 1)
                    POP = DQ[0];
                DQ.pop_front();
            }
            OUTPUT.push_back(POP);
        } else if (S == "rev"){
            reverse(DQ.begin(), DQ.end());
        }
        Q--;
    }

    for (auto ITEM : OUTPUT){
        cout << ITEM << "\n";
    }
}