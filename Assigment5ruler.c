#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,length,height,i,y,x;
    printf("Enter the height : ");
    scanf("%d",&height);
    printf("Enter ruler lenght: ");
    scanf("%d",&length);
   
    for(i=0;i<length;i++){
        for(j=0;j<height;j++){
            printf("-");
        }
            printf("%d\n",i); 
        for(x=0;x<height-3;x++){
            printf("-");
        }
            printf("\n");
        for(x=0;x<height-2;x++){
            printf("-");
        } 
            printf("\n");

        for(x=0;x<height-3;x++){
            printf("-");
        }
            printf("\n");
        for(x=0;x<height-1;x++){
            printf("-");
        }
            printf("\n"); 
    
        for(x=0;x<height-3;x++){
            printf("-");
        }
            printf("\n");  
        for(x=0;x<height-2;x++){
            printf("-");
        }
            printf("\n"); 
        for(x=0;x<height-3;x++){
            printf("-");
        }
            printf("\n");
    }
        for(y=0;y<=height-1;y++){
            printf("-");
        }

           printf("%d",i);
           printf("\n"); 
        

    return 0;

}
