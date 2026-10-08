#include <iostream>
int main()
{
    using namespace std;
    int num;
    int total = 0;
    cout << "Enter The Number According to ASCII: " ;
    cin >> num;
    for (int i = 65; i <= 91; i++)
    {
        total++;
    }
        cout << (char) num << endl;
    return 0;
}
    
