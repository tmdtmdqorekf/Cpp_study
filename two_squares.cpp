#include <iostream>
using namespace std;

int main(){
    int px, py, qx, qy;
    int px2, py2, qx2, qy2;
    int width, height, area, perimeter;
    int width2, height2, area2, perimeter2;
    int overlap_width, overlap_height, overlap_area, overlap_perimeter;
    int result_area, result_perimeter;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> px >> py >> qx >> qy;
        cin >> px2 >> py2 >> qx2 >> qy2;

        width = qx-px;
        height = qy-py;
        area = width*height;
        perimeter = (width*2)+(height*2);

        width2 = qx2-px2;
        height2 = qy2-py2;
        area2 = width2*height2;
        perimeter2 = (width2*2)+(height2*2);


        if ((px2 < qx && qx2 > px) && (py2 < qy && qy2 > py)) {
            //qx1와 qx2 중 작은 값에서 px1와 px2 중 큰 값을 뺀 값
            overlap_width = min(qx, qx2) - max(px, px2);
            //qy1와 qy2 중 작은 값에서 py1와 py2 중 큰 값을 뺀 값
            overlap_height = min(qy, qy2) - max(py, py2);
            overlap_area = overlap_width*overlap_height;
            overlap_perimeter = (overlap_width*2)+(overlap_height*2);

            result_area = area+area2-overlap_area;
            result_perimeter = perimeter+perimeter2-overlap_perimeter;
        }
        else {
            result_area = area+area2;
            result_perimeter = perimeter+perimeter2;
        }
        cout << result_area << " " << result_perimeter << endl;
    }
}
