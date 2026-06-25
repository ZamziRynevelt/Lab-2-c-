#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "1,2,6,27,9,3,5,-2: ";

    while (true)
    {
        cin >> num;

        if (num < 0)
            break;

        sum += num;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
