#include <iostream>
using namespace std;

double conversion(double val){
    return val*3.28084;
}



int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    double value;
    cout << "This is a conversion of Meter To Foot." << endl << "Please enter the Value you would like to convert >"<<endl;
    cin >> value;
    cout << "The output is: " << conversion(value) << " Ft." << endl;

    return 0;
}
