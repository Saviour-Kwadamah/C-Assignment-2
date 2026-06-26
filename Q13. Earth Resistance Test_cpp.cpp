 #include <iostream>
using namespace std;

int main()
{
    float resistance;

    cout << "Enter earth resistance reading (Ohms): ";
    cin >> resistance;

    while (resistance <= 5)
    {
        cout << "Earth resistance is acceptable." << endl;

        cout << "Enter earth resistance reading (Ohms): ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system." << endl;

    return 0;
}
