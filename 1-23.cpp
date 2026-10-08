#include <iostream>
int main()
{
    using namespace std;
    int total = 0;
    int add = 1;
    while (add != 0)
    {
       cout << "Enter The integer: ";
       cin >> add;
       total = total += add;
    }
    cout << "Total number sum is : " << total << endl;
    return 0;
}
