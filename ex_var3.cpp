#include <iostream>
using namespace std;
int main(){
    /*input abcdf and return xy value
    ax + by = c; bx + ey = f*/
    float a, b, c, d, e, f, x, y;
    cout << "Enter a b c d f: " << endl;
    cin >> a >> b >> c >> d >> e >> f;

    x = ((b*f) - (c*e)) / ((a*e) - (b*d));
    y = ((a*f) - (c*d)) / ((a*e) - (b*d));
    cout << "x = " << x << endl;
    cout << "y = " << y << endl; 
    return 0;
}