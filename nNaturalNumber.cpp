#include <iostream>
using namespace std;

int GetSum(int n)
{
    if (n == 0)
    {
        return 0;  
    }
     return n + GetSum(n - 1);
}

int main()
{

    int n = 4;

    cout << GetSum(n) << endl;

    return 0;
}