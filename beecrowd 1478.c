#include <stdio.h>
 
int main() {
    int N,i,j,num;
    int M[100][100];

    while(1){
        scanf("%d",&N);
        if(N == 0){
            break;
        }
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i==j){
                    num = 1;
                    M[i][j] = 1;
                    if(j>0){
                        while(num<N){
                            M[i][j-num] = num+1;
                            M[i][j+num] = num+1;
                            num++;
                        }
                    }
                    else{
                        while(num<N){
                            M[i][j+num] = num+1;
                            num++;
                        }
                    }
                }
            }
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j!=(N-1)){
                    printf("%3d ",M[i][j]);
                }
                else{
                    printf("%3d\n",M[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}