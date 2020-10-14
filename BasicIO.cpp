#include <iostream>
using namespace std;

//Program with basic input/output

int main()
{
  int age;

  cout << "Enter your age: ";
  cin >> age; // Read the inputs from the user

  cout << "You will die in: " << 75-age << " years." << endl; 

  return 0;
}
