#include <stdio.h>

char upp(char small){
    int conv = small - 32;
    return conv;
}


int iupp(char small){
    return small - 32;
}

char low(char up){
    int conv = up + 32;
    return conv;
}


int main() {

    char val;
    scanf("%c", &val);

    char res= upp(val);
    printf("%c\n",res);

    int res1=iupp(val);
    printf("%c \n",res1);

    printf("%c \n",low(res));
    printf("%c \n",low(res1));

   
    // printf("%c\n",val);
    // printf("%d\n",val);

    // int conv = val - 32;
    // printf("%d\n",conv);
    // printf("%c\n",conv);


    return 0;
}





