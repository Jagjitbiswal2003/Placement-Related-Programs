/*
  (Asked in Accenture OnCampus 12 Aug 2022, Slot 1)

Implement the following Function

def ProductSmallestPair(sum, arr)

The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

NOTE

Return -1 if array is empty or if n<2
Return 0, if no such pairs found
All computed values lie within integer range
Example

Input

sum:9

size of Arr = 7

Arr:5 2 4 3 9 7 1

Output

2

Explanation

Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2

Sample Input

sum:4

size of Arr = 6

Arr:9 8 3 -7 3 9

Sample Output

-21

*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int productSmallestPair (int *arr, int n, int sum){
       
      int f_small = INT_MAX;
      int l_small = INT_MAX;
      
       if (n < 2)
    {
      return -1;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] <= f_small){
            l_small = f_small;
            f_small = arr[i];
        }
    }
      int addition = f_small + l_small;
        if(addition < sum)
          return f_small*l_small;
         else
         return 0;
    
 
    }
      

int main() {
 
    int n,sum;
    cin>>n;
    cin>>sum;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int result = productSmallestPair(arr,n,sum);
     cout<<result<<" ";
     delete []arr;
  
    return 0;
}