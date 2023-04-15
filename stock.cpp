#include <iostream>
using namespace std;

int main(){
    int a, b;
    int cnt;

    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n;
        cin >> n;

        cnt = 0;

        for (int j=0; j<n; j++) {
            int price;
            cin >> price;
            if (j==0) {
                a = price;
                b = price;
            }
            else {
                if (a<b && price<b) {
                    cnt++;
                    a = b;
                    b = price;
                }
                if (b<price) {
                    a = b;
                    b = price;
                }
                if (b>price) {
                    a = b;
                    b = price;
                }
            }
        }
        cout << cnt << endl;
    }
}