/* (Asked in Accenture OnCampus 10 Aug 2022, Slot 1)

Problem Description :
The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

Note:

Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.
Example:

Input:

r: 7
unit: 2
n: 8
arr: 2 8 3 5 7 4 1 2
Output:

4

Explanation:
Total amount of food required for all rats = r * unit

= 7 * 2 = 14.

The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.

*/


#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findfood(vector<int>&arr,int r,int unit){
     if(arr.size() == 0)
        return -1;
        
      int sum = 0;
     int ratfood = r*unit;
     for(int i=0;i<arr.size();i++){
          sum = sum + arr[i];
          if(ratfood <= sum){
              return i+1;
              break;
          }
     }
         
        if(ratfood > sum)
           return 0;
}


int main() {
  int r, unit;
    cout << "Enter the number of rats: ";
    cin >> r;
    
    cout << "Enter the food unit required per rat: ";
    cin >> unit;
    
    int n;
    cout << "Enter the number of food sources: ";
    cin >> n;
    
    vector<int> arr(n);  // Create a vector of size n
    
    cout << "Enter food available at each source: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = findfood(arr, r, unit);
    
    cout<<result<<endl;
    
    return 0;
}