#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {

        int low = 0;
        int high = s.size() - 1;
        string vowels = "aeiouAEIOU";

        while (low < high)
        {
            while (low < high && vowels.find(s[low]) == string::npos)
            {
                low++;
            }

            while (low < high && vowels.find(s[high]) == string::npos)
            {
                high--;
            }

            swap(s[low], s[high]);

            low++;
            high--;
        }
        return s;
    }
};

int main()
{
}