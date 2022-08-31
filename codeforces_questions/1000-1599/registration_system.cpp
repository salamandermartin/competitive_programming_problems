#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;


    unordered_map<string, int> user_amount;

    string curr;

    for (int i = 0; i < n; i ++){
        cin >> curr;

        if (user_amount.find(curr) != user_amount.end()){
            cout << curr + to_string(user_amount[curr] + 1) << endl;
            user_amount[curr]++;
            }
        else {
            user_amount[curr] = 0;
            cout << "OK" << endl;
            }
    }    


}