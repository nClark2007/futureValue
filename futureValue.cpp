#include <iostream>
#include <cmath> //for pow
using namespace std;

double valueCalc(double month, double annual, double time) {
    //get monthly rate
    double monthlyRate = (annual/ 100) / 12;
    //get total months for proper multiplying
    double totalMonths = time * 12;
    //calculate the future value
    double futureValue = month * ((pow(1 + monthlyRate, totalMonths) - 1) / monthlyRate);

    //Rule of 72 to find years to double
    double doubleTime = 72 / annual;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The future value will be $" << futureValue << endl;
    cout << "The account balance would double every " << doubleTime << " years after." << endl;
    return futureValue;
}

int main(){
    //declare variables
    double monthly, APY, term;
    //get user input
    cout << "FUTURE VALUE CALCULATOR" << endl;
    cout << "Enter your monthly investment: $";
    cin >> monthly;
    cout << "Enter APY for investment: %";
    cin >> APY;
    cout << "Enter term for investment: ";
    cin >> term;

    //external function for calculations.
    valueCalc(monthly, APY, term);
    return 0;
}