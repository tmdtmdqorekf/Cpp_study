#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        int k;
        cin >> k;
        for (int j=0; j<k; j++) { //가로 j
            for (int h=0; h<k; h++) { //세로 h
                if (j==k/2) {
                    for (int a=0; a<k; a++) {
                        if (a==k/2) {
                            cout << "O";
                        }
                        else {
                            cout << "+";
                        }
                    }
                    cout << endl;
                    j++;
                }
                else if (j!=k/2) {
                    for (int b=0; b<k; b++) {
                        if (b==k/2) {
                            cout << "I";
                        }
                        else if (h == (k-b-1)) {
                            cout << "*";
                        }
                        else {
                            cout << ".";
                        }
                    }
                    cout << endl;
                    j++;
                }
            }
        }
    }
}