# Largest element in an array

## Efficient solution

```cpp

int max = arr[0];
int maxInd;
for(int i = 1 ; i < n ;i++){
    if(arr[i] > max){
        maxInd= i;
    }
}
return maxInd;

```

# Max and second max elemenet in array

```cpp
int res = -1 ;
int largest =0 ;
for(int i = 1; i < n ;i++){
    if(arr[i] > arr[largest]){
        res = largest;
        largest = i;
    }
    else if( arr[i] != arr[largest]){
        if(res == -1 || arr[i] > arr[res]){
            res = i;
        }
    }
}


```
