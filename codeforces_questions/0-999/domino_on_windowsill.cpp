#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;

    for(int a = 0; a < cases; a++){
        int n, k1, k2, w, b;

        cin >> n >> k1 >> k2 >> w >> b;

        int curr_k1 = 0, curr_k2 = 0;
        bool cont = true;

        while(w > 0){
            if(curr_k1 < k1 && curr_k2 < k2){
                curr_k1++;
                curr_k2++;
                w--;
            }
            else if(curr_k1 < k1 && curr_k2 >= k2 && (k1 - curr_k1 >= 2)){
                curr_k1 += 2;
                w--;
            }
            else if(curr_k2 < k2 && curr_k1 >= k1 && (k2 - curr_k2 >= 2)){
                curr_k2 += 2;
                w--;
            }
            else {
                cont = false;
                break;
            }
        }
        if(!cont){
            cout << "NO" << endl;
            continue;
        }

        curr_k1 = k1, curr_k2 = k2;

        while(b > 0){
            if(curr_k1 < n && curr_k2 < n){
                curr_k1++;
                curr_k2++;
                b--;
            }
            else if(curr_k1 < n && curr_k2 >= n && (n - curr_k1 >= 2)){
                curr_k1 += 2;
                b--;
            }
            else if(curr_k2 < n && curr_k1 >= n && (n - curr_k2 >= 2)){
                curr_k2 += 2;
                b--;
            }
            else {
                cont = false;
                break;
            }
        }
        if(!cont){
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
        }


    }


}