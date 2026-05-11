// Name: Qazi Ehsanullah
// Department: Electrical Engineering 
// Registration No: BF25NWELE0738
// Section: A

#include <iostream>  // library fpr input output
using namespace std;

int main()
{
    int num, i = 1, sum = 0; // initialization of variable

    cout << "Enter a positive integer: ";  // display
    cin >> num;

    while(i <= num) // while loop and condition 
    {
        sum = sum + i;  // gives us sum 
        i++;
    }

    cout << "Sum = " << sum << endl; // display

    return 0;
}


