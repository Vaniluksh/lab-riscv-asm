#include <stdio.h>

#define N 2
#define M 2


void process(int n, int m, int matrix[M][N], int *result)
{
    *result = 0;

    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j){
            if (matrix[j][i] > 0){
                *result += matrix[j][i];
            }
        }
    }
}

int main(int argc, char** argv) 
{
    int matrix[M][N] = {{1, 2}, {1, 2}};
    int result;

    /*
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    */

    process(N, M, &matrix, &result);
    printf("%d ", result);

    return 0;
}