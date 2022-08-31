#include <iostream>
#include <unordered_map>
#include <string>


using namespace std;

int main(){
    int x;
    cin >> x;


    for(int a = 0; a < x; a++){
        string curr;
        cin >> curr;
        unordered_map<char, int> curr_map;

        for(int i = 0; i < curr.length(); i++){
            if(curr_map.find(curr[i]) == curr_map.end()){
                curr_map[curr[i]] = 1;
            }
            else {
                curr_map[curr[i]]++;
            }
        }
        string ans = "";
        for(auto s : curr_map){
            if(s.second == 2){
                ans += s.first;
            }
        }
        ans = ans + ans;
        for(auto s : curr_map){
            if(s.second == 1){
                ans += s.first;
            }
        }
        cout << ans << endl;
    } 

}