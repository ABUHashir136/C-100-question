#include <iostream>
int main()
{
    using namespace std;
    int X, Y;
    int Z = 1;
    cout << "Enter the Base: " ;
    cin >> X;
    cout << "Enter the power: ";
    cin >> Y;
    for (int i = 1; i <= Y ; i++)
    {
        Z = Z * X;
    }
    cout << Z << endl;
    return 0;
}
