#include <iostream>
using namespace std;

const int AGE_OF_MAJORITY = 21;
const int DAYS_IN_YEAR = 365;

int main()
{
    int age;
    int days_until_major;
    
    cout << "Enter your age: ";
    //cin.get() >> age;  <-- BAD CODE
    age = cin.get();

    if (age >= AGE_OF_MAJORITY)
    {
        cout << "You're " << age << " years old." << endl;
        cout << "Come on in!" << endl;
    }
    else
    {
        days_until_major = (AGE_OF_MAJORITY - age)*DAYS_IN_YEAR;
        cout << "Come back in " 
             << days_until_major
             << " days!" << endl;
    }
    return 0;
}
