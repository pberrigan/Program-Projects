// Patrick Berrigan
// CSCI 1933 M02
// Program 2: This program will calculate the sales prediction for a Company Division.

#include <iostream>
using namespace std;

int main()
{
    // Variable Declaration
    double totalSales, percentDivision, result;

    // Input
    percentDivision = .58;
    totalSales = 8.6e6;

    // Processing
    result = totalSales * percentDivision;

    // Output
    cout << "East Coast Division Outlook:" << endl;
    cout << "The East Coast Division is predicted to generate $" << result << " in revenue this year." << endl;
    cout << "This prediction is based on the East Coast Division accounting for " << (percentDivision*100) << "% average yearly sales" << endl;
    cout << "and the company's projected $" << (totalSales) << " in total sales for the end of this fiscal year." << endl;

    return 0;
}
