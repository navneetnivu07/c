#include <stdio.h>

void printCalculator() {
    printf("Enter two numbers\n");
    int a = 5;
    int b =5;
    int c = a+b;
    printf("%d\n", c);
}

int addReturn(int a, int b){
    int sum = a+b;
    return sum;
}

void addPrint(int a, int b){
    printf("addPrint %d\n", a+b);
}

int main() {
    printCalculator();

    int add = addReturn(1,2);
    printf("add %d\n",add);
    int sub = add - 1;
    printf("sub %d\n",sub);

    addPrint(1,2);

    return 0;
}



