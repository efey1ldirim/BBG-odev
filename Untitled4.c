#include <stdio.h>

void stringyazdir(const char *cPtr){
	for( ;*cPtr!='\0';cPtr++)
		printf("%c",*cPtr);
}

int main(void){
	char karDizi[] = "\tAnkara\n\tIzmir\n\tIstanbul";
	printf("Karakter dizisi:\n");
	stringyazdir(karDizi);
	printf("\n");
	
	return 0;
}
