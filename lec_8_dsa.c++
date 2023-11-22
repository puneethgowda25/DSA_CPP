#include<iostream>
#include<math.h>
using namespace std;
    /*
int main(){


    //mini calculator using swithch case
    int a , b;
    cout<<"enter 1st number"<<endl;
    cin>>a;

    cout<<"enter the 2nd number"<<endl;
    cin>>b;

    char op;
    cout<<"enter the to perform"<<endl;
    cin>>op;

    switch(op){
        
        case '+' : cout<<  (a+b)<<endl;
                  break;

        
        case '-' : cout<<  (a-b)<<endl;
                  break;

        case '*' : cout<<  (a*b)<<endl;
                  break;

        case '/' : cout<<  (a/b)<<endl;
                  break;

        default : cout<<endl<<" enter invalid oparend"<< endl;

   }
   *

//number notes used using switch case
  int amount;
  cout<<"enter the amount"<<endl;
  cin>>amount;

  int _100 =0,_50=0,_20=0,_1=0;
  switch(1){
    case 1:_100=amount/100;
           amount%=100;
           cout<<_100<<" = numbers of RS 100 notes are used"<<endl;

    case 2:_50=amount/50;
           amount%=50;
           cout<<_50<<" = numbers of RS 50 notes are used"<<endl;

    case 3:_20=amount/20;
           amount%=20;
           cout<<20<<" = numbers of RS 20 notes are used"<<endl;

    case 4:_1=amount/1;
           cout<<_1<<" = numbers of RS 1 notes are used"<<endl; 
           break;   

    default :cout<<" invalid amount"<<endl;                       

     }
     }

*/
///functionsss

// function to tell the given is even or odd
/*

bool evodd(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n&1){ 
       return 1;
    }

        return 0;
    }

int evod(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n%2==0)
    {
     cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
  return 0;
}    

int main(){
int ch;
cout<<"program to find the given number is even or odd"<< endl <<endl<< " enter '1' for bool method or enter '2' for int method"<<endl;
cin>>ch;
switch(ch){
    case 1://int temp=evodd();
           if(evodd()==0){
            cout<<"even"<<endl;
           }
           else{
            cout<<"odd"<<endl;
           }
           break;

    case 2:evod();
           break;

    default: cout<<"invalid input" <<endl;             
}

}*/
/*
//math table function
void table()
{
    int n;
    cout<<" which table u need:"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
    }
}
int main(){
    table();
}
// out put
// which table u need:
// 36
// 36 * 1 = 36
// 36 * 2 = 72
// 36 * 3 = 108
// 36 * 4 = 144
// 36 * 5 = 180
// 36 * 6 = 216
// 36 * 7 = 252
// 36 * 8 = 288
// 36 * 9 = 324
// 36 * 10 = 360
*/

/*
//prime number

// void primeno(){
//     int num;
//     cout<<"enter the number:";
//     cin>>num;
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             cout<<endl<<"not a prime"<<endl;
//         }
//         else{
//             cout<<"prime"<<endl;
//         }
//     }
// }
bool prime(){
    int num;
    cout<<"enter the number:";
     cin>>num;
     for(int i=2;i<num;i++){
     if(num%i==0){
           return 0;
        }
       else{
        return 1;
          } 
    }
}
int main(){
if(prime()){
    cout<<"prime"<<endl;
}
else{
    cout<<"non prime"<<endl;
}
}*/


///home work problem

// 1
/*
void ap(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<(3*n+7)<<endl;// formula given
}
int main(){
    ap();
}
*/
//2 number of set bit in a and b

//both functions holds good 
/*

int sbit(int a){
    int sol = 0;

    while (a > 0) {
        int bit = a & 1;
        sol += bit;
        a >>= 1;
    }

    return sol;
}
//own function
int setbit(int a){
    int i=0;
    int ans=0;
    while(a>0){
        int bit=a&1;
        if(bit==1){
            ans=(bit*pow(2,i))+ans;
        }
            a>>=1;
            i++;
    }
    int sol=0;
    while(ans!=0){
        int bit=ans&1;
        if(bit==1){
            sol++;
        }
        ans>>=1;
    }
    return sol;

}
int main(){
    int a,b; 
    cout<<"enter the numbers:";
    cin>>a >> b ;
     int p=sbit(a);
     int q=setbit(b);
     cout<<p+q;

}

*/
//3 fibo