#include <iostream>
using namespace std;
int digit_1, digit_2, digit_sum;

int ReadNumber()
{
  cout << "Enter two digits to sum bitch: \n" << "Digit 1: \n";
  cin >> digit_1;
  cout << "Digit 2: \n";
  cin >> digit_2;
  digit_sum = digit_1 + digit_2;
}


void WriteAnswer()
  {  
  cout << "The sum of these digits is " << digit_sum << endl;
  }    

int main()
{
  ReadNumber();
  WriteAnswer();   

  return 0;
}
