#include<stdio.h>
#include<string.h>
int main(){
  char s[50];
  printf("Enter name:");
  scanf("%s",s);
  printf("Your name %s\n",s);
  printf("%s\n",strrev(s));
  printf("%d\n",strlen(s));
    return 0;
}

