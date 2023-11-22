#include<iostream>
using namespace std;

int binarysearch(int a[], int size, int key){
     int lb=0;
     int ub=size-1;

     while(lb<=ub){
       // int mid=(lb+ub)/2;
       int mid=lb+((ub-lb)/2);
        
        if(a[mid]==key){
             return mid;
        }
        else if(key < a[mid]){
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
     }
     return -1;
}

int main(){
    int a[5]={12,22,23,25,50};

    int key;
    cout<<"enter key element:"<<endl;
    cin>>key;

    int index=binarysearch(a, 5, key);
    
    cout<<"index of elenmt "<<key<<" is "<<index<<endl;


}