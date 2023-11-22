#include<iostream>
using namespace std;

// problem 1
//swapa alternate in array


void print(int a[], int b){

    for(int i=0;i<b;i++){
    cout<<a[i]<<" ";
}
}

void swapalternate(int a[], int b){
   

    for(int i=0;i<b;i+=2){

       if(i+1<b){          // condition for odd no arrays

        swap(a[i],a[i+1]); // note it is i+1 not i++
   }
    }

}

// int main(){
//     int size;
//     cout<<"enter the size of an array: ";
//     cin >> size;
// int a[100];
// cout<<"enter the elements of an array: ";
// for(int i=0;i<size;i++){
//     cin>>a[i];
// }

// swapalternate(a, size);

// print(a, size);


// }

// find uniq
int finduniq(int a[], int b){
    int ans=0;
    
    for(int i=0;i<b;i++){
        ans=ans^a[i];
    }
    return ans;
}
// my approch for finding duplicate
void findduplicate(int a[],int b){
    for(int i=0;i<b-1;i++){
        for(int j=i+1;j<b;j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
            }
        }

    }
}

// code help approch for finding dupli //holds good for specific conditions
int finddupli(int a[], int b){
    int ans=0;
    for(int i=0;i<b;i++){   //xoring
      ans=ans^a[i];
    }
    for(int i=1;i<b;i++){   //xoring
        ans=ans^i;
    }
    return ans;
}


// swaping 0 and 1  in accending order

void swap01(int a[], int b){
    int s=0;
    int e=b-1;
    while(s<e){
        if(a[s]>a[e]){
            
            swap(a[s], a[e]);
        
        }
         s++;
            e--;
        }
    
    }


int main(){
    int size;
    cout<<"enter the size of an array: ";
    cin >> size;
int a[100];
cout<<"enter the elements of an array: ";
for(int i=0;i<size;i++){
    cin>>a[i];
}

cout<<finduniq(a, size)<<endl;

findduplicate(a, size);

cout<<endl;

//cout<<finddupli(a, size)<<endl;   // holds good for specific conditions

//swap 01
swap01(a, size);
print(a, size);

}
