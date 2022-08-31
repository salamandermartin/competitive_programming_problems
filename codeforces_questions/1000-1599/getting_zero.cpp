#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    int t, new_num;
    cin >> t;

    for(int a = 0; a < t; a++){
        cin >> new_num;
        int ans = INT_MAX;

        for(int add = 0; add <= 15; add++){
            for(int mul = 0; mul <= 15; mul++){
                int p = int(pow(2, mul));
                if(((new_num + add) * p) % 32768 == 0 ){
                    ans = min(ans, mul + add);
                }
            }
        }
        cout << ans << " ";
    }

    
}