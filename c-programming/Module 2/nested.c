#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("Yes");
        if(tk>=500){
            printf("Biriyani");
        }
        else{
            printf("Nothing");
        }
    }
    else{
        printf("No");
    }
    return 0;
}