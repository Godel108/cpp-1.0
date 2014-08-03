#include <iostream>

int main()
{
   using namespace std;
   cout << "Enter two digits \n" << "Digit 1: \n";
   double digit_1;
   cin >> digit_1;
   cout << "Digit 2: \n";
   double digit_2;
   cin >> digit_2;
   cout << "Enter an operator (Choose from +,-,*, or /: \n";
   char operand;
   cin >> operand;

    if (operand == '+')
    cout << "The sum of " << digit_1 << " and " << digit_2 << " is " << digit_1 + digit_2 << ".\n";
    if (operand == '-') 
    cout << "The division of " << digit_1 << " and " << digit_2 << " is " << digit_1 - digit_2 << ".\n";
    if (operand == '*')
     cout << "The product of " << digit_1 << " and " << digit_2 << " is " << digit_1 * digit_2 << ".\n"; 
    if (operand == '/')
    cout << "The quotient of " << digit_1 << " and " << digit_2 << " is " << digit_1 / digit_2 << ".\n";
    
  return (0);
}
  
