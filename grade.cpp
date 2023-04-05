#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int f = 0;
        int n;
        cin >> n;
        for (int j=1; j<=n; j++) {
            int num;
            cin >> num;
            if (num>=90 && num<=100) {
                a+=1;
            }
            else if (num>=80 && num<=89) {
                b+=1;
            }
            else if (num>=70 && num<=79) {
                c+=1;
            }
            else if (num>=60 && num<=69) {
                d+=1;
            }
            else if (num>=1 && num<=59) {
                f+=1;
            }
        }
        cout << a << " " << b << " " << c << " " << d << " " << f <<endl;
    }
    return 0;
}