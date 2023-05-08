// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     for (int i=0; i<t; i++) {
//         vector<int> vec;

//         for (int j=0; j<1000; j++) {
//             int n;
//             cin >> n;

//             if (n>=1 && n<=100) {
//                 vec.push_back(n);
//             }
//             if (n==0) {
//                 break;
//             }
//         }

//         sort(vec.begin(), vec.end());

//         int maxCount = 0;
//         int maxCountNum = 0;

//         for (int j=0; j<vec.size(); j++) {
//             int myCount = count(vec.begin(), vec.end(), vec[j]);
//             maxCount = max(maxCount, myCount);

//             if (myCount == maxCount) {
//                 maxCountNum = vec[j];
//             }
//         }
//         cout << maxCountNum << endl;
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> vec;
        unordered_map<int, int> countMap;
        int n;

        while (true) {
            cin >> n;

            if (n == 0) {
                break;
            }
            if (n >= 1 && n <= 100) {
                vec.push_back(n);
                countMap[n]++;
            }
        }

        int maxCount = 0;
        int maxCountNum = 0;
        for (const auto& pair : countMap) {
            if (pair.second > maxCount || (pair.second == maxCount && pair.first > maxCountNum)) {
                maxCount = pair.second;
                maxCountNum = pair.first;
            }
        }
        cout << maxCountNum << endl;
    }
}
