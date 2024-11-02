


## Method 01 
int marks [5] = {2,4,5,6,7};



## Method 02 
int marks [] = {1,2,3,5,5,6};



##  Method 03 
int n;
cout <<"Enter size of array: "<<endl;
cin >> n ;
int a [n];
cout << "Enter values of an array: "<< endl;
for(int i = 0; i < n-1; i++){
    cin >> a [i];
}


## Method 04 
marks[0] = 15;
marks[1] = 12;
marks[2] = 33;
marks[3] = 2
marks[4] = 4;

# Operatin in Array #

01. Traversal
02. Insertion
03. Deletion
04. Searching
05. Sorting



# Traversal
int main() {
    int a [4] = {3,4,6,2};

    for(int i=0; i<=4; i++){
        cout << a[i] << endl;
    }
}



# Insertion:- at the begining
int main() {
    int n;
    cout <<"Enter the size of array: " << endl;
    cin >> n;
    int a [n];
    cout <<"Enter array elements: " << endl;
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    
    cout << "the Array is: "<< endl;
    for(int i=0; i<n; i++){
        cout<< a[i]<< endl;
    }

    int x;
    cout<< "Enter the element at the begining: "<< endl;
    cin>>x;
    for(int i=n; i>0; i--){//if array size is 4 then i=4, 
        a[i]=a[i-1]; //a[4] = a[4-1] = a[3]
        cout<<a[i]<< endl;
    }

    a[0] = x;
    n++;
    cout << "the Array is after inserting a new element: "<< endl;
    for(int i=0; i<n; i++){
        cout<< a[i]<< endl;
    }
}


# Insertion:- at specific

int main(){
    int n;
    cout<<"Enter size of an Array: "<< endl;
    cin>> n;
    int array[n];
    cout<<"Enter elements in Array: "<< endl;
    for(int i=0; i<n; i++){
        cin >>array[i];
    }

    cout<<"the Array is: "<< endl;
    for (int i=0; i<n; i++){
        cout<<array[i] <<" ";
    }
    cout<<endl
    int pos, x;
    cout<<"Enter Array index: "<< endl;
    cin>>pos;
    cout<<"Enter new element: "<< endl;
    cin>>x;
    for (int i=n; i>pos; i--){
        array[n] = array[i-1];
    }
    array[pos] = x;
    n++;
    cout<<"the Array is: "<< endl;
    for (int i=0; i<n; i++){
        cout<<array[i] <<" ";
    }
}




# Insertion:- At ending

int main(){

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




# Deletion

# Deletion:- At the begining

```cpp
    <!-- // int n; -->
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

    cout<<"now deleting a element at begining: "<< endl;
    for(int i=0; i<n; i++){
        a[i] = a[i+1];//a[] // n=4
        if(i== n-1){
            a[i] = 0;
        }
    }

    cout<< "Array after deletion: "<< endl;
    for(int i=0; i<n; i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
```



# Deletion:- At the ending
```cpp
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
```





## Searching

# Searching:- Linear Search

```cpp
    // Step-1: Taking array element
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


    // Step 2: Linear Searching
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
```





# Searching:- Binary Search

```cpp
int n, temp, x;
int a[10];
//Binary search function & Logic//
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
    // Step-1: Taking Array values
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


    // Step-2: Converting array in ascending order
    for(int i=0; i<n; i++){ 
        for(int j=i+1; j<n; j++){ 
            if(a[i] > a[j]){  
                temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
            }
        }
    }
    cout<<"Array after ascending order: "<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



    // Step-3: Binary Searching
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

```

# Sorting
```cpp

```