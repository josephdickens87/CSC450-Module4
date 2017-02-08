#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double *hours = new double;
    double *payRate = new double;
    double *payCheck = new double;

    cout << "Enter number of hours worked, then press enter" << endl;
    cin >> *hours;
    cout << "Enter pay rate ($/hr), then press enter" << endl;
    cin >> *payRate;

    if (*hours <= 40)
        *payCheck = *payRate * *hours;
    else
        *payCheck = ((*hours - 40) * (*payRate * 1.5)) + *payRate * 40;

    cout << "\n\nyou entered " << *hours << " for number of hours worked.";
    cout << "\nhours address in memory is: " << &hours << endl;
    cout << "\n\nyou entered " << *payRate << " for rate of pay.";
    cout << "\npay rate's address in memory is: " << &payRate << endl;
    cout.width(10);
    cout << "\n\nYour total pay using 'width' is: " << *payCheck << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "\nYour total pay using 'precision' is: " << *payCheck << endl;
    cout << "\npay check amount's address in memory is: " << &payCheck << endl;

    delete hours, payRate, payCheck;

    return 0;
}