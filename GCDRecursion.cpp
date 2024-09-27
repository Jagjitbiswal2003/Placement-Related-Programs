// GCD or HCF (for both code is same) Of Two Number using recursion

#include <iostream>


using namespace std;

int findGcd(int a, int b)
{
   /*
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return findGcd(a - b, b);
    else
        return findGcd(a, b - a);

    //or efficient way
    */
    
    if (b == 0)
        return a;
    return findGcd(b, a % b);
    
    
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << findGcd(a, b) << endl;
    return 0;
}