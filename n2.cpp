#include <iostream>
using namespace std;

int main()
{
    int a[10], lim;

    cout << "enter num limit \n";
    cin >> lim;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % lim - (lim / 2);
        cout << a[i] << " ";
    }

    int max = 0 - lim;
    for (int i = 0; i < 10; i++)
        if ((a[i] % 2 == 0) && (a[i] > max))
            max = a[i];

    cout << "\n\n" << max;
}