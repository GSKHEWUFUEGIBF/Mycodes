#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int i;
char a[20];
printf("Enter a string!\n");
gets(a);
for(i=0;i<20;i++){
    if(a[i]=='a'&&a[i+1]=='n'&&a[i+2]=='d'){
      a[i]='b';
      a[i+1]='u';
      a[i+2]='t';
        }
    }

                    }
puts(a);
                }


