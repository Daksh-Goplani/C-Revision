#include<stdio.h>

int main(){

    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int mat[rows][cols];
    int transpose[rows][cols];
    
    printf("Enter elements of matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transpose[i][j] = mat[j][i];
        } 
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", transpose[i][j]);
        } 
        printf("\n");
    }

    return 0;
}