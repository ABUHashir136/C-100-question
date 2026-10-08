#include <iostream>
int main()
{
    using namespace std;
    int num;
    cout << "Enter The Positive Number: ";
    cin >> num;
    while (num <= 0)
    {
        cout << "Enter The Vaild Number: ";
        cin >> num;
    }
      return 0;
}
