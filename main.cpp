#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double x1, x2;
    // TODO
    cin >> a >> b >> c;

    // TODO

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);

    // TODO

    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    // TODO

    cout << setprecision(2) << fixed;
    
    if (x1 > x2){
        cout << x1 << " " << x2;
    }
    else{ 
        cout << x2 << " " << x1;
    }
    // TODO
    // TODO

    // TODO

    return 0;
}
