#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int zero = 0;
        int one = 0;

        string s = "";
        int n;
        cin >> n;
        
        while (n>0) {
            if (n%2 == 1) {
                s = "1" + s;
                one++;
            }
            else {
                s = "0" + s;
                zero++;
            }
            n >>= 1;
        }
        cout << zero << " " << one << endl;
    }
}