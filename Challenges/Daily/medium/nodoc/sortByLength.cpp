auto sortByLength(auto a) {
    stable_sort(begin(a), end(a), [](auto a, auto b) 
                { return a.length() < b.length(); });
    return a;
}
