#include<iostream>
using namespace std;



void insertion_sort(int a[], int size){
    for(int i=1; i<size; i++){
        int temp=a[i];

        int j=i-1;

        for( ; j>=0 ; j--){

            if(a[j] > temp){
                
                a[j+1]=a[j];
            }
            else{
                break;
            }

        }
        a[j+1]=temp;
       
     }
     for(int i=0;i<size;i++){
 cout<<a[i]<<" ";
     }    
}

int main(){
    int a[5]={22,5,222,6,1};
    insertion_sort(a, 5);
}