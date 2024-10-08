/*
  (Asked in Accenture OnCampus 11 Aug 2022, Slot 1)

You are given a function,
int findCount(int arr[], int length, int num, int diff);

The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’.
Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

Example:
Input:

arr: 12 3 14 56 77 13
num: 13
diff: 2
Output:
3

Explanation:
Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.
*/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int differenceofSum (int n, int m){
    int n_div = 0;
    int n_ndiv = 0;
    
    
    for(int i=1;i<=m;i++){
        if(i % n == 0){
            n_div += i;
        }
         if(i % n != 0){
             n_ndiv += i;
         }
    }
      int result = abs(n_ndiv - n_div);
      return result;
}

int main() {
   int n, m;
  int result;
  cin >> n;
  cin >> m;
  result = differenceofSum (n, m);
  cout << result;
  
    return 0;
}