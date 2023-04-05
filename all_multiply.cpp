#include <iostream>
using namespace std;

int main() {
    unsigned long long x;
    unsigned long long result = 1;
    unsigned long long final = 1;

    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        unsigned long long n;
        cin >> n;
        while (true) {
            result=1;
            do {
                x = n%10;
                n = n/10;
                if (x==0) {
                    continue;
                }
                else {
                    result = result*x;
                }
            }
            while (n!=0);
            n=result;
            if ((n/10)==0) {
                break;
            }
        }
        cout << result << endl;
    }
}