/*A washing machine works on the principle of Fuzzy System, the weight of clothes put inside it for washing is uncertain But based on weight measured by sensors, it decides time and water level which can be changed by menus given on the machine control area.  

For low level water, the time estimate is 25 minutes, where approximately weight is between 2000 grams or any nonzero positive number below that.

For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams.

For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams.*/

#include<stdio.h>
#include<iostream>
using namespace std;

void calculateTime(int n)
{
    if(n==0)
         cout<<("Time Estimated : 0 Minutes");
    else if(n>0 && n<=2000) 
         cout<<("Time Estimated : 25 Minutes"); 
    else if(n>2000 && n<=4000) 
         cout<<("Time Estimated : 35 Minutes"); 
    else if(n>4000 && n<=7000)
       cout<<("Time Estimated : 45 Minutes");
    else if(n>7001 && n<=10000)
       cout<<("overload");
    else 
       cout<<("invalid");
}
int main()
{
    int machineWeight;
    cin>>machineWeight;
    calculateTime(machineWeight);
    return 0;
}