/*
(Asked in Accenture OnCampus 11 Aug 2022, Slot 3)

You are required to implement the following Function 

def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output

8

*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int LargeSmallSum (vector<int>&arr){
    
    vector<int>great;
    vector<int>small;
    
    int n = arr.size();
    
    
    if (n <= 3)
    {
      return 0;
    }
    
    for(int i=0;i<n;i++){
         if(i%2 == 0)
          great.push_back(arr[i]);
         if(i%2 != 0)
         small.push_back(arr[i]);
    }
     // Sort the even position array in descending order
      sort(great.rbegin(),great.rend());
     // Sort the odd position array in ascending order
      sort(small.begin(),small.end());
      
      int l = great.size();
      int s = small.size();
      
      if (l <= 1 && s <=1)
        return 0;
      
      int result = great[1] + small[1];
      return result;
    }
      

int main() {
   vector < int >arr = { 1, 8, 0, 2, 3, 5, 6 };

  int result = LargeSmallSum (arr);
  cout << result << endl;

  
    return 0;
}