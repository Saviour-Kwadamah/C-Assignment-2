 #include <iostream>
using namespace std;

int main()
{
    float voltage;

    cout << "Enter solar panel voltage reading: ";
    cin >> voltage;

    while (voltage >= 18)
    {
        cout << "Voltage is within operating level." << endl;
        cout << "Enter solar panel voltage reading: ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level." << endl;

    return 0;
}
