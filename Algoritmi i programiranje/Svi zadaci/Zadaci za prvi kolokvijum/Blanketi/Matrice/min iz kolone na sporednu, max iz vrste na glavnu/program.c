#include<stdio.h>
void main() {
    int i, j, N, A[50][50], imax, jmax,d,B[50], imin, jmin, C[50];
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    /*imax = 0;
    jmax = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (A[imax][jmax] < A[i][j]) {
                imax = i;
                jmax = j;
            }
        }
        B[i] = A[imax][jmax];
        imax = 0;
        jmax = 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
                A[i][j] = B[i];
            }
            imax = 0;
            jmax = 0;
        }
    }*/
    // SAD MIN NA SPOREDNU

    imin = 0;
    jmin = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (A[imin][jmin] > A[i][j]){
                imin = i;
                jmin = j;
            }
        }
        C[i] = A[imin][jmin];
        imin = 0;
        jmin = 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i+j == N-1) {
                A[i][j] = C[i];
            }
            imin = 0;
            jmin = 0;
        }
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%2d ", A[i][j]);

        }
        printf("\n");
    }

}