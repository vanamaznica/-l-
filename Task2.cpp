#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact* a = new Contact[100];
    int n = 0;
    int choice;
    string s;

    do
    {
        cout << "\n1. Add" << endl;
        cout << "2 Show" << endl;
        cout << "3 Search name" << endl;
        cout << "4 Search phone" << endl;
        cout << "5 Change " << endl;
        cout << "0 Exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "enter name: ";
            cin >> a[n].name;

            cout << "enter phone: ";
            cin >> a[n].phone;

            n++;
        }

        if (choice == 2)
        {
            for (int i = 0; i < n; i++)
                cout << a[i].name << " " << a[i].phone << endl;
        }

        if (choice == 3)
        {
            cout << "enter name: ";
            cin >> s;

            for (int i = 0; i < n; i++)
                if (a[i].name == s)
                    cout << a[i].name << " " << a[i].phone << endl;
        }

        if (choice == 4)
        {
            cout << "enter phone: ";
            cin >> s;

            for (int i = 0; i < n; i++)
                if (a[i].phone == s)
                    cout << a[i].name << " " << a[i].phone << endl;
        }

        if (choice == 5)
        {
            cout << "enter name: ";
            cin >> s;

            for (int i = 0; i < n; i++)
            {
                if (a[i].name == s)
                {
                    cout << "new name: ";
                    cin >> a[i].name;

                    cout << "new phone: ";
                    cin >> a[i].phone;
                }
            }
        }

    } while (choice != 0);
    delete[] a;
}