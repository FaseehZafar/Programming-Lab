#include <iostream>
using namespace std;

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}


void findPrimeInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int start, end;

    cout << "Enter the start and end values: ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";
    findPrimeInRange(start, end);

    return 0;
}
