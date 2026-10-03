#include <iostream>

int main()
{
    using namespace std;
    
    int total = 0;
    
    for (int i = 1; i <= 50; i++)
    {
        total = total + i; 
    }
    
    cout << "Final sum is: " << total << endl;
    
    return 0;
}
