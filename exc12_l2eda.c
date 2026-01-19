void swapmax3(int *a, int *b, int *c) {
    int temp;

    if (*b > *a) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*c > *a) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*c > *b) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}