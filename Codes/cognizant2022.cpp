/*
Problem Statement – Chaman planned to choose a four digit lucky number for his car. His lucky numbers are 3,5 and 7. 
Help him find the number, whose sum is divisible by  3 or 5 or 7. Provide a valid car number, 
Fails to provide a valid input then display that number is not a valid car number. 

Note : The input other than 4 digit positive number[includes negative and 0] is considered as invalid.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int digit = floor (log10 (n) + 1);
    if (n <= 0 or ! (digit == 4)) cout << n << " is not a valid car number";
    else {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }

    if (sum % 3 == 0 or sum % 5 == 0 or sum % 7 == 0)
        cout << "Lucky Number";
    else
        cout << "Sorry its not my lucky number";
    }

    return 0;
}