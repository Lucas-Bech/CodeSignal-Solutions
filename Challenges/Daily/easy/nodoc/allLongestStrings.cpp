std::vector<std::string> allLongestStrings(std::vector<std::string> allStrings) {
    std::vector<std::string> longestStrings;
    int longestLength = 0;
    
    for (std::string& curString : allStrings) {
        if (curString.length() > longestLength) {
            longestLength = curString.length();
            longestStrings.clear();
        }
        
        if (curString.size() == longestLength)
            longestStrings.push_back(curString);
    }
    return longestStrings;
}
