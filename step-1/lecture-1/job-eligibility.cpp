#include <bits/stdc++.h>
using namespace std;
/**
 * Take the age from the user and then decide accordingly
 * 1. If age < 18
 * print -> Not eligible for job
 * 2. If age >= 18 and age <= 54
 * print -> ELigible for job
 * 3. If age >= 55 and age <= 57
 * print -> ELigible for job, but retirement soon.
 * 4. If age > 57
 * print -> Retirement time
 */
int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not eligible for job" << endl;
    }
    else if (age <= 57)
    {
        cout << "Eligible for job" << endl;
        if (age >= 54)
        {
            cout << "but retirement soon" << endl;
        }
        
    }
    
    else
    {
        cout << "Retirement time" << endl;
    }

    return 0;
}
