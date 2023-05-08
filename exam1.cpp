#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n;
        cin >> n;
        int odd = 0;
        int even = 0;

        for (int i=0; i<n; i++) {
            int k;
            cin >> k;
            if (k%2==0) {
                even++;
            }
            if (k%2!=0) {
                odd++;
            }
        }
        cout << odd << " " << even << endl;
    }
}