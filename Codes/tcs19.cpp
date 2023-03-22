#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {
       string num;
       int evencount=0,oddcount=0;
       cin>>num;
       for(int i=0;i<num.length();i++){
        if((i+1)%2==0){
            evencount += num[i];

        }else{
            oddcount +=num[i];
        }
       }
       cout<<abs(evencount-oddcount);
       return 0;
       
  }