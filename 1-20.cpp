#include <iostream>
int main()
{
    using namespace std;
    float num;
    int total = 0;
    cout << "Enter The 5 Integer: \n";
    for (int i = 1; i <= 5; i++)
    {
      cout << "Enter The Integer: ";
      cin >> num;
      total = total + num;
    }
    cout << total / 5 << endl;
    return 0;
}
    
