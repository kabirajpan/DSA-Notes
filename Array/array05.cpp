#include <iostream>
using namespace std;

int main(){

    //++++ Linear Search ++++//
    int n, x, i;
    cout<<"Enter size of an array: ";
    cin >> n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Array is: "<< endl;
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<< "Enter a number to search in Array: ";
    cin>>x;

    for(i=0; i<5; i++){
        if(x==a[i]){
            cout<<"Element founded: "<<a[i]<<endl;
            cout<<"The index is: "<< i << endl;
            break;
        }
    }
    if(i== n+1){
        cout<<"Element not found in Array: ";
    }
    return 0;
}