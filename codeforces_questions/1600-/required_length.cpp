#include <iostream>
#include <string>
#include <unordered_set> 
#include <queue>
using namespace std;



int main(){
    long long int x;
    int n, ans;
    cin >> n;
    cin >> x;
    ans = 0;
    if(x == 1){
        cout << -1;
        exit(0);
    }
    vector<long long> start = {x};
    queue<vector<long long>> q;
    q.push(start);
    unordered_set<long long> memo;

    while(!q.empty()){
        vector<long long> curr = q.front();
        q.pop();

        vector<long long> new_layer;
        for(int i = 0; i < curr.size(); i++){
            long long curr_num = curr[i];
            string s = to_string(curr_num);
            if(s.length() == n){
                std::cout << ans;
                exit(0);
            }
            if(s.length() > n){
                continue;
            }

            for(int a = 0; a < s.length(); a++){
                if(((int) s[a] - '0') > 1 && !memo.count(curr_num * ((int) s[a] - '0'))){
                    new_layer.push_back(curr_num * ((int) s[a] - '0'));
                    memo.insert(curr_num * ((int) s[a] - '0'));
                }
            }

        }
        if(new_layer.size() > 0){
            q.push(new_layer);
        }
        ans++;
    }
    std::cout << -1;
}
