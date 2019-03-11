int firstDuplicate(std::vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        int nextIndex = abs(a[i]) - 1;
        if (a[nextIndex] < 0)
            return abs(a[i]);
        a[nextIndex] *= -1;
    }
    return -1;
}
