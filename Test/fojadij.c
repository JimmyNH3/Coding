#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char str1[128];
	char str2[128];
	int n,result;
    scanf("%s",str1);
    scanf("%s",str2);
	scanf("%d",&n);
	if(n<=strlen(str1)){
		result=strncmp(str1,str2,n);
		if(result>0){
			printf("%s>%s\n",str1,str2);
		}else if(result==0){
			printf("%s=%s\n",str1,str2);
		}else{
			printf("%s<%s\n",str1,str2);
		}
	}
	else{
		printf("error\n");
	}
	return 0;
}