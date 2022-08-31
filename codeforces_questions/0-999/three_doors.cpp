#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int cases, curr_key;
    cin >> cases;

    for(int a = 0; a < cases; a++){
        vector<int> keys;
        int start;
        cin >> start;


        for(int b = 0; b < 3; b++){
            cin >> curr_key;
            keys.push_back(curr_key);
        }
        unordered_map<int, bool> ans;

        for(int i = 1; i <= 3; i++){
            ans[i] = false;
        }

        while(start != 0){
            ans[start] = true;
            start = keys[start - 1];
        }

        bool yn = true;
        for(auto j: ans){
            if(j.second == false){
                cout << "NO" << endl;
                yn = false;
                break;
            }
        }
        if (yn == true){
            cout << "YES" << endl;
        }



    }

}