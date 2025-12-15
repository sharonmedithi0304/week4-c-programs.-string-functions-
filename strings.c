#include<stdio.h>
int main ( ){
	char st[30];
	int count = 0,i;
	printf("enter string: \n");
    gets(st);
    
    for(i = 0;st[i] != 0;i++)
    count++;
    printf("lenght of the string is %s",count);
    printf("reverse of string is :\n");
    
    for(i=count-1;i>=0;i--)
    printf("%c",st[i]);
    
    //printf("ur string is : %s \n", st);
	
	return 0;
	
}
