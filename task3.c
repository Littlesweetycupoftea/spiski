
#include <stdio.h>


    int mat_a[3][4] = {
        {
            0,
            2,
            3,
            0
        },
        {
            0,
            9,
            0,
            0
        },
        {
            7,
            0,
            4,
            0
        }

    };
int trans_mat[4][3];

void transparacy_matr(int * matA, int * matT, int matArow, int matAcolmn);
void print_matr(int * matriX, int m, int p);

int main(void) {
    int * ptr_matr, * ptr_matr_Tr;
    ptr_matr = mat_a[0];
    ptr_matr_Tr = trans_mat[0];
    print_matr(ptr_matr, 3, 4);
    transparacy_matr(ptr_matr, ptr_matr_Tr, 3, 4);

    printf("\n***************");

    print_matr(ptr_matr_Tr, 4, 3);
    return 0;

}

void transparacy_matr(int * matA, int * matT, int matArow, int matAcolmn) {
    int i, j;
    for (i = 0; i < matArow; i++)
        for (j = 0; j < matAcolmn; j++)
            matT[i + matArow * j] = matA[i * matAcolmn + j];
}

void print_matr(int * matriX, int m, int p) {
    int i;
    for (i = 0; i < m * p; i++) {
        if (i % p == 0)
            printf("\n");
        printf("  %d", matriX[i]);

    }

}
