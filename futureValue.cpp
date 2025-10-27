#include <iostream>
#include <iomanip>
using namespace std;

double futureValue(double monthly, double rate, double years) {
    double futureVal = 0.0;
    double monthlyInt = 0;
    //input conversions
    double monthlyRate = rate / 12.0 / 100;
    int months = years * 12;

    // calculation
    for (int i = 0; i < months; i++) {
        futureVal += monthly;
        monthlyInt =  futureVal * monthlyRate;
        futureVal = futureVal + monthlyInt;
    }
    return futureVal;
}

double ruleOf72(double annual) {
    //Rule of 72
    double rule = 72 / annual;
    cout.setf(ios::fixed);
    cout.precision(2);
    return rule;
}

int main(){
    // testing the futureValue function and rule of 72
    cout << fixed << setprecision(2);
    cout << "The future value will be $" << futureValue(100, 8.25,10.5) << endl;
    cout << "The account balance would double every " << ruleOf72(8.25) << " years after." << endl;
    cout << endl;
    cout << "The future value will be $" << futureValue(500, 6.35, 5) << endl;
    cout << "The account balance would double every " << ruleOf72(6.35) << " years after." << endl;
    return 0;
}