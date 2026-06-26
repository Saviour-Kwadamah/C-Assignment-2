 #include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter motor temperature reading: ";
    cin >> temperature;

    while (temperature <= 90)
    {
        cout << "Temperature is safe." << endl;
        cout << "Enter motor temperature reading: ";
        cin >> temperature;
    }

    cout << "Motor temperature unsafe. Stop motor test." << endl;

    return 0;
}

