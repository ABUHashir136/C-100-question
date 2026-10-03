#include <iostream>

int main()
{
    using namespace std;
    
    int N;
    cout << "Enter an integer N: ";
    cin >> N;
    for (int i = 2; i <= N; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
