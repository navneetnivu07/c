#include<stdio.h>

int b = 2;
int main() {

    /*
    1. default storage class
    2. rarely used
    3. access within scope
    4. outside scope using pointers
    5. defult= garbage
    */
    auto int a = 1;
    printf("%d\n", a);

    /*
    1. 
    2. 
    3. defined elsewhere, not within scope
    4. value assigned/changed in different blocks (any func blk)
    5. defult= 0/given value
    6. nothing but global variable, purposefully done for using in other places
    7. we are not init a new var, instead accessing global var
    8. purpose : accessed btw different files
    */
    extern int b;
    printf("%d\n", b);

    /*
    1. 
    2. used to declae static vars (init once, lives till pgm termination)
    7. no new memory location is allocated
     
    */
    static int c = 1;


    return 0;
}

