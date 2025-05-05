#include<stdio.h>
int main() {

char abc = 'Z';
char *ptr;

char number[4];

int *in_ptr;
in_ptr = &number[0];

*in_ptr = 65;
printf("*in_ptr:%c\n",*in_ptr);

int i=0;
while (i<4) {
    printf("%c\n", number[i]);
    i=i+1;
}

return 0;
}