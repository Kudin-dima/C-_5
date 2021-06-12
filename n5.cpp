#include <iostream>
using namespace std;

int main()
{
    int a[10], lim_1, lim_2;

    cout << "enter num limits \n";
    cin >> lim_1 >> lim_2;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % (lim_2 - lim_1) + lim_1;
        cout << a[i] << " ";
    }

    int num_elements = 10, i = 0, j;
    cout << "\nenter range for delete\n";
    cin >> lim_1 >> lim_2;
    while (i < num_elements)
    {
        if ((a[i] <= lim_2) && (a[i] >= lim_1))
        {
            num_elements -= 1;

            for (j = i; j < num_elements; j++)
                a[j] = a[j + 1];
        }
        else
            i += 1;
    }

    for (int i = num_elements; i < 10; i++)
        a[i] = 0;

    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
}