#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int Q;
    bool REV = false;
    cin >> Q;
    deque<int> DQ, OUTPUT;
    while(Q>0){
        string S;
        cin >> S;
        if (S == "add"){
            int X, Y;
            cin >> X >> Y;
            if(!REV){
                for (int i=1; i<=Y; i++){
                    DQ.push_back(X);
                }
            } else {
                for (int i=1; i<=Y; i++){
                    DQ.push_front(X);
                }
            }
            OUTPUT.push_back(DQ.size());
        } else if (S == "del"){
            int Y, POP;
            cin >> Y;
            if (!REV){
                for (int i=1; i<=Y; i++){
                    if (i == 1)
                        POP = DQ[0];
                    DQ.pop_front();
                }
            } else {
                for (int i=1; i<=Y; i++){
                    if (i == 1)
                        POP = DQ[DQ.size()-1];
                    DQ.pop_back();
                }
            }
            OUTPUT.push_back(POP);
        } else if (S == "rev"){
            REV = !REV;
        }
        Q--;
    }

    for (auto ITEM : OUTPUT){
        cout << ITEM << "\n";
    }
}