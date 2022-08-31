#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    

    for(int a = 0; a < t; a++){
        cin >> n;
        int new_num;
        vector<int> nums;

        int curr_max = 0;

        for(int b = 0; b < n; b++){
            cin >> new_num;
            curr_max = max(new_num, curr_max);
            nums.push_back(new_num);
        }

        long long ans = 1e18;

        for(int x: {curr_max, curr_max + 1}){
            long long odd_wtr = 0, even_wtr = 0;

            for(int c = 0; c < n; c++){
                odd_wtr += (x - nums[c]) % 2; // whatever the remainder of below is will be a +1 operation -- since we are most likely doing +1 operations towards the end
                even_wtr += (x - nums[c]) / 2; // we greedily do +2 operations which this variable will become
            }
            long long dif = max(0ll, even_wtr - odd_wtr - 1) / 3;
            odd_wtr += dif * 2;
            even_wtr -= dif;
            ans = min(ans, max(odd_wtr * 2 - 1, even_wtr * 2));

            if(even_wtr > 0){
                odd_wtr += 2;
                even_wtr--;
                ans = min(ans, max(odd_wtr * 2 - 1, even_wtr * 2));
            }

        }
        cout << ans << endl;

    }
}