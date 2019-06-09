#include <stdio.h>
 #include <stdint.h>
#include <time.h> 

uint32_t fib(int n){
    if(n <= 0) {
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int memo[45] = { 0 };

uint32_t dynaFibo(int n) {
    //printf("%d %d ",n, memo[n]);
     if(n <= 0) {
        return 0;
    } else if(n == 1){
        return 1;
    } else if(memo[n] == 0) {
        memo[n]= dynaFibo(n-1) + dynaFibo(n-2);
    }
    return memo[n];
}



int main() {
    clock_t t; 
    t = clock(); 
    //uint32_t fid = fib(45);
    uint32_t fid = dynaFibo(45);
    printf("%u\n", fid);
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("fun() took %f seconds to execute \n", time_taken);

    return 0;
}