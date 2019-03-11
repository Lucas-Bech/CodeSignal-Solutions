int makeArrayConsecutive2(const std::vector<int>& statues) {
    auto minmaxPair = minmax_element(statues.begin(), statues.end());
    return *minmaxPair.second - *minmaxPair.first - statues.size() + 1;
}
