#include<stdio.h>
struct student{
    int id;
    char name[50];
    float marks;
    
};
int main(){
    struct student s1={20,"amit",92};
    
      printf("ID=%d\n",s1.id);
      printf("Name=%s\n",s1.name);
      printf("Marks=%f\n",s1.marks);
      printf("Size of struct student= %d bytes\n",sizeof(struct student));
      return 0;
    
    
}