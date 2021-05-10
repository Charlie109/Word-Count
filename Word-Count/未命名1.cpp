#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024

int main()
{
	int words = 0;
	int sum = 0;
	FILE* fp; 
	char buffer[MAX_LINE] ;
	int i;
	fp = fopen("input.txt","r");
	if(fp == NULL){
		printf("cannot open file!");
		exit(0);
	}
	
	while(! feof(fp))
	{
		if(fgets(buffer, MAX_LINE, fp) != NULL){
			words = 1;
			for(i = 0;buffer[i]!=NULL; i++){
				if(buffer[i]==' '||buffer[i]==','){
					words++;
				}
				if(buffer[i]>=65&&buffer[i]<=90){
					sum++;
				}else if(buffer[i]>=97&&buffer[i]<=122){
					sum++;
				}
			}
		}
	}
	fclose(fp);
	printf("×Ö·ûÊý£º%d \n",sum); 
	printf("µ¥´ÊÊý£º%d \n",words);
	return 0;
}

