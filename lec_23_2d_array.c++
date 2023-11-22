#include<iostream>
using namespace std;

void search(int arr[][3], int m, int n,int k){

    for(int i=0; i<m; i++ )
{
    for(int j=0; j<n; j++){
        if(arr[i][j]==k){
        cout<<i<<" "<<j<<endl;
        return;
    }
}
cout<<"digit not present in an array"<<endl;
}
}

int rsum(int arr[][3], int m, int n,int r){

int sum=0;
if(r<=m){
     int i=r;
    for(int j=0; j<n; j++){
    
        sum+=arr[i][j];
    }
return sum;
}
cout<<"invalied  row"<<endl;
return 0;
}


int main(){

    //initialize 2D array
    int m,n;
  
    // cout<<"enter the number of rows"<< endl;
    // cin>>m;
    // cout<<"enter the number of column"<<endl;
    // cin>>n;

    int arr[2][3];
  
//input an array

//taking input row wise
 cout<<"enter the digits"<<endl;
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        cin>>arr[i][j];
    }
} 

/*
//taking input column  wise
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[j][i];
    }
} 
*/

//print
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
} 

int k;
cout<<"enter the digit need to search"<<endl;

cin>>k;

search(arr,2,3,k);

cout<<rsum(arr,2,3,1)<<endl;

}


/*

// wave print

public class Solution {
    public static int[] wavePrint(int arr[][], int nRows, int mCols) {
        // Write your code here.
        int[] ans = new int[nRows * mCols]; // array to store the values of wave and return

        int idx = 0; // index for traversing the ans indexes

        // Here i represents columns & j represents Rows
        for(int i = 0; i < mCols; i++){

            if(i % 2 != 0){ // bottom to top

                for(int j = nRows - 1; j >= 0; j--){
                    ans[idx++] = arr[j][i];
                }
            }
            else { // top to bottom
                for(int j = 0; j < nRows; j++){
                    ans[idx++] = arr[j][i];
                }
            }
        }

        return ans;
    }
}
*/

/*
//spiral print

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row=matrix.size();
        int col=matrix[0].size();

        int srow=0;
        int erow=row-1;
        int scol=0;
        int ecol=col-1;

        int count=0;
        int total=row*col;

        vector <int>ans;

        while(count < total){
            
            for(int i=scol; count < total && i <= ecol; i++){

                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;

            for(int i=srow; count < total && i <= erow; i++){

                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;

            for(int i=ecol; count < total && i >=scol; i--){

                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;

            for(int i=erow;count < total && i >= srow; i--){

                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;

        }
        return ans;
    }
};

*/
