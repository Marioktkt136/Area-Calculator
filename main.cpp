#include <iostream>
using namespace std;
int main() {

    cout << "Welcome to -- Area Calculator --" << endl;

    bool flag = true;
    while(flag) {
        cout << "To Enter & Start to Calculate, Enter Number (1)" << endl;
        cout << "To Exit & Close Application, Enter Number (2)" << endl;
        int x;
        cin >> x;
        if (x == 1) {
            cout << "1- Area of Square      2- Area of Circle      3- Area of Rectangle" << endl;
            cout << "Choose the number of the shape you want to calculate area: ";
            int num;
            cin >> num;
            int area = 0;
            if (num == 1) {
                cout << "Enter measure Side of the Square: ";
                int side;
                cin >> side;
                area = side * side;
                cout << "area of Square is equal = " << area <<"cm"<<(char) 253 << endl << endl;
            }
            if (num == 2) {
                cout << "Enter measure Radius of the Circle: ";
                int Radius;
                cin >> Radius;
                const float pi = 3.14;
                area = pi * (Radius * Radius);
                cout << "area of Circle is equal = " << area <<"cm"<<(char) 253<< endl << endl;
            }
            if (num == 3) {
                cout << "Enter measure Length of the Rectangle: ";
                int Length, Width;
                cin >> Length;
                cout << "Enter measure Width of the Rectangle: ";
                cin >> Width;
                area = Length * Width;
                cout << "area of Rectangle is equal = " << area << "cm"<<(char) 253 << endl << endl;
            }
        }
        if (x == 2) {
            break;
        }
        flag = false;
    }
    while(!flag) {
        cout << "To Calculate another shape, Enter Number (1)" << endl;
        cout << "To Exit & Close Application, Enter Number (2)" << endl;
        int x;
        cin >> x;
        if (x == 1) {
                cout << "1- Area of Square      2- Area of Circle      3- Area of Rectangle" << endl;
                cout << "Choose the number of the shape you want to calculate area: ";
                int num;
                cin >> num;
                int area = 0;
            if (num == 1) {
                cout << "Enter measure Side of the Square: ";
                int side;
                cin >> side;
                area = side * side;
                cout << "area of Square is equal = " << area <<"cm"<<(char) 253 << endl << endl;
            }
            if (num == 2) {
                cout << "Enter measure Radius of the Circle: ";
                int Radius;
                cin >> Radius;
                const float pi = 3.14;
                area = pi * (Radius * Radius);
                cout << "area of Circle is equal = " << area <<"cm"<<(char) 253<< endl << endl;
            }
            if (num == 3) {
                cout << "Enter measure Length of the Rectangle: ";
                int Length, Width;
                cin >> Length;
                cout << "Enter measure Width of the Rectangle: ";
                cin >> Width;
                area = Length * Width;
                cout << "area of Rectangle is equal = " << area << "cm"<<(char) 253 << endl << endl;
            }
        }
        if (x == 2) {
            break;
        }
    }

    return 0;
}
