#include <iostream>
using namespace std;

void transpose(int a[10][10], int b[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10];
    int n, m;

    cout << "enter rows and columns: ";
    cin >> n >> m;
    cout << "enter matrix:" << endl;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    transpose(a, b, n, m);

    cout << "result:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";

        cout << endl;
    }
}