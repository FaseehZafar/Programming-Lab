#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original_Num = n;
    int sum = 0;
    int nDigits = 0;
   
    int temp = n;
    while (temp > 0)
    {
        nDigits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
     
        int power = 1;
        for (int i = 0; i < nDigits; i++)
        {
            power *= digit;
        }
       
        sum += power;
        temp /= 10;
    }
   
 
    return sum == original_Num;
}

int main()
{
    int n;
   
    cout << "Enter a number: ";
    cin >> n;
   
    if (isArmstrong(n))
    {
        cout << n << " it is an Armstrong number." << endl;
    } else
    {
        cout << n << " it is not an Armstrong number." << endl;
    }
   
    return 0;
}