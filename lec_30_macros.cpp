#include<iostream>
using namespace std;

//macros
#define pi 3.14

//global variabal
int score=397;

//inline <<   should be less than 3 lines>>   
//inlin works has macros
inline int getmax(int& a, int& b){
    return (a>b) ? a :b;

}

void a(int& r){

    double area=pi*r*r;

    cout<<"area is "<<area<<endl;

    cout<<"score is "<<score<<endl;

}




int main(){
  

    cout<<"main function"<<endl;

    int r=2;

    double area=pi*r*r;

    cout<<"area is "<<area<<endl;

    cout<<"score is "<<score<<endl;

     cout<<" function"<<endl;

    a(r);
    int a=4,b=7;

    cout<<"max is "<<getmax(a,b)<<endl;



}
