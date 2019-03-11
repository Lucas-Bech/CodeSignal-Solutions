char firstNotRepeatingCharacter(const std::string& s) {
    const int alphabetSize = 'z' + 1 - 'a';
    int charCount[alphabetSize] = {0};
    int charOrder[alphabetSize];
    
    int orderIndex = 0;
    for(auto& c : s)
        if (!charCount[(c - 'a')]++)
            charOrder[orderIndex++] = c - 'a';

    for(int i = 0; i < s.length(); ++i)
        if(charCount[s[i] - 'a'] == 1)
            return s[i];
    
    return '_';
}
