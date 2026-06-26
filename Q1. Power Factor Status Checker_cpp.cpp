 #include <iostream>
using namespace std;

int main()
{
    float powerFactor;

    cout << "Enter power factor: ";
    cin >> powerFactor;

    if (powerFactor < 0 || powerFactor > 1)
    {
        cout << "Invalid power factor";
    }
    else if (powerFactor <= 0.50)
    {
        cout << "Poor power factor";
    }
    else if (powerFactor <= 0.80)
    {
        cout << "Fair power factor";
    }
    else if (powerFactor <= 0.95)
    {
        cout << "Good power factor";
    }
    else
    {
        cout << "Excellent power factor";
    }

    return 0;
}
