#include<iostream>
using namespace std;

int main()
{
      
      /**/
int num=10;

int *p=&num;   // || int *p=0;   p=&num;

cout<<"address of num "<<p<<endl;

cout<<"value at address "<<*p<<endl;

cout<<"num : "<<num<<endl;

(*p)++;

/// after changes

cout<<"after changes"<<endl;

cout<<"value at address "<<*p<<endl;

cout<<"num : "<<num<<endl;

int **q=&p;   //pointer storing adress of pointer

cout<<q<<endl;

cout<<"1  "<<p<<endl;

cout<<*q<<endl;

cout<<**q<<endl;



} 
