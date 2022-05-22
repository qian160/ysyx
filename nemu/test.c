#include<stdio.h>
#include<string.h>
int main()
{
	char p[]="My name is Van.";
	char tmp[20];
	char *sep=" ";
	char *token=NULL;
	strcpy(tmp,p);
	for(token=strtok(tmp,sep);token != NULL;token=strtok(NULL,sep))
	{
		printf("%s\n",token);
		printf("%s\n",tmp);
	}
	return 0;
}
