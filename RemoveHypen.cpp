/*
(Asked in Accenture Offcampus 1 Aug 2021, Slot 1)

Implement the following functions.a

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront

*/

#include <iostream>
#include<string>

using namespace std;

string MoveHyphen(string str){
    int count = 0;
    if(str.length() == 0)
     return NULL;
     
     for(int i=0;i<str.length();i++){
          if(str[i] == '-'){
              count++;
              str.erase(i,1);
          }
     }
      while(count--){
          str = '-'+str;
      }
       return str;
}
int main() {
    
   string s;
   cin>>s;
   cout<<MoveHyphen(s);
   return 0;
}