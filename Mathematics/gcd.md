# Greates common diviser

## Naive solution

```cpp
int gcd(int a , int b){
    int result = min(a,b);
    while(result > 0){
        if(a % result == 0 && b % result ==0){
            break;
        }
        result--
    }
    return result;
}
```

### Time complexity = O(min(a,b))

---

## Euclidean algorithm

let a = gx and b = gy

- (a - b) = g(x - y)

## Optimized solution

```cpp
int gcd(int a , int b ){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b , a% b);
    }
}
```

- ## finding all divisors in sqrt(n)

```cpp
for(int i = 1 ; i< sqrt(n); i++){
    if(n % i == 0 ){
        print(i)

        if(n % i != i){
            print(n% i);
        }
    }

}
```
