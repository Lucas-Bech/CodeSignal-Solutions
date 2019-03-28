bool isTandemRepeat(std::string s) {
    int l = s.size() / 2;
    return !s.compare(0, l, s, l, std::string::npos);
}
