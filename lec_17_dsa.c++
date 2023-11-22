#include<iostream>
using namespace std;



void bubble_sort(int a[], int size){
    for(int i=0; i<size; i++){

        for(int j=0; j<size; j++){

            if(a[j] > a[j+1]){
                
                swap(a[j], a[j+1]);
            }

        }
       
     }
     for(int i=0;i<size;i++){
 cout<<a[i]<<" ";
     }    
}

int main(){
    int a[5]={22,5,222,6,1};
    bubble_sort(a, 5);
}