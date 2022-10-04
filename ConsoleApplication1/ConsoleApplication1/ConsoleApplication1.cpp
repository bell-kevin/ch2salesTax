// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    auto stateSalesTax = 0.065;
    auto purchasePrice = 50;
    auto countySalesTax = 0.02;
    auto totalCost = 0 ;
    cout << "Ch 2 Sales Tax by Kevin Bell\n\n";
    cout << "Purchase Price $" << purchasePrice << endl;
    stateSalesTax = purchasePrice * 0.065;
    cout << "State Tax      $" << stateSalesTax << endl;
    countySalesTax = purchasePrice * .02;
    cout << "County Tax     $" << countySalesTax << endl;
    totalCost = purchasePrice + stateSalesTax + countySalesTax;
    cout << "Total Cost     $" << totalCost << endl;
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
