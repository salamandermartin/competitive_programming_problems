#include <iostream>

using namespace std;

int main() {
    int args;
    cin >> args;
    int currNum;
    int sequence_nums;

    for (int i = 0; i < args; i++){
        cin >> currNum;

        sequence_nums = 0;

        if (currNum == 3){
            cout << "3 2 1" << endl;
            cout << "1 3 2" << endl;
            cout << "3 1 2" << endl;

        }
        else {
            while(sequence_nums < currNum){
                
                for (int inBetween = sequence_nums; inBetween > 0; inBetween--){
                    cout << inBetween;
                    cout << " ";
                }

                for (int a = currNum; a > sequence_nums; a--){
                    cout << a;
                    cout << " ";
                }
                sequence_nums++;
                cout << endl;
            }
        }
    }
}