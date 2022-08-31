#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, m, a;

    cin >> n >> m >> a;
    long long int first_dimension, second_dimension;

    first_dimension = n / a;
    if (n % a != 0){
        first_dimension++;
    }
    
    second_dimension = m / a;
    if (m % a != 0){
        second_dimension++;
    }

    long long int ans = first_dimension * second_dimension;

    cout << ans;

}