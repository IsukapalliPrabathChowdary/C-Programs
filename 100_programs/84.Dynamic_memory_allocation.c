#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char name[100];
char *description;
strcpy(name,"asif");
description=malloc(30* sizeof(char));
if(description==NULL)
    fprintf(stderr,"Error-unable to allocate required memory\n");
else
    strcpy(description,"asif trainer.");

    description=realloc(description,100*sizeof(char));
    if(description==NULL)
    fprintf(stderr,"Error-unable to allocate required memory\n");
    else
    strcat(description,"he is in class");
    printf("Name=%s\n",name);
    printf("Description:%s\n",description);
    free(description);
return 0;
}