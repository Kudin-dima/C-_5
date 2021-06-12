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

    int id = 0 - lim;
    for (int i = 0; i < 10; i++)
        if (a[i] < 0)
        {
            id = i;
            break;
        }

    int sum = 0;
    if (id != 0 - lim)
    {
        cout << "\nindex = " << id;
        for (int i = id + 1; i < 10; i++)
            sum += abs(a[i]);
        cout << "\nsum = " << sum;
    }
    else
        cout << "no negative";
}