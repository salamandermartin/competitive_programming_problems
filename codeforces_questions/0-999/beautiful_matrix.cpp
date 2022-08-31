#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int input[5][5];
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> input[i][j];

        }
    }


    for (int a = 0; a < 5; a++){
        for (int b = 0; b < 5; b++){
            if(input[a][b] == 1){
                cout << abs(a - 2) + abs(b - 2);
            }
        }
    }
}