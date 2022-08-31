#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ans[2] = {0, 0};
    int even, odd, curr;
    even = 1;
    odd = 2;

    for (int i = 0; i < n; i++){
        cin >> curr;
        if(curr % 2 == 0){
            ans[1]++;
            even = curr;
            if(ans[1] > 1 && odd % 2 == 1){
                cout << odd;
                exit(0);
            }
        }
        else{
            ans[0]++;
            odd = curr;
            if(ans[0] > 1 && even % 2 == 0){
                cout << even;
                exit(0);
            }
        }

    }
}