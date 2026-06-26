 #include <iostream>
using namespace std;

int main()
{
    double line1, line2, line3, averageCurrent;

    for (int set = 1; set <= 6; set++)
    {
        cout << "\nSet " << set << endl;

        cout << "Enter Line 1 Current (A): ";
        cin >> line1;

        cout << "Enter Line 2 Current (A): ";
        cin >> line2;

        cout << "Enter Line 3 Current (A): ";
        cin >> line3;

        averageCurrent = (line1 + line2 + line3) / 3;

        cout << "Average Current = "
             << averageCurrent << " A" << endl;
    }

    return 0;
}
