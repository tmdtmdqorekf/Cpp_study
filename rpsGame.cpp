#include <iostream>
using namespace std;

int main() {
   int result;
   int t;
   cin >> t;

   for (int i=1; i<=t; i++) {
      int n;
      cin >> n;
      if (n<2 && n>100) {
         break;
      }
      int s = 0;
      int r = 0;
      int p = 0;

      for (int j=1; j<=n; j++) {
         int num = 0;
         cin >> num;
         if (num == 1) {
            s++;
         }
         else if (num == 2) {
            r++;
         }
         else if (num == 3) {
            p++;
         }
      }

      if (s>=1 && r>=1 && p>=1) {
         result = 0;
      }
      else if (s==n || r==n || p==n) {
         result = 0;
      }
      else if (s==0) {
         result = p;
      }
      else if (r==0) {
         result = s;
      }
      else if (p==0) {
         result = r;
      }
      cout << result << endl;
   }
   return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//    int t;
//    cin >> t;
//    for (int q=1; q<=t;q++) {
//       int c=0;
//       int d=0;
//       int e=0;
//       for (int i=0;;i++) {
//          int a;
//          int b;
//          cin >> a;
//          if (i==0){
//             b=a;
//          }
//          if (a==3) {
//             c++;
//          }
//          if (a==2) {
//             d++;
//          }
//          if (a==1) {
//             e++;
//          }
//          if (i==b) {
//             break;
//          }
//       }
//       if(c==0) {
//          if (d==0) {
//             cout << '0' << endl;
//          }
//          else if (e==0) {
//             cout << '0' << endl;
//          }
//          else {
//             cout << d << endl;
//          }
//       }
//       else if(d==0) {
//          if (c==0) {
//             cout << '0' << endl;
//          }
//          else if (e==0) {
//             cout << '0' << endl;
//          }
//          else {
//             cout << e << endl;
//          }
//       }
//       else if (e==0) {
//          if (d==0){
//             cout << '0'<< endl;
//          }
//          else if (c==0) {
//             cout << '0'<< endl;
//          }
//          else {
//             cout << c << endl;
//          }
//       }
//       else {
//          cout<< '0' << endl;
//       }
//    }
// }