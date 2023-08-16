# Array is sorted or not

```cpp
int sortArr(int arr[], int n){
    bool sort = true;
    for(int i =1 ; i< n; i++){
        if(arr[i] < arr[i -1]) sort = false
    }

}

```
