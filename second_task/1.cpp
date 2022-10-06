#include <iostream>
#include <cmath>
using namespace std;

bool is_palindrome(int n)
{
 
    int r,sum=0,temp;       
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum) return 1;    
    return 0;   
}
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= sqrt(n)+1; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{
    int arr[100000];
    int count = 0;
    for (int i = 10000; i < 100000; i++)
    {
        if (isPrime(i))
        {
            arr[count] = i;
            count ++;
        }
    }
    int max_number = 0; 
    int number = 0;
    int a = 0;
    int b =0;
    for (int i = count-1; i >= 0; i--)
    {
        for (int j = i-1; j >= 0; j--)
        {
            number = arr[i]*arr[j];

            if (number < max_number) break;
            if (is_palindrome(number)) 
            {
                max_number = number;
                cout << number << endl;
                a = arr[i];
                b = arr[j];
            }
        }
    }
    cout << "first number " << a << endl;
    cout << "second number " << b << endl;
    cout << max_number << endl;

}