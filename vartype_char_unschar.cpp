#include <iostream>
using namespace std;
int main(){
    unsigned char a, b;
    char c, d;
    a = 97; //result as ASCII code 97 = a
    b = 'a'; // letter 
    c = a - 31; // c = 66 => ACSII code 66 = B
    d = 'B'; // letter 
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}
