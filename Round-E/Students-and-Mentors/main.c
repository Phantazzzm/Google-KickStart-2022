#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

main(){
    
    char t;
    scanf("%d",&t);
    
    for(char c=0;c<t;c++){
        
        int n;
        scanf("%d",&n);
      
        int *r=malloc(n*sizeof(int));
        int *o=calloc(1000001,sizeof(int));
        for(int i=0;i<n;i++){
            
            scanf("%d",&r[i]);
            
            if(o[r[i]]!=0)o[r[i]]=INT_MAX;
            else o[r[i]]=i+1;
            
        }
        
        for(int i=0,l=0;i<1000001;i++){
          
            if(o[i]==0)o[i]=l;
            else l=-i-1;
          
        }
        
        printf("Case #%d:",c+1);
        
        for(int i=0;i<n;i++){
            
            int rj=r[i]*2>1000000?1000000:r[i]*2;
            
            lm:
            if(o[rj]<0)rj=-o[rj]-1;
            else if(o[rj]>0);
            else rj=0;
            
            if(o[rj]==INT_MAX);
            else if(o[rj]-1==i){
              
                rj--;
                goto lm;
              
            }
            
            printf(" %d",rj==0?-1:rj);
            
        }
        
        printf("\n");
        
        free(r);
        free(o);
        
    }

}
