#include <iostream>
using namespace std;

int main()
{
    int num, largest;

    cout << "1,5,17,77,32,89,110,2,0 : ";
    cin >> num;

    largest = num;

    while (num != 0)
    {
        if (num > largest)
            largest = num;

        cin >> num;
    }

    cout << "Largest number = " << largest << endl;

    return 0;
}
