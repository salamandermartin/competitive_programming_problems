#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;


    int card_amt, curr_card, shuffle_amt, shuffle_size, curr_ptr;
    vector<int> curr_deck;
    curr_ptr = 0;
    vector<int> ans;


    for (int i = 0; i < n; i++){
        cin >> card_amt;

        for (int a = 0; a < card_amt; a++){
            cin >> curr_card;
            curr_deck.push_back(curr_card);
        }

        cin >> shuffle_amt;
        for (int b = 0; b < shuffle_amt; b++){
            cin >> shuffle_size;
            curr_ptr += shuffle_size;
            if (curr_ptr >= shuffle_size){
                curr_ptr %= card_amt;
            }
        }
        ans.push_back(curr_deck[curr_ptr]);

        curr_ptr = 0;
        curr_deck = {};

    }

    for (int j = 0; j < ans.size(); j++){
        cout << ans[j];
        if (j < ans.size() - 1){
            cout << endl;
        }
    }

}