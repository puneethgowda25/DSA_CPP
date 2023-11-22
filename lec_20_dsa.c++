#include <iostream>
using namespace std;

//reverse an array
/*
int main() {
    //Write your code here
    
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the elements to an array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start=0;
    int end=n-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }


for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
*/


// merge 2 array in accending order
/*
void merge(int arr1[], int a, int arr2[], int b ){
    int i=0;
    int j=0;

    int k=a+b;
    int arr3[k];
    int p=0;
      while(i<a || j<b){

        if(arr1[i] < arr2[j]){
           
        arr3[p++]=arr1[i++];
        }

        else{
            arr3[p++]=arr2[j++];
        }
      }
      
      for(int x=0; x < k; x++){
        cout<<arr3[x]<<" ";
      }
}

int main(){

    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    
    merge(arr1, 5, arr2, 4);
    return 0;

}
*/