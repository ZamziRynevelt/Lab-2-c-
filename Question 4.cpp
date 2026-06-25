#include <iostream>
using namespace std;

int main()
{
    char ch;
    int vowels = 0;

    cout << "a,b,e,x,c,i,q: ";

    while (true)
    {
        cin >> ch;

        if (ch == 'q')
            break;

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') 
        {
            vowels++;
        }
    }

    cout << "Number of vowels = " << vowels << endl;

    return 0;
}
