#include <stdio.h>
#include <stdlib.h>
static int cmp_int(const void *a, const void *b){
	if (*(int*)a > *(int*)b) return 1;
	if (*(int*)a < *(int*)b) return -1;
	return 0;
}
int main(void){
	int n=10;
	int *p = (int*)malloc(n*sizeof(int));
	int i, sayi, m=0;
	do{
		printf("Sayi giriniz:\n");
		scanf("%d",&sayi);
		
		if (sayi==0) break;
		m++;
		if(m==n){
			n *= 2;
			p = realloc(p,n*sizeof(int));
			if(p==NULL){
				printf("Hafiza bitti!\n");
				return -1;
			}
		}
		p[m-1]=sayi;
	} while(1);
	for(i=0;i<m;i++) printf("%d ",p[i]);
	printf("\n");
	qsort(p,m,sizeof(int),cmp_int);
	for(i=0;i<m;i++) printf("%d ",p[i]);
	printf("\n");
	if (m%2==1) printf("medyan : %d", p[m/2]);
	else printf("medyan : %d", (p[m/2]+p[m/2+1])/2);
	return 0;	
}





