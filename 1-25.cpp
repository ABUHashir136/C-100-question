#include <iostream>
int main()
{
    using namespace std;
    int i = 1;
    while (i <= 10000)
    {
        i = i * 2;
    }
    cout << "That's The Power: " << i << endl;
    return 0;
}
