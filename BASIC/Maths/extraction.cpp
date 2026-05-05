#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void extractionOfNums(int n)
{
    while (n != 0)
    {
        cout << n % 10 << " ";
        n = n / 10;
    }
}

int count_nums(int b)
{
    /* int cnt = 0;
    while (b != 0)
    {
        cnt++;
        b = b / 10;
    }
    return cnt; */

    // another approach

    int cnt = (int)(log10(b) + 1);
    return cnt;
}

int reverse_a_number(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        rev = (rev * 10) + last_digit;
        n = n / 10;
    }
    return rev; //
}

bool palindrome_check(int n)
{
    int rev = reverse_a_number(n);
    cout << boolalpha;
    if (rev == n)
        return true;
    return false;
}

int armstrong_number(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int last_digit = n % 10;
        sum += (last_digit * last_digit * last_digit);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    // extractionOfNums(n);
    // cout << "size of num: " << count_nums(n);
    // cout << "Reverse of an number: " << reverse_a_number(n);
    // cout << "given number is palindrome? " << palindrome_check(n);
    cout << "armstrong of given number: " << armstrong_number(n);

    return 0;
}