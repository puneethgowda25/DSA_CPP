#include<iostream>
using namespace std;

int fact(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 )
        return 1;
    
        // Recursive case: n! = n * (n-1)!
        return n * fact(n - 1);
    
}
int power(int n){
   
   //base case
    if(n==0)
    return 1;

    return 2 * power(n-1);
}

void print(int n){

    //base case
    if(n==0)
    return;
     
    // print before recurssive call
    //cout<<n<<endl;
     
    print(n-1); 

    //print after recursiev call
    cout<<n<<endl;
}
int fibo(int n){

    //base case
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fibo(n-1) + fibo(n-2);
    
}

void words(int n){

    if(n<=0)
    return;
    
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int digit=n%10;
   
    words(n/10) ;

    cout<<arr[digit]<<" ";


}

int main() {
    
    
    int k=8;

   
    int ans = fact(k);
    cout << "Factorial of " << k << " is: " << ans << endl;

    int sol=power(k);
    cout<<"2 to the power k is "<<sol<<endl;

    //print(k);

    for(int i=0; i<k; i++)
    {
     cout<<fibo(i)<<" ";
    }

    cout<<endl;

    words(654);



    return 0;
}
