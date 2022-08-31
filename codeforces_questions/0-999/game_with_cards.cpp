#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    int alice_card_amt, alice_curr_card, bob_card_amt, bob_curr_card, bob_curr_max, alice_curr_max;
    alice_curr_max = 0;
    bob_curr_max = 0;

    vector<string> ans;
    //amount of cases
    for (int i = 0; i < n; i++){
        cin >> alice_card_amt;
        for (int a = 0; a < alice_card_amt; a++){
            cin >> alice_curr_card;
            if (alice_curr_card > alice_curr_max){
                alice_curr_max = alice_curr_card;
            }
        }
        cin >> bob_card_amt;
        for (int b = 0; b < bob_card_amt; b++){
            cin >> bob_curr_card;
            if (bob_curr_card > bob_curr_max){
                bob_curr_max = bob_curr_card;
            }
        }

        if (bob_curr_max > alice_curr_max){
            ans.push_back("Bob");
            ans.push_back("Bob");
        } else if (alice_curr_max > bob_curr_max){
            ans.push_back("Alice");
            ans.push_back("Alice");
        } else {
            ans.push_back("Alice");
            ans.push_back("Bob");
        }

        alice_curr_max = 0;
        bob_curr_max = 0;


    }
    for (int num = 0; num < ans.size(); num++){
        cout << ans[num];
        if (num < ans.size() - 1){
            cout << endl;
        }
    }



}