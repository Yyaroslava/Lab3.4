#include <iostream> 
using namespace std;

int main()
{
    double x;  // ������� ��������
    double y;  // ������� ��������
    double R;  // ������� ��������
    double a;  // ������� ��������
    double b;  // ������� ��������

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    // ������������ � ����� ����  
    if (y <= 0 && x <= 0 && y >= -b && y <= sqrt(R * R - x * x) ||
        y <= b && y >= 0 && x <= a && y >= sqrt(R * R - x * x)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}
