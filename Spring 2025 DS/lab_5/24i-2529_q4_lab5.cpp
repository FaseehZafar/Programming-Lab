#include <iostream>
using namespace std;

int fibonacciPosition(int num)
{
    if (num == 0)
    {
        return 0;  
    }
    else if (num == 1)
    {
        return 1;  
    }

    int back1 = 1, back2 = 0, current;
   
    for (int i = 2; i <= num; i++) {
        current = back1 + back2;  
        back2 = back1;
        back1 = current;
    }

    return current;
}

int main()
{
    int num;

    cout << "Enter the position: ";
    cin >> num;

    int result = fibonacciPosition(num);
    cout << "The Fibonacci number at position " << num << " is: " << result << endl;

    return 0;
}
