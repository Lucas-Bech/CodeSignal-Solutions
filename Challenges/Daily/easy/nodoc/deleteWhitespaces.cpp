auto deleteWhitespaces(auto s) {
    s.erase(remove(begin(s), end(s), ' '), end(s));
    return s;
}
