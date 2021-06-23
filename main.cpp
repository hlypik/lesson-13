#include <iostream>

using namespace std;

int main()
{
  cout << "Identical numbers" << endl << endl;
  int number;
  cout << "Enter a three-digit number: "; cin >> number;
  if (number >= 0 && number <= 99)
  {
    cout<<"Invalid number" << endl;
  }
  else if (number>=1000)
  {
    cout<<"Invalid number" << endl;
  }
  else if ((number/100)==((number/10)%10)||((number/10)%10)==(number%10)||(number/100)==(number%10))  
  {
    cout<<"Found a match" << endl;
  }
  else
  {
    cout<<"No matches found" << endl;
  }
  return 0;
}