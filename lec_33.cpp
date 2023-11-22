#include<iostream>
using namespace std;

bool binary(int *arr, int n){

    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){

        return false;
    }else{
        bool ans=binary(arr+1, n-1);
         return ans;
    }

   
}

int sum(int *arr, int n){

    int s=0;

    if(n==0){
        return 0;
    }
    if(n==1){
       return arr[0];
    }

    int ans =sum(arr+1,n-1);
     s=arr[0]+ans;

     return s;

}
int linearsearch( int arr[], int n, int k){
    if(n==0){

        return false;
    }
    if(arr[0]==k){
        return 1;
    }
        else{
        bool remainnig=linearsearch(arr+1, n-1, k);
        return remainnig;
    }

}

bool binarysearch(int arr[], int s,int e, int k){
    // base case
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
   

    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
     return binarysearch(arr,s,mid-1,k);
    }
    
    }

int main(){

    int arr[5]={1,2,3,4,5};
    int arr1[5]={1,2,8,4,5};

    cout<<binary(arr,5)<<endl;
    cout<<binary(arr1,5)<<endl;

    cout<<sum(arr,5)<<endl;

    cout<<linearsearch(arr,5,5)<<endl;


   cout<<binarysearch(arr, 0, 5, 6)<<endl;

}