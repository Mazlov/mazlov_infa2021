int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new) {
    if (n_new == 0) {
        if (source == NULL) {
            return NULL;
        }
        else {
            delete[] source;
            return NULL;
        }
    }
    if (source == NULL) {
        return new int[n_new];
    }
    int* a = new int[n_new];
    int b = n_new;
    if (n_new > n_old)
        b = n_old;
    for (int i = 0; i < b; i++) {
        a[i] = source[i];
    }
    delete[] source;
    return a;
}
