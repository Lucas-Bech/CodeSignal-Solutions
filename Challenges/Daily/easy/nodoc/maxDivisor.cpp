int maxDivisor(int l, int r, int d){
    return d > r ? -1 : r - r % d;
}
