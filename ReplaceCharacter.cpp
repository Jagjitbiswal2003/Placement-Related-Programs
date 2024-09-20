/*

*/


#include <iostream>
#include <string>
#include<queue>
using namespace std;

void ReplaceCharacter (char str[], int n, char ch1, char ch2){
    
   
     for (int i = 0; i < n; i++)
    {
      if (str[i] == ch1)
	{
	  str[i] = ch2;
	}
      else if (str[i] == ch2)
	{
	  str[i] = ch1;
	}
    }
           cout << str;
   
                // or
    /*
    queue<char>q;
    string myst = "";
     if(n == 0)
      return ;
      for(int i=0;i<n;i++){
          q.push(str[i]);
      }
        while(!q.empty()){
            
            char ch = q.front();
            
            if(ch == ch1)
            myst.push_back(ch2);
            else if(ch == ch2)
            myst.push_back(ch1);
            else
            myst.push_back(ch);
            
            q.pop();
        }
        
      
         cout<<myst<<" ";
          */
}
int main() {
  int n;
  cin>>n;
  char str[n];
  cin>>str;
  char b,c;
  cin>>b>>c;
  
  ReplaceCharacter(str,n,b,c);

    return 0;
}