bool passwordCheckRegExp(std::string s) {
    return std::regex_match(s, std::regex(R"((?=.*[a-z])(?=.*[A-Z])(?=.*\d).{5,})"));
}
