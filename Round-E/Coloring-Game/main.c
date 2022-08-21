#include<stdio.h>

main(){
    
    char t;
    scanf("%d",&t);
    
    for(char c=0;c<t;c++){
        
        int n;
        scanf("%d",&n);
        
        printf("Case #%d: %d\n",c+1,(n/5)+(n%5>0));
        
    }
    
}
