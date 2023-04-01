// 배열 사용
// #include <iostream>
// using namespace std;

// int main() {
    
//     int t;
//     cin >> t;
    
//     for (int i=1; i<=t; i++) {
//         int n;
//         cin >> n;
        
//         int arr[n];

//         for (int j=0; j<=(n-1); j++) {
//             cin >> arr[j];
//         }

//         int max=arr[0];
//         int min=arr[0];

//         for (int k=0; k<(n-1); k++) {
//             if (n==1) {
//                 min = arr[k];
//                 max = arr[k];
//             }
//             else if (max < arr[k+1]) {
//                 max = arr[k+1];
//             }
//             else if (min > arr[k+1]) {
//                 min = arr[k+1];
            
//             }
//             else {
//                 continue;
//             }
//         }
//         cout << min << " " << max << endl;
//     }
//     return 0;
// }

//배열 미사용
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int min;
    int max;
    for (int i=1; i<=t; i++) {
        int n;
        cin >> n;
        for (int j=0; j<n; j++) {
            int num;
            cin >> num;
            if (j==0){
                max=num;
                min=num;
            }
            if (max <= num) {
                max = num;
            }
            if (min >= num) {
                min = num;
            }
        }
        cout << max << " " << min <<endl;
    }
    return 0;
}