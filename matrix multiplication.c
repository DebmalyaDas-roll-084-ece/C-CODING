#include <stdio.h>

int main() {
    int A[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int B[4][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    int C[3][2];
      
      for(int i=0;i<3;i++){
          for(int j=0;j<2;j++){
              C[i][j]=0;
              for(int k=0;k<4;k++){
                  C[i][j]+=A[i][k] * B[k][j];
              }
          }
      }
      for(int i=0;i<3;i++){
          for(int j=0;j<2;j++){
              printf("%d\t",C[i][j]);
          }
          printf("\n");
      }
      

    return 0;
}
