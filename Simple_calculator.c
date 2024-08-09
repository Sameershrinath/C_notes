#include<stdio.h>
int main(){
int a,b;
float result;
int operat;

printf("\n ******Welcome to the simple calculator *****\n\n");
printf("Enter the First value:\n");
scanf("%d",&a);
printf("Enter the second value:\n");
scanf("%d",&b);
printf("Enter the Operation value: \n 1. Multiplication\n 2. Addition \n 3. Substraction \n 4. Division \n\n");
scanf("%d",&operat);
if (operat==1){
    result=a*b;
}

 else if (operat==2){
    result=a+b;
}
else if (operat==3){
    result=a-b;
}
else if (operat==4){
    result=a/b;
}
printf("The result of operation is %2f",result);
    return 0;
}