std::vector<std::string> splitString(const std::string& str, char delimiter) { // Разделяет строку на подстроки по заданному разделителю
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}