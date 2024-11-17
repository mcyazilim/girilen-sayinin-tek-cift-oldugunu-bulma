#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynumber;

    printf("Enter a number:");
    scanf("%d",&mynumber);

    if(mynumber%2==0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }

    return 0;
}
