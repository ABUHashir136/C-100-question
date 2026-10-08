//18. Write a program that counts and prints how many numbers between 1 and 200 are divisible by 7.
#include <iostream>
int main()
{
    using namespace std;
    int count = 0;
    for (int i = 7; i <= 200; i += 7)
    {
        count++;
    }
    cout << "That's The Number Divisible By 7: " << count << endl;
    return 0;
}
