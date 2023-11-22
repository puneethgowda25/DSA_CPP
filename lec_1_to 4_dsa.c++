#include<iostream>
using namespace std;

int main(){
  

cout<< "jai shree ram"<<endl <<endl;

/*

//basic code
int a =123;
cout<< a <<endl;
char b = 'p';
cout<< b <<endl;
float f=0.1;
double d=0.221;
cout<<f <<endl <<d <<endl;
int size=sizeof(d);
cout<<"size is :" << size <<endl;

//
int a ,b;

cout<<"enter the value of A" <<endl;
a=25 ;
if(a>20){
    cout<<"love" << endl;
}
else if(a==25){
    cout<<"lovely" << endl ;
}
else{
    cout<<" Babara" << endl;
}

//check the value is uppercase or lower case or numeric
cout<<"enter the charecter"<<endl;
char ch;
cin>>ch;
int ascii=ch;
if(ascii>=65 &&ascii<=90){
    cout<<"the char is UPPERCASE"<< endl;
}
else if(ascii>=97 && ascii<=122){
 cout<<"ther char is lower case"<<endl;
}
else if(ascii>=48 && ascii<=57){
    cout<<"the cchar is numeric"<<endl;
}
else
{
    cout<<"something else"<< endl;
}

// while loop 

int n,i=0;
cout <<"enter the number"<< endl;
cin>> n;

while(i<=n){
    
    cout<<" "<< i <<endl ;
    i++;
    }
//sum of all even nmumbers using while loop

int n,sum=0,i=1;
cout<<"enter the number"<<endl;
cin>>n;
while(i<=n){
    if(i%2==0){
    sum=sum+i;
    }
    i++;
}
cout<< endl<<"the sum is: "<<sum <<endl;
*

// find the given number is prime number or not
while(true){
int n,i=1,j=0;

cout<<endl<<"enter the nuber"<<endl;
cin>>n;
if(n==0){
    cout<<"0 is niether prime  nor a composite number"<<end;
}
 while(i<=n){
    if(n%i==0){
        j++;
    }
    i++;
 }
  if(j<=2){
    cout<<n<<" is prime number"<<endl;
  }
  else{
    cout<<n<< " is not a prime number"<<endl;
  }
}*

//patter using while loop

//square pattern of " * "
int n;
cout<<"enter the input"<<endl;
cin>>n;
int i=1;
while(i<=n){
 int j=1;
while(j<=n){
    cout<<" *";
    j++;
}
cout<<endl;
i++;
}
*  


//pattern
int n;
cout<<"enter the input"<<endl;
cin>>n;
int i=1;
while(i<=n){
 int j=1;

while(j<=n){
    cout<<j<<" ";
    j++;
}
cout<<endl;
i++;
}

*
//own code for 
//5 5 5 5 5
//4 4 4 4 4
//3 3 3 3 3
//2 2 2 2 2
//1 1 1 1 1
int n ;
cout<<"enter the input";
cin>> n;
int temp=n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<temp<<" ";  temp--;
        j++;
    }
    temp=n;
    cout<<endl;
  
    i++;
}*
//own code for
//4 4 4 4
//3 3 3 3
//2 2 2 2
//1 1 1 1

int n ;
cout<<"enter the input";
cin>> n;
int temp=n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<temp<<" ";
        j++;
    }
    cout<<endl;
    temp--;
    i++;
}
*
//pattern in increase number
int n;
cout<<"enter the number"<<endl;
cin>> n;
int i=1;
int temp=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<temp<<" ";
        j++;
        temp++;
    }
    cout<<endl;
    i++;
}
*

//tringle pattern
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
int n;
cout<<"enter the number"<<endl;
cin>> n;
int i=1;
int temp=1;
while(i<=n){
    int j=1;
    while(j<=i){  //important
        cout<<temp<<" ";
        j++;
    }
        temp++;
    cout<<endl;
    i++;
}
*
//1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
int n;
cout<<"enter the number"<<endl;
cin>> n;
int i=1;
int temp;
while(i<=n){
    int j=1;
    temp=i;
    while(j<=i){  //important
        cout<<temp<<" ";
        j++;
    temp--;
    }
    cout<<endl;
    i++;
}
*
// own code
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
int n;
cout<<"enter the number"<<endl;
cin>> n;
int i=1;
char ch='A';
int ascci=ch;
while(i<=n){
    int j=1;
    ch=ascci;
    while(j<=n){  //important
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    i++;
    ascci++;
}
*
//own code for
// A B C D
// B C D E
// C D E F
// D E F G

int n;
cout<<"enter the number"<<endl;
cin>> n;
int i=1;
char ch='A';
int ascci=ch;
int temp=ch;
while(i<=n){
    int j=1;
   
    while(j<=n){  //important
     ch=ascci;
        cout<<ch<<" ";
        j++;
        ascci++;
    }
    cout<<endl;
    i++;
    temp++;
    ascci=temp;
}
*
//tringle 
// enter the input3
// A
// B B
// C C C

int n;
cout<<"enter the input";
cin>>n;
int i=1;
char ch='A';
int ascci=ch;
while(i<=n){
    int j=1;
    ch=ascci;
    while(j<=i){
        cout<<ch <<" ";
        j++;
    }
    cout<<endl;
    i++;
    ascci++;
}
*
//enter the input 4
// D
// C D
// B C D
// A B C D
int n;
cout<<"enter the input ";
cin>>n;
int i=1;
char ch='A';
int ascci=ch+n-1;
int temp=ascci;
while(i<=n){
    int j=1;
    ch=ascci;
    while(j<=i){
        cout<<ch <<" ";
        j++;
        ascci++;
        ch=ascci;
    }
    cout<<endl;
    i++;
    temp--;
    ascci=temp;
}
*
//
// enter the number :5
// _ _ _ _ *
// _ _ _ * *
// _ _ * * *
// _ * * * *
// * * * * *
int n;
cout<<"enter the number :";
cin>>n;
int i=1;
while(i<=n){
    int space=n-i;
    while(space){
        cout<<"_ ";
        space--;
    }
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i++;
    
}
*
// own code
// enter the number: 5
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

int n;
cout<<"enter the number: ";
cin>>n;
int i=1;
int temp=n;
while(i<=n){
    int j=1;
    while(j<=temp){
        cout<<" *";
        j++;
    }
    cout<<endl;
    i++;
    temp--;

}
*
// enter the number: 5
//  * * * * *
// _  * * * *
// _ _  * * *
// _ _ _  * *
// _ _ _ _  *

int n;
cout<<"enter the number: ";
cin>>n;
int i=1;
int temp=n;
while(i<=n){
    int j=1;
    int space=n-temp;
    while(space){
        cout<<"_ ";
        space--;
    }
    while(j<=temp){
        cout<<" *";
        j++;
    }
    cout<<endl;
    i++;
    temp--;

}*
//piramid
enter the number 5
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
int n;
cout<<"enter the number ";
cin>>n;
int i=1;
while(i<=n){
    int space=n-i;
//print space
    while(space){
        cout<<"  ";
        space--;
    }
  //print 1st triangle

    int j=1;
    while(j<=i){
        cout<<j<<" ";
        j++;
    }
    //print 2nd triangle
    int temp=i-1;
    while(temp){
        cout<<temp<<" ";
        temp--;
    }

    cout<<endl;
    i++;
}
*/

//  own code
// enter the number
// 5
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
int n;
cout<<"enter the number"<<endl;
cin>>n;
int i=1;
int temp=n;
int temp2=n;
    int k=0;
    int k1=2;

while(i<=n){
    //for 1st triangle
    int j=1;
    while(j<=temp){
      cout<<j<<"   ";
      j++;

    }
    //for middle star triangle
    while(k>0){
        cout<<"*   ";
        k--;
    }
    k=i*2;
   //for last triangle
      while(temp2>0){
        cout<<temp2<<"   ";
        temp2--;
      }
    temp--;
    temp2=temp;
    cout<<endl;
    i++;
}
}