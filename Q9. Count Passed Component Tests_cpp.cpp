 #include <iostream>
using namespace std;

int main()
{
    int result;
    int passCount = 0;
    int failCount = 0;

    for (int component = 1; component <= 15; component++)
    {
        cout << "Enter result for Component "
             << component
             << " (1 = Pass, 0 = Fail): ";
        cin >> result;

        if (result == 1)
        {
            passCount++;
        }
        else
        {
            failCount++;
        }
    }

    cout << "\nPassed Components = "
         << passCount << endl;

    cout << "Failed Components = "
         << failCount << endl;

    return 0;
}
