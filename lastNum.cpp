#include <iostream>
using namespace std;

int main() {
    unsigned long long result;

    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        result=1;
        int n;
        cin >> n;
        for (int j=1; j<=n; j++) {
            unsigned long num;
            cin >> num;
            result*=num;
            result=result%10;
        }
        cout << result <<endl;
    }
    return 0;
}