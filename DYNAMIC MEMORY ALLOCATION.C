#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *name;
name = malloc(14);
name = realloc(name, 100);
strcpy(name,"hello bro");
printf("%s",name);
free(name);
return 0;
}
