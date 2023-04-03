#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("Yes");
    }
    else if(tk>=20){
        printf("Icecream");
    }
    else{
        printf("No");
    }
    return 0;
}