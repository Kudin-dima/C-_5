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
    for (int i = 0; i < 10; i++)
    {
        while (a[i] > 0)
        {
            sum += a[i] % 10;
            a[i] /= 10;
        }
    }

    cout << "\n" << sum;
}