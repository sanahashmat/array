#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int r[5];
    int i;

    //reverse & save in r[]
    for(i=0;i<5;i++){
        r[i]=a[4-i];
    }
    
    //display reversed array
    printf("Reversed array: ");
    for(i=0;i<5;i++){
        printf("%d\n",r[i]);
    }
    return 0;
}