#include <iostream>
using namespace std;



//++++++ Insertion ++++++//


int main() {

    // Insertion:- At the Begining

    // int n;
    // cout <<"Enter the size of array: " << endl;
    // cin >> n;
    // int a [n];
    // cout <<"Enter array elements: " << endl;
    // for(int i=0; i<n; i++){
    //     cin>> a[i];
    // }

    // cout << "the Array is: "<< endl;
    // for(int i=0; i<n; i++){
    //     cout<< a[i]<< endl;
    // }

    // int x;
    // cout<< "Enter the element at the begining: "<< endl;
    // cin>>x;
    // for(int i=n; i>0; i--){//if array size is 4 then i=4, 
    //     a[i]=a[i-1]; //a[4] = a[4-1] = a[3]
    //     cout<<a[i]<< endl;
    // }

    // a[0] = x;
    // n++;
    // cout << "the Array is after inserting a new element: "<< endl;
    // for(int i=0; i<n; i++){
    //     cout<< a[i]<< endl;
    // }






    // Insertion:- At specific

    // int n;
    // cout<<"Enter size of an Array: "<< endl;
    // cin>> n;
    // int array[n];
    // cout<<"Enter elements in Array: "<< endl;
    // for(int i=0; i<n; i++){
    //     cin >>array[i];
    // }

    // cout<<"the Array is: "<< endl;
    // for (int i=0; i<n; i++){
    //     cout<<array[i] <<" ";
    // }
    // cout<<endl;
    

    // int pos, x;
    // cout<<"Enter Array index: "<< endl;
    // cin>>pos;
    // cout<<"Enter new element: "<< endl;
    // cin>>x;
    // for (int i=n; i>pos; i--){
    //     array[n] = array[i-1];
    // }
    // array[pos] = x;
    // n++;
    // cout<<"the Array is: "<< endl;
    // for (int i=0; i<n; i++){
    //     cout<<array[i] <<" ";
    // }




    // Insertion:- At ending

    int n, x, i;
    cout<<"Enter size of an Array: "<< endl;
    cin>> n;
    int array[n];
    cout<<"Enter elements in Array: "<< endl;
    for(int i=0; i<n; i++){
        cin >>array[i];
    }

    cout<<"the Array is: "<< endl;
    for (i=0; i<n; i++){
        cout<<array[i]<<" ";
    } cout<<endl;


    cout<<"Enter new element: "<< endl;
    cin>>x;
    array[i] = x;
    n++;
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}