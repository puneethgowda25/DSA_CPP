#include<iostream>
using namespace std;

//interview questions;


//finding 1st and last index of an given key in an sorted array
//using binay search

int firstindex(int a[], int size, int key){
    int s=0;
    int e=size-1;
    int ans=0;

    while(s<=e){
        int mid=s+((e-s)/2);

        if(a[mid] == key){
            ans=mid;
            e=mid-1;
        }
        else if(key < a[mid]){
               e=mid-1;
        }    
        else{
            s=mid+1;
        }
    }
    return ans;
}
int lastindex(int a[], int size, int key){
    int s=0;
    int e=size-1;
    int ans=0;

    while(s<=e){
        int mid=s+((e-s)/2);

        if(a[mid] == key){
            ans=mid;
            s=mid+1;
        }
        else if(key < a[mid]){
               e=mid-1;
        }    
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){

    int arr[5]={1,1,2,2,2};

     cout<<"the 1st index of an key element 2 is "<<firstindex(arr,5,2)<<endl;
     cout<<"the last index of an key element 2 is "<<lastindex(arr,5,2)<<endl;
}

// 582 .leet code 

// find mountain peak element
/*class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    
    // binary search
        int size=arr.size();
        int s=0;
        int e=size-1;

    while(s < e){
       int mid=s+((e-s)/2);
       

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
       }
       else {
             e = mid ;
       }
        }
        return s;

        // linear serach approch
        // int ans=0;
        // int size =arr.size();
        // for(int i=0;i<size;i++){
        //     if(arr[i]>arr[ans]){
        //         ans=i;
        //     }
        // }
        // return ans;
        
    }
};
*/

//  square root of ha given number
//using binary search

/* class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=0;
        long long int square=0;

        while(s<=e){
            long int mid=s+(e-s)/2;

            square=mid*mid;

            if(square > x)
            {
                e=mid-1;
            }
            else if(square < x)
            {
            
              s=mid+1;
            }
            else if(mid*mid == x){
                return mid;
            }
                    
          }
          return e;
        
    }
};
*/