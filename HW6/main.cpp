#include <iostream>
using namespace std;

double calculate_rate(double inc, string stat)
{
    if (stat == "single" || stat == "Single")
    {
        if (inc <= 9950)
            return 10;
        else if (inc > 9950 && inc <= 40525)
            return 12;
        else if (inc > 40525 && inc <= 86375)
            return 22;
        else if (inc > 86375 && inc <= 164925)
            return 24;
        else if (inc > 164925 && inc <= 209425)
            return 32;
        else if (inc > 209425 && inc <= 523600)
            return 35;
        else
            return 37;
    }
    else if (stat == "married" || stat == "Married")
    {
        if (inc <= 19900)
            return 10;
        else if (inc > 19900 && inc <= 81050)
            return 12;
        else if (inc > 81050 && inc <= 172750)
            return 22;
        else if (inc > 172750 && inc <= 329850)
            return 24;
        else if (inc > 329850 && inc <= 418850)
            return 32;
        else if (inc > 418850 && inc <= 628300)
            return 35;
        else
            return 37;
    }
}

int calculate_tax(double inc, double t)
{
    return (inc * (t / 100));
}

int main() {
    double income;
    string status;
    double taxrate;
    double tax;
    cout << "Enter annual household income (single/married): " << endl;
    cin >> income; 
    cout << "Enter tax filing status" << endl;
    cin >> status;
    taxrate = calculate_rate(income, status);
    cout << "Taxrate: " << taxrate << endl;
    tax = calculate_tax(income, taxrate);
    cout << "Tax owed: " << tax << endl;


    return 0;
}