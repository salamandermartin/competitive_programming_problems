#include <iostream>
#include <vector>
    
using namespace std;
    
int k_check(vector<long long int>& nums, long long  int k, long long int hp);
    
int main(){
    int cases;
    cin >> cases;
    
    for(int a = 0; a < cases; a++){
        long long int len, hp, curr_sec, max_gap, last_sec;
        vector<long long int> hit_times;
        cin >> len;
        cin >> hp;
        last_sec = -1;
    
    
        for(int b = 0; b < len; b++){
            cin >> curr_sec;
            hit_times.push_back(curr_sec);
        }

        max_gap = hp;
    
        long long int l = 1, r = max_gap;
        long long int ans = max_gap;
        long long int midpoint;
    
        while(l <= r){
            midpoint = ((r - l) / 2) + l;
            if(k_check(hit_times, midpoint, hp)){
                ans = min(midpoint, ans);
                r = midpoint - 1;
            }
            else {
                l = midpoint + 1;
            }
        }
        cout << ans << endl;
    
    }
}
    
int k_check(vector<long long int>& nums, long long int k, long long int hp){
    long long int time_diff, curr_hp;
    curr_hp = hp;
    
    for(int c = 0; c < nums.size() - 1; c++){
        time_diff = nums[c + 1] - nums[c];
    
        if(time_diff >= k){
            curr_hp -= k;
        }
        else if(time_diff < k){
            curr_hp -= time_diff;
        }
    
        if(curr_hp <= 0) return true;
    
    }
    if(curr_hp - k <= 0) return true;
    
    
    return false;
}