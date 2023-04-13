#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    int total_interval;
    int overlap_interval;

    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        cin >> a >> b >> c >> d;

        total_interval = (b-a)+(d-c);

        if ((a<c && c<b) && (b<d)) {
            overlap_interval = b-c;
            total_interval -= overlap_interval;
        }

        else if ((a<d && d<b) && (c<a)) {
            overlap_interval = d-a;
            total_interval -= overlap_interval;
        }

        else if (a<c && d<b) {
            overlap_interval = d-c;
            total_interval -= overlap_interval;
        }

        else if (c<a && b<d) {
            overlap_interval = b-a;
            total_interval -= overlap_interval;
        }

        else if (d<a || b<c) {
            overlap_interval = 0;
        }
        cout << overlap_interval << " " << total_interval << endl;
    }
}