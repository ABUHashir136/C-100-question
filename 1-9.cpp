#include <iostream>
#include <string>
int main()
{
  using namespace std;
  string word;
  int N;
  cout << "Enter The Word: ";
  cin >> word;
  cout << "Enter The Number: ";
  cin >> N;
  for ( int i = 0; i < N ; i++ )
  {
    cout << word << endl;
  }
  return 0;
}
