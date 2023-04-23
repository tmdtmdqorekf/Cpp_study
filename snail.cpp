#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n, a, b;
        cin >> n >> a >> b;
        int index = 0;
        int num = 0;
        int s = 1;

        for (int k=1; k<=((n*2)-1); k++) {
            if (k%4==1) {
                for (int m=1; m<=((n+2)-(2*s)); m++) {
                    index++;
                    num += 1;
                    if ((a<=index) && (b>=index)) {
                        cout << num << " ";
                    }
                }
            }
            else if (k%4==2) {
                for (int m=1; m<=((n+1)-(2*s)); m++) {
                    index++;
                    num+=n;
                    if ((a<=index) && (b>=index)) {
                        cout << num << " ";
                    }
                }
            }
            else if (k%4==3) {
                for (int m=1; m<=((n+1)-(2*s)); m++) {
                    index++;
                    num-=1;
                    if ((a<=index) && (b>=index)) {
                        cout << num << " ";
                    }
                }
            }
            else if (k%4==0) {
                for (int m=1; m<=(n-(2*s)); m++) {
                    index++;
                    num-=n;
                    if ((a<=index) && (b>=index)) {
                        cout << num << " ";
                    }
                }
                s++;
            }
        }
        cout << endl;
    }
}