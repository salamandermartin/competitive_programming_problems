#include <iostream>

using namespace std;

int main(){

    int total_rides, multi_ticket_rides, single_price, multi_price;
    cin >> total_rides >> multi_ticket_rides >> single_price >> multi_price;

    double ratio_bottom = (double) multi_ticket_rides;
    double ratio_top = (double) multi_price;
    double ratio = ratio_top / ratio_bottom;

    double one_price = (double) single_price;
    int ans = 0;

    if (ratio >= one_price){
        cout << single_price * total_rides;
        exit(0);
    }

    else {
        int before_end = total_rides / multi_ticket_rides;
        ans = multi_price * before_end;

        int leftover = total_rides % multi_ticket_rides;
        if(leftover > 0){
            if (leftover * single_price < multi_price){
                ans = ans + (leftover * single_price);
            }
            else {
                ans = ans + multi_price;
            }
        }
        cout << ans;
        exit(0);

    }


}