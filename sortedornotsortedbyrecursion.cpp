#include<iostream>
#include<vector>
using namespace std;
bool checksorted(vector<int> &arr, int& n , int i ){
    //base case
    if(i==n-1){
        return true;

    }
    //1 case recursion sambhal lega
    if(arr[i+1]<arr[i])
    return false;
    //baki recursion bhal lega 
    return checksorted(arr, n,i+1);

}
int main(){
    vector<int>v{10,20,30,3,60};
    int n=v.size();
    int i=0;
    bool isSorted=checksorted(v,n,i);
    if(isSorted){
        cout<<"Array is sorted"<<endl;  
                 }
                 else{
                    cout<<"Array is not sorted"<<endl;
                 }
}
