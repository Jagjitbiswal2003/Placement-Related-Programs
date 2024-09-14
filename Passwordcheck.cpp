/*
  (Asked in Accenture OnCampus 10 Aug 2022, Slot 3)

You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
Assumption:
Input string will not be empty.

Example:

Input 1:
aA1_67
Input 2:
a987 abC012

Output 1:
1
Output 2:
0
*/
#include<bits/stdc++.h>
using namespace std;
int CheckPassword(char str[], int n)
{
     
     int c_num=0;
     int c_let=0;
     //Atleast string contain 4 char
     if(n < 4)
      return 0;
     //Starting character must not be a number
     if(str[0]-'0'>=0 && str[0]-'0'<=9)
      return 0;
      
      for(int i=0;i<n;i++){
          //Must not have space or slash (/)
          if(str[i] == ' ' || str[i] == '/')
            return 0;
          //At least one numeric digit
          if(str[i]-'0' >=0 && str[i]-'0'<=9)
             c_num++;
          //At Least one Capital Letter
          if(str[i]>=65 && str[i]<=90)
             c_let++;
      }
         if(c_num >0 && c_let > 0)
             return 1;
      
}
int main() {
     string s;
  getline (cin, s);
  int len = s.size ();
  char *c = &s[0];
  cout << CheckPassword (c, len);

    return 0;
}