#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double V;
    double a;
    cout<<"Введите длину";
    cin>>a;
    float namber = 5.0f / 12.0f;
    V=5.0/12.0*(3+sqrt(5))*pow(a,3);
    cout << fixed << setprecision(15) << "Объём ребра искоэдра: " <<"\n" << V<<"\n" ;
    return 0;
}
