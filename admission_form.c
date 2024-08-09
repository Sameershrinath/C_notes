#include <stdio.h>
// Display student details
int main() {
    int sid,age;
    char fname[50];
    char lname[50];
    char branch[50];
    char prog[50];


    printf("Hello, this is the registrarion form\n");
    printf("what is your name ? : \n");
    scanf("%49s",fname);
    scanf("%49s",lname);
    printf("what is your SID ? :\n");
    scanf("%d",&sid);
    printf("What is your branch of admission? :\n ");
    scanf("%49s",branch);
    scanf("%49s",prog);

    printf("\n\n ********************************\n\n");
    printf("Your name is %s %s and your SID is %d . \n You have taken admission in %s %s .", fname,lname,sid,branch,prog);
    printf("\n\n ********************************\n\n");


return 0;
}
