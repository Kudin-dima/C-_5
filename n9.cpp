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
    cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        a[i] = pow(a[i], 2);
        cout << a[i] << " ";
    }
}