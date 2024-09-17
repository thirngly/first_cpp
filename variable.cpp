#include <iomanip>
#include <iostream>
using namespace std;
int main(){
    int i = 10;
    double d = 40.9; 
    float f = 12.05145;
    long l = 4545;
    float e = d / l;
    cout << "i value: " << i << "\t: integer" <<endl;
    cout << "d value: " << d << "\t: double" << endl;
    cout << "f value: " << f << "\t: float" << endl;
    cout << "l value: " << l << "\t: long" << endl;
    cout << "l value in set base 16 = " << hex << l << endl;
    cout << "l value in set base 10 = " << dec << l << endl;
    cout << "l value in set base 8 = " << setbase(8)<< l << endl;
    cout << "e value = " <<setprecision(3)<< e<<  endl;
    return 0;
}