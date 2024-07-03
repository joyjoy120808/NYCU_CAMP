#include <bits\stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c,d ;

    cin >> a >> b >> c;

    d = (b*b)-(4*a*c);

    cout << setprecision(4) << fixed <<((-b)-d)/(2*a) << "\n";
    cout << ((-b)+d)/(2*a);
}
