#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cases;
    cin >> cases;

    for (int a = 0; a < cases; a++){
        vector<int> nums;

        int len, curr_min, curr_num;
        curr_min = INT_MAX;
        cin >> len;
        for(int p = 0; p < len; p++){
            cin >> curr_num;
            nums.push_back(curr_num);
            curr_min = min(curr_min, curr_num);
        }
        int total_pairs = len / 2;
        int curr_pairs = 0;

        for(int i = 0; i < nums.size() && curr_pairs < total_pairs ; i++){
            if(nums[i] != curr_min){
                cout << nums[i] << " " << curr_min << endl;
                curr_pairs++;
            }
        }

    }

}