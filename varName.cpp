#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int result = 1;
        string x = "";
        cin >> x;
        
        for (int j=0; j<x.length(); j++) {
            if (j==0 && 48<=x[j] && 57>=x[j]) {
                result = 0;
                break;
            }
            if ((48>x[j] || (57<x[j] && x[j]<65) || (90<x[j] && x[j]<97) || x[j]>122) && x[j]!=95) {
                result = 0;
                break;
            }
        }
        cout << result << endl;
    }
}