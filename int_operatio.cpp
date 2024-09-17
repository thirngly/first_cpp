#include <iostream>
using namespace std;
int main(){
    int i = 2, j = 4, m = 6, n = 8;

    cout << "i = 2, j = 4, m = 6, n = 8:" << endl;
    cout << " --n : " << --n << endl;//=7
    cout << " m-- : " << m-- << endl;//=6
    cout << "i++ = " << i++ <<endl; // =2 run twice up increase itseft +1
    cout << "++j = " << ++j << endl;//=5
    cout << "i + j = " << i + j << endl;//=3 + 5
    cout << "i - j = " << i - j <<endl;//=3 - 5
    cout << "i * j = " << i * j << endl;//=3 * 5
    cout << "i / j = " << i / j <<endl;//=3 / 5
    
    i += 10;// i = (i++) + 10 = 3 + 10
    cout << "i += 10 = " << i << endl;
    j += 10;// j = (++j) + 10 = 5 + 10
    cout << "j += 10 = " << j << endl;

return 0;
}