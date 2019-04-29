vector<int> improperFractionToMixed(auto a) {
    return { a[0] / a[1], a[0] % a[1], a[1] };
}
