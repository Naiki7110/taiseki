
#include <iostream>
#include "getVolumeSurface.h"
using namespace std;

int main()
{
    double width;
    double height;
    double depth;
    double volume;
    double surface;

    cout << "幅を入力：";
    cin >> width;
    cout << "高さを入力：";
    cin >> height;
    cout << "奥行を入力：";
    cin >> depth;

    volume = getVolumeSurface(width, height, depth,&surface);
    cout << "体積は" << volume << endl << "表面積は" << surface << endl;
    int e;
    return 0;





}
