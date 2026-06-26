 #include <iostream>
using namespace std;

int main()
{
    double wattage, totalLoad = 0;

    for (int i = 1; i <= 12; i++)
    {
        cout << "Enter wattage of lighting point " << i << ": ";
        cin >> wattage;

        totalLoad += wattage;
    }

    cout << "\nTotal Lighting Load = "
         << totalLoad << " W" << endl;

    return 0;
}
