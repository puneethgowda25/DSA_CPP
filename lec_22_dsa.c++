#include <iostream>
using namespace std;

int getlen(char name[]){
  
  int count=0;
   
   for(int i=0; name[i]!='\0'; i++){
     count++;

   }
   return count;
}
void reverse(char name[], int n){

    int s=0;
    int e=n-1;

    while(s<=e){
        swap(name[s++], name[e--]);
       
    }

}

bool checkpalindrom(char name[], int k){
    int s=0;
    int e=k-1;
     while(s<=e){
        if(name[s++]!=name[e--]){
            return false;
        }
     }
     return true;
}
char tolower(char ch){
    
    if(ch>='a' && ch<='z'){
         
         return ch;
    }
    else{
        char temp= ch - 'A' + 'a';
        return temp;
    }

}

// code is mot working properlly
char maximun(string s)
{
    int arr[26];


    for(int i=0; i<s.length(); i++){
      char ch=s[i];
      int num=0;

        if(ch>='a' && ch<='z'){
            num=ch-'a';
        }
       else{
            num=ch-'A';
        }
        arr[num]++;
    }

int maxi=-1;
int ans=0;
    for(int i=0; i<26; i++){

        if(maxi < arr[i]){
            ans=i;
            maxi=arr[i];
        }

        
    }

    char finalans='a'+ ans;
    return finalans;
}


int main(){

char name[20];

cout<<"enter your name"<<endl;

cin>>name;

cout<<"your name is "<<name<<endl;

 reverse(name, getlen(name));

 cout<<name<<endl;

 cout<<checkpalindrom(name, getlen(name))<<endl;

 char A='A';

 cout<<tolower(A)<<endl;

 string s;

 cout<<"enter the string to get max"<<endl;

 cin>> s;

 cout<<maximun(s)<<endl;


}




