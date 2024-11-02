#include <iostream>
using namespace std;


int n, temp, x;
int a[10];

binarySearch(int low, int high){
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid] == x){
            return mid;
        } else if(a[mid]>x){
            high = mid-1;
        } else {
            low = mid-1;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter Array size: ";
    cin>>n;
    cout<<"Enter Array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //Converting array in ascending order// {1, 9, 4, 0}

    for(int i=0; i<n; i++){ //{1, 0, 4, 9} i=3
        for(int j=i+1; j<n; j++){ // j=2 <= i=2
            if(a[i] > a[j]){  //[4] > [9] = [4]>[0]
                temp = a[i]; // temp= 4
                a[i] = a[j]; // [0] =[0]
                a[j] = temp; // [4] =[4]
            }
        }
    }

    cout<<"Array after ascending order: "<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //step 2


    //Binary Searching: 

    cout<<"Enter search number"<<endl;
    cin>>x;
    
    int result = binarySearch(0,n-1); //Here we called binary search function
    if(result == -1){
        cout<<"Element not found in array"<<endl;
    } else {
        cout<< "Element founded: "<< result<< endl;
    }
    return 0;
}