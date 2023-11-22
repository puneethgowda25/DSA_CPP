#include<iostream>
using namespace std;

int main(){

int arr[10];

int *p=arr;   //   varible of an array stores the address of 1st element of an array


int *q=&arr[0];

cout<< " begining address of an array arr is : "<<p<<endl;

cout<< " begining address of an array arr is : "<<q<<endl;

cout<< " begining address of an array arr is : "<<&arr[0]<<endl;

cout<< " value at address of an begginng array arr is : "<<*arr<<endl;

cout<< " value at address of an begginng array arr is : "<<*p<<endl;


}