#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "3,6,9,12,5: ";

    while (true)
    {
        cin >> num;

        if (num % 3 != 0)
            break;

        sum += num;
    }

    cout << "Sum of multiples of 3 = " << sum << endl;

    return 0;
}
