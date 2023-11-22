#include<iostream>
using namespace std;



void selection_sort(int a[], int size){
    for(int i=0; i<size; i++){

        for(int j=i+1; j<size; j++){

            if(a[j] < a[i]){
                
                swap(a[j], a[i]);
            }

        }
       cout<<a[i]<<" ";
     }
}

int main(){
    int a[5]={22,5,222,6,1};
    selection_sort(a, 5);
}