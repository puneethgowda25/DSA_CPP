#include<iostream>
#include<math.h>
using namespace std;
int main (){
    /*
    //decimal to binary
    //own code
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int binary[100];
    int i=0;
    while(n>0){
         int digit=n%2;     //take remainder 
         binary[i]=digit;   //store in array
         i++;
         n >>=1;
    }
    for(int j=i;j>=0;j--)
{
    cout<<binary[j];
}
*

//second method D to B
int n;
cout<<"enter the number:"<<endl;
cin>>n;
int binary=0;
int i=0;
    while(n>0)
{
    int bit=n&1;
    binary=(bit * pow(10,i))+ binary;  //formula
    n>>=1;
    i++;
}
cout<<binary;
*/

//B to d
int n;
cout<<"enter the binary number"<<endl;
cin>>n;
int i=0;
int decim=0; 
while(n!=0){
    int temp=n%10;
 // int temp=n&1;    // this is wrong in this code
if(temp==1)
{
  decim=decim+ pow (2 , i);
}

i++;
n/=10;// note if you use n%10   then you should use n/10
}
cout<<decim;
}