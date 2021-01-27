#include<stdio.h>

int main(){
        int w, f, i;
        
        printf("Enter window size: ");
        scanf("%d", &w);
        printf("Enter number of frames to transmit: ");
        scanf("%d", &f);

        int fr[f+1];
        printf("Enter %d frames: ", f);

        for(i = 1;i <= f;i++)
                scanf("%d", &fr[i]);
        
        for(i = 1; i <= f; i++){
                if(i % w == 0)
                        printf("%d\nAcknowledgement received.\n", fr[i]);
                else
                        printf("%d ", fr[i]);
        }

        if(f % w != 0){
                printf("\nAcknowledgment received.\n");
        }

        return 0;
}
                        
