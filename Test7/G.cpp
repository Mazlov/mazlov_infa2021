float find_root(float (*f)(float), float a, float b, float tol) {
    float m, M;
    if (f(a) < f(b)) {
        m = a;
        M = b;
    }
    else {
        m = b;
        M = a;
    }
    while ((M - m) / 2 > tol || (m - M) / 2 > tol) {
        if (f((m + M) / 2) > 0)
            M = (m + M) / 2;
        else
            m = (m + M) / 2;
    }
    return (M + m) / 2;
}
