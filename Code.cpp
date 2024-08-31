#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string customer;
    cout<<"enter the name of the customer: ";
    getline(cin,customer);
    int unit;
    float balance;
    cout<<"enter the units: ";
    cin>>unit;
    if(unit<=100){
        balance=unit*(0.60);
    }
    else if(unit<=300){
        balance=(100*(0.60))+((unit-100)*(0.80));
    }
    else{
        balance=(100*(0.60))+(200*0.80)+((unit-300)*(0.90));
    }
    if(balance>300){
        balance=balance+50;
        balance=balance+(balance*0.15);
    }
    cout<<"the balance is: " <<balance;
    return 0;

}
