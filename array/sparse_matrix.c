#include <stdio.h>
#define ROWS 4
#define COLS 4

  void findsparseMatrix(int matrix[ROWS][COLS]);
    
    int main(){
        int matrix[ROWS][COLS];
        for(int i =0; i <ROWS; i++){
            for(int j =0; j<COLS; j++){
                matrix[i][j] = 0;
            }
        }
        findsparseMatrix(matrix);
        return 0;
    }
     void findsparseMatrix(int matrix[ROWS][COLS]){
         int sparse_counter = 0;
         for(int i=0; i < ROWS; i++){
             for(int j =0; j < COLS; j++){
                 if (matrix[i][j] == 0){
                     ++sparse_counter;
                 }
             }
         }
          if(sparse_counter >((ROWS * COLS)/ 2))
            printf("the given matrix is sparse matrix \n");
            printf("there are %d number of zeros. \n", sparse_counter);
     }