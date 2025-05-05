#include<stdio.h>


void main() {
    float num1,num2,res = 0;
    int not_valid=0;
    char opt;char do_more;int div_by_zero =0;
    
    printf("welcome to calculator\n");
    do {
        printf("enter number1:");
        scanf("%f",&num1);
        printf("enter number2:");
        scanf("%f",&num2);

        div_by_zero = 0;

        do {
        printf("choose an operation : (+,-,*,/) :");
        scanf("\n%c",&opt);

        printf("\nopt: (dec)%d ,(char) %c\n" , opt, opt);
        
        switch (opt){
            case '+': res = num1+num2;break;
            case '-': res = num1-num2;break;
            case '*': res = num1*num2;break;
            case '/':
            if (num2 == 0) {
                printf("second num shd nor b zero\n");
                div_by_zero = 1;
            } 
            res = num1/num2;break;
            default:
            printf("invalid operation");
            not_valid = 1;
            }
            
            if(div_by_zero ==1){
                break;
            }
           } while(not_valid == 1);

           if(div_by_zero == 1) {
            continue;
           }
        printf("result of %f, %c, %f , %f \n" , num1,opt,num2,res);
    
        printf(" do u wANT To contiune(y/n): ");
        scanf("\n%c",&do_more);

    } while(do_more == 'y');
}