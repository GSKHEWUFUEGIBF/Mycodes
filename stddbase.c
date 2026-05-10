#include <stdio.h>
#include <stdlib.h>
struct student{
int rno;
char name[100];
int marks;};

int main()
{
    struct student s1={1,"Excel",98};
    printf("Roll.no %d\n",s1.rno);
    printf("Name %s\n",s1.name);
      printf("marks %d\n",s1.marks);
    return 0;

}
