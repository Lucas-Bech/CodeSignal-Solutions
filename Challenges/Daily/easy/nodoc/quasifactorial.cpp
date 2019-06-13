int quasifactorial(int n) {
    return n > 1 ? n * quasifactorial(n - 1) - 1 : 1;
}
