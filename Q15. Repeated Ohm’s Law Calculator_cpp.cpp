  #include <iostream>
using namespace std;

int main()
{
    float voltage, current, resistance;
    char choice;

    do
    {
        cout << "Enter voltage: ";
        cin >> voltage;

        cout << "Enter current: ";
        cin >> current;

        resistance = voltage / current;

        cout << "Resistance = " << resistance << " Ohms" << endl;

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
