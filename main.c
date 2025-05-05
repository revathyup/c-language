#include<stdio.h>

struct complex {
    float a;
    float b;
};
int main(){
    struct complex revathy={1.0, 2.0};
    printf("a =%f\n", revathy.a);
    printf("b =%f\n", revathy.b);
    printf("sizeof(revathy) = %ld\n", sizeof(revathy));
    return 0;
}   
