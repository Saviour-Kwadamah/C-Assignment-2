 #include <iostream>
using namespace std;

int main()
{
    double power, time, energy;
    double totalEnergy = 0;

    for (int appliance = 1; appliance <= 8; appliance++)
    {
        cout << "\nAppliance " << appliance << endl;

        cout << "Enter Power Rating (W): ";
        cin >> power;

        cout << "Enter Usage Time (hours): ";
        cin >> time;

        energy = power * time;

        totalEnergy += energy;
    }

    cout << "\nTotal Energy Consumed = "
         << totalEnergy << " Wh" << endl;

    return 0;
}
