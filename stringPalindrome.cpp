#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    // baseCase

    if (start >= end)
    {
        return true;
        cout << "string is palindrome" <<endl;
    }

    return s[start] == s[end] && isPalindrome(s, start + 1, end - 1);
}
int main()
{

    string s = "naman";
    int start = 0;
    int end = s.length() - 1;

    cout << isPalindrome(s, start, end) << endl;
}