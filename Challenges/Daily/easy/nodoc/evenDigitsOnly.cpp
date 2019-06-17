bool evenDigitsOnly(int n) {
    do
        if (n % 10 % 2)
            return false;
    while (n /= 10);
    return true;
}
