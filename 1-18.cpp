#include <iostream>
int main()
{
    using namespace std;
    int N;
    int total = 0;
    cout << "Enter the limit N: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        
        if (i % 2 != 0) 
        {
            total = total + i;
        }
        else 
        {
            total = total - i;
        }
    }
    cout << "The alternating sum is: " << total << endl;
    return 0;
}
