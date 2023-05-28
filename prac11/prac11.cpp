void deleteTask(const std::string& filename) { // Удаляет задачу из файла
    int taskNumber;
    std::cout << "Введите номер задачи для удаления: ";
    std::cin >> taskNumber;
    if (taskNumber < 1) {
        std::cout << "Неверный номер задачи!" << std::endl;
        return;
    }

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return;
    }

    std::ofstream tempFile("temp.txt");
    if (!tempFile) {
        std::cout << "Ошибка создания временного файла!" << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    int currentTaskNumber = 1;
    bool taskFound = false;
    while (getline(inputFile, line)) {
        if (currentTaskNumber == taskNumber) {
            taskFound = true;
        }
        else {
            tempFile << line << std::endl;
        }
        currentTaskNumber++;
    }

    inputFile.close();
    tempFile.close();

    if (taskFound) {
        remove(filename.c_str()); // Удаляет исходный файл
        rename("temp.txt", filename.c_str()); // Переименовывает временный файл в исходное имя файла
        std::cout << "Задача удалена!" << std::endl;
    }
    else {
        remove("temp.txt");
        std::cout << "Задача не найдена!" << std::endl;
    }
}