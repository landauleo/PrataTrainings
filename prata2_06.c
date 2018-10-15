#include <stdio.h>

void print_smile(int n) {
    if ( n ) {
        printf("Улыбайся! ");
        print_smile(n - 1);
    }
    else
        printf("\n");
}

void print_smiles(int n) {
    if ( n ) {
        print_smile(n);
        print_smiles(n - 1);
    }
}

int main(void) {
    print_smiles(3);

    return 0;
}
