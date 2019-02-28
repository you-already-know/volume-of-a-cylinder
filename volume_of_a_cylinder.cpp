#include <iostream>
using namespace std;

int main()
{
    // variables
    double r = 0.0; //radius of cylinder
    double h = 0.0; //height of cylinder
    const double PI = 3.14; //PI is constant and therefore is const double
    double v = 0.0; //volume of cylinder

    // input items
    cout << "Please enter radius of cylinder: ";
    cin >> r;
    cout << "Please enter height of cylinder: ";
    cin >> h;

    // calculating the volume by given formula
    v = PI * r * r * h;

    // output item
    cout << "The volume of cylinder is: " << v << endl;

    return 0;
}

