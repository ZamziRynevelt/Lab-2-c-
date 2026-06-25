#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cout << "apple,banana,range,mango,cocoa,done:" << endl;

    while (true)
    {
        cin >> word;

        if (word == "done")
            break;

        count++;
    }

    cout << "Number of strings entered = " << count << endl;

    return 0;
}
