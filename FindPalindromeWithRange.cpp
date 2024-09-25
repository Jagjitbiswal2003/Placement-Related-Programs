/*
Question: Write a program such that it takes a lower limit and upper limit as inputs and print all the intermediate palindrome numbers.

Test Cases:

TestCase 1:
Input :
10 , 80
Expected Result:
11 , 22 , 33 , 44 , 55 , 66 , 77.

Test Case 2:
Input:
100,200
Expected Result:
101 , 111 , 121 , 131 , 141 , 151 , 161 , 171 , 181 , 191.

*/

#include <iostream>
using namespace std;

bool palindrome(int num)
{
    int temp = num;
    int rev = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (num == rev)
        return true;
    else
        return false;
}

void findpalindrome(int r1, int r2)
{
    if (r1 > r2)
      swap(r1, r2);

    for (int i = r1; i <= r2; i++)
    {
        bool ispalindrome = palindrome(i);
        if (ispalindrome)
            cout << i << " ";
    }
}

/*
int reverse (int a)
{
  int n = 0, d = 0, rev = 0;
  n = a;
  while (n != 0)
    {
      d = n % 10;
      rev = rev * 10 + d;
      n = n / 10;
    }
    return rev;
*/

int main()
{
    int r1, r2;
    cin >> r1 >> r2;
    findpalindrome(r1, r2);

    // or method
    /*
     int i, f, l;
  cout << "enter the starting \n", f;
  cin >> f;
  cout << "enter the ending\n", l;
  cin >> l;
  for (i = f; i <= l; i++)
    {
      if (i == reverse (i))
    cout << i << " ";
    }
  return 0;
}
    */

    return 0;
}