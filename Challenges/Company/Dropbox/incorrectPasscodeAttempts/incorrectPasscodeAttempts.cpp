bool incorrectPasscodeAttempts(std::string passcode, std::vector<std::string> attempts) {
    int consecutiveFails = 0;
    for (std::string& attempt : attempts)
        if (attempt != passcode) {
            if (++consecutiveFails == 10)
                return true;
        }
        else consecutiveFails = 0;
    return false;
}
