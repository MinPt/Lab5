#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,x;
    float Y;
    int HowMuch = 0;
    setlocale(0, "");
    cout << "Enåter x" << endl;
    cin >> x;
    for (i = 1; i <= 9; i++) {
        HowMuch = HowMuch + pow(i,3);
    };
    Y = (cos(HowMuch) + 3*pow(sin(x),2))/(x*x + 5);
    cout << "Y = " << Y << endl;
    cout << "Thanks for using my program" << endl;
    system("pause");
    return 0;
}
