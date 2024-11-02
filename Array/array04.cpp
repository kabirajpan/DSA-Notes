#include <iostream>
using namespace std;



//+++++ Deletion ++++++//

int main(){
    //Deletion: At the begining

    // int n;
    // cout<< "Enter an Array size: "<< endl;
    // cin>> n;
    // int a[n];
    // cout<< "Enter Array elements: "<< endl;
    // for (int i=0; i<n; i++){
    //     cin>> a[i];
    // }
    
    // cout<< "The Array is: "<< endl;
    // for(int i=0; i<n; i++){
    //     cout<< a[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"now deleting a element at begining: "<< endl;
    // for(int i=0; i<n; i++){
    //     a[i] = a[i+1];//a[] // n=4
    //     if(i== n-1){
    //         a[i] = 0;
    //     }
    // }

    // cout<< "Array after deletion: "<< endl;
    // for(int i=0; i<n; i++){
    //     cout<< a[i]<<" ";
    // }
    // cout<<endl;




    //Deletion:- At the end;

    int n, i;
    cout<< "Enter an Array size: "<< endl;
    cin>> n;
    int a[n];
    cout<< "Enter Array elements: "<< endl;
    for (int i=0; i<n; i++){
        cin>> a[i];
    }
    
    cout<< "The Array is: "<< endl;
    for(int i=0; i<n; i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;

    n--;
    a[n] = 0; // overwriting the deleting element with 0;
    cout<< "Array after deletion: "<< endl;
    for(i=0; i<n+1; i++){//i=3    n=3
        cout<< a[i]<<" ";
    }
    cout<<endl;

 }