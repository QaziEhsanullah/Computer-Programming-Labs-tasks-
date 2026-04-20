// Name: Qazi Ehsanullah
// Department: Electrical Engineering 
// Registration No: BF25NWELE0738
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while(i <= num)
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}


