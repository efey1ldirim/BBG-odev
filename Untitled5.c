#include <stdio.h>
#include <stdlib.h>
static int cmp_char(const void *a, const void *b){
	if (*(char*)a > *(char*)b) return -1;
	if (*(char*)a < *(char*)b) return 1;
	return 0;
}
int say(const char *p){
	int i=0;
	while(*p!='\0'){
		if(*p != *(p+1)) i++;
		p++;
	}
	return i;
}
int main(void){
	int n=100;
	char *p = (char*)calloc(n,sizeof(char));
	printf("Karakter kumesi giriniz\n");
	gets(p);
	printf("%s \n",p);
	qsort(p,n,1,cmp_char);
	printf("%s \n",p);
	printf("%d farkli karakter var!",say(p));
	return 0;
}
