#include <iostream>

int main()
{
    using namespace std;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}
