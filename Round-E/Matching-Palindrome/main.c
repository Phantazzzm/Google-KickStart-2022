#include<stdio.h>
#include<stdlib.h>

int main(){

	char t;
	scanf("%d",&t);
	
	for(char c=0;c<t;c++){
	
		int n;
		scanf("%d",&n);
		
		char *p=malloc((n+1)*sizeof(char));
		scanf("%s",p);
		
		int qn=0;
		while(++qn<n)
			if(n%qn==0){
				for(int qi=qn;qi<n/2+n%2;qi++)
					if(p[qi%qn]!=p[qi])
						goto cqn;
				break;
				cqn:continue;
			}
			
		p[qn]=0;
		printf("Case #%d: %s\n",c+1,p);
		
		free(p);
	
	}
	
	return 0;

}
