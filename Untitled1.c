#include <stdio.h>
#include <stdlib.h>

static int cmp_int(const void *a, const void*b)
{
  if(*(int *)a < *(int *)b) return 1;
  if(*(int *)a > *(int *)b) return -1;
  return 0;
}



int main(void){
	
	int a[10]={5,2,6,21,7,89,3,4,2,6};
	qsort(a,10,sizeof(int),cmp_int);
	int i;
	printf("a = {");
	for(i=0;i<10;i++) printf("%d ",a[i]);
	printf("};\n");
	return 0;
}
