#include<iostream>
using namespace std;
void print(int a[],int s){
           for(int i=0;i<s;i++){
            cout<<a[i]<<" ";
           }
}

int getmax(int a[], int b) {
    int max = a[0];  // Initialize max with the first element of the array
    for (int i = 1; i < b; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int getmin(int a[], int b) {
    int min = a[0];  // Initialize min with the first element of the array
    for (int i = 1; i < b; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
int sum(int a[], int b){
    int ans=a[0];
    for(int i=1;i<b;i++){
        ans+=a[i];
    }
    return ans;
}
// linear search

bool search(int arr[], int size, int key) {

for(int i = 0; i<size; i++ ) {

if( arr[i] == key) { 
    return 1;

}

return 0;

}
}
// swap an array
void swap(int a[], int b){
    int s=0;
    int e=b-1;
     
     while(s<e){
        swap(a[s], a[e]);
        s++;
        e--;
     }
}

int main() {
    int a[5] = {5, 68, 52, 2, 4};
    
    print(a, 5);

    cout << "Minimum: " << getmin(a, 5) << endl;
    cout << "Maximum: " << getmax(a, 5) << endl;

    cout<< "Sum: " <<sum(a, 5) << endl;

// linear search
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    bool ans=search(a, 5, key);

    if( ans==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    swap(a, 5);
     
     print(a, 5);

    return 0;
}
