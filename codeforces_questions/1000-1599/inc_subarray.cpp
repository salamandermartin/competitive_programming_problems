#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    int n, x, curr_num, s;

    for(int a = 0; a < t; a++){
        cin >> n;
        cin >> x;
        vector<int> nums;
        vector<int> mx;

        for(int b = 0; b < n + 1; b++){
            mx.push_back(INT_MIN);
        }

        for(int b = 0; b < n; b++){
            cin >> curr_num;
            nums.push_back(curr_num);

        }

        for(int l = 0; l < n; l++){
            s = 0;
            for(int r = l; r < n; r++){
                s += nums[r];
                mx[r - l + 1] = max(mx[r - l + 1], s);
            }

        }

        vector<int> ans;
        for(int a = 0; a < n + 1; a++){
            ans.push_back(0);
        }

        for(int k = 0; k < n + 1; k++){
            int bst = 0;
            for(int i = 0; i < n + 1; i ++){
                bst = max(bst, mx[i] + min(k, i) * x);
            }
            ans[k] = bst;
        }

        for(int i = 0; i < n + 1; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    } 
    
}