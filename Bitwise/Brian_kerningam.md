# Brian kerningam algorithm

# Lecture - [Count bits](https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-BitMagic/video/Nzc0NA%3D%3D)

### **Idea : WE traverse only the set bits**

### **time complexity : 0(set bits)**

- What happens when we minus 1 from a number?

  - The Trailing zeros become 1 until it reaches 1 then it converts 1 to zero

-

```cpp
int countBits(it n){
    int res =0 ;
    while(n > 0){
        n = n & (n-1);
        res++;
    }
    return res;
}

```

- **the loop runs until all set bits are turned to zero**

## Algorithm to count no of set bits in 32 bit integer

```cpp
int arr[256];

void initialize(){
    arr[0]= 0;
    for(int i = 1; i < 256; i++){
        arr[i] = arr[i & (i- 1)] + 1;
    }
}

int countSetBit(int n){
    return arr[n & 255] + ar[(n >> 8) & 255] + arr[(n >> 16) & 255] + arr[(n >> 24)];
}

```
