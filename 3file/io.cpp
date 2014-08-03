int ReadNumber()
{
  int digit_1, digit_2, digit_sum;
  using namespace std;
  std::cout << "Enter two digits to sum bitch: \n" << "Digit 1: \n";
  std::cin >> digit_1;
  std::cout << "Digit 2: \n";
  std::cin >> digit_2;
  digit_sum = digit_1 + digit_2;
  return(digit_sum);
}


int WriteAnswer()
  {  
    int digit_sum;
  using namespace std;
  std:cout << "The sum of these digits is " << digit_sum << endl;
  return(0);
  }    


