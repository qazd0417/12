#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *p;
	int i;
	char str[100];
		
	p = fopen("sample.txt", "w");
	if(p==NULL)
		return -1;
	
	for(i=0;i<3;i++)
	{
		printf("input a word: ");
		scanf("%s", str);
		fprintf(p, "%s\n", str);
			
	}
	fclose(p);
	return 0;
}

