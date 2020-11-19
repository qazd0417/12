#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *p;
	char c;
		
	p = fopen("sample.txt", "r");
	if(p==NULL)
		return -1;
	
	while ((c=fgetc(p)) !=EOF){
		printf("%c",c);
	
	}
	fclose(p);
	return 0;
}

