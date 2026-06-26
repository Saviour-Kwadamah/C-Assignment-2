 #include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Fuse Rating Menu" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Application: Lighting circuits";
            break;

        case 2:
            cout << "Application: Small appliances";
            break;

        case 3:
            cout << "Application: Domestic plug tops and sockets";
            break;

        case 4:
            cout << "Application: Water heaters and medium loads";
            break;

        case 5:
            cout << "Application: Electric cookers and heavy-duty circuits";
            break;

        default:
            cout << "Invalid selection";
    }

    return 0;
}
