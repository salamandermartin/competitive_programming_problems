#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int vectors[n][3];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> vectors[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << vectors[i][j] << ' ';
        }
        std::cout << std::endl;
    }


    int sum = 0;
    for (int j = 0; j < 3; j ++){
        for (int i = 0; i < n; i ++){
            sum = sum + vectors[i][j];
        }
        cout << sum;
        if (sum != 0){
            cout << "NO";
            exit(0);
        }
    }

    cout << "YES";

}