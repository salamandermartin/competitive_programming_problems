#include <iostream>
#include <vector>
#include <set>

#define forn(i,n) for (int i = 0; i < int(n); i++)

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    const int MOD = 998244353;

    forn(_,t){
        int n, m, k, q; 
        //n - rows in a sheet
        //m - columns in a sheet
        //k - number of possible colors not including white
        //q - number of operations to do
        scanf("%d%d%d%d", &n, &m, &k, &q); //puts command line arguments into n,m,k,q

        vector<int> xs(q), ys(q);
        //creates vector for which rows and columns an operation has been done (in order)
        forn(i, q) scanf("%d%d", &xs[i], &ys[i]); 

        int ans = 1; //always 1 valid coloring where you dont color anything


        //sets store unique values in order
        set<int> ux, uy; 

        for(int i = q - 1; i >=0; i--){ //iterate through the amount of operations backwards -- go backwards because the last change is what will be seen when we evaluate a coloring
            bool fl = false; //checks if any operations have been done

            if(!ux.count(xs[i])){ //if a row has not been seen yet in the operations, we insert it
                ux.insert(xs[i]);
                fl = true;
            }

            if(!uy.count(ys[i])){ //if a column has not been seen yet in the operations, we insert it
                uy.insert(ys[i]);
                fl = true;
            }

            if (fl){
                ans = ans * 1ll * k % MOD; //1ll promotes answer to a long long, otherwise we get an overflow error because ans is an int
                //since we're going backwards - we multiply ans by the amount of colors we can choose 

            }

            if (int(ux.size()) == n || int(uy.size()) == m){
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}