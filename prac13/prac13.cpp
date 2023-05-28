void displayTasks(const std::string& filename) { // Выводит все задачи из файла
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return;
    }

    std::string line;
    int taskNumber = 1;
    while (getline(file, line)) {
        std::cout << taskNumber << ". " << line << std::endl;
        ++taskNumber;
    }

    file.close();
void displayTasks(const std::string& filename) { // Выводит все задачи из файла
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return;
    }

    std::string line;
    int taskNumber = 1;
    while (getline(file, line)) {
        std::cout << taskNumber << ". " << line << std::endl;
        ++taskNumber;
    }

    file.close();
}