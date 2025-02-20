#include<stdio.h>
void main() {
    int i, N, k, A[50], j;
    printf("Unesi duzinu niza N=");
    scanf("%d", &N);
    printf("Unesite elemente niza A\n");
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);
    i = 0;
    while (i < N) {
        k = 0;
        for (j = 0; j < N; j++) {
            if (A[i] == A[j])
                k++;
        }
        if (k > 1) {
            for (j = i; j < N - 1; j++) {
                A[j] = A[j + 1];
            }
            N--;
        }
        else {
            i++;
        }


    }
    printf("Elementi novostalog niza:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
}