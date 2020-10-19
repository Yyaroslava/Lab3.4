#include <iostream> 
using namespace std;

int main()
{
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R;  // вхідний параметр
    double a;  // вхідний параметр
    double b;  // вхідний параметр

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    // розгалуження в повній формі  
    if (y <= 0 && x >=-a && x <= 0 && y >= -b && y <= sqrt(R * R - x * x) ||
        y <= b && y >= 0 &&  x <= a && x >= sqrt(R * R - y * y)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}
