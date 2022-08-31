#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 444, 47, 77, 447, 474, 477, 74, 747, 777, 744, 774};
    int arrLen = sizeof(lucky) / sizeof(lucky[0]);

    for(int i = 0; i < arrLen; i++){
        if ( n % lucky[i] == 0){
            cout << "YES";
            exit(0);
        }
    }

    cout << "NO";

    

}