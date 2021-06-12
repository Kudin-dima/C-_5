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
        a[i] = 1 + rand() % lim;
        cout << a[i] << " ";
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i)
        sum += a[i];

    float aver;
    aver = float(sum) / 10;
    cout << "\n\naverage: " << aver << "\n\n";

    for (int i = 0; i < 10; ++i)
        if (a[i] < aver)
            cout << a[i] << " ";
}