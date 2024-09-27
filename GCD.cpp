// GCD or HCF (for both code is same) Of Two Number without using recursion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int FindGCD(int a, int b){
     int result = min(a,b);
      while(result > 0){
         if(a % result == 0 && b % result == 0)
            break;

            result--;
      }
        return result;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<FindGCD(a,b)<<endl;
    return 0;
}