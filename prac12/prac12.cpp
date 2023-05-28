void editTask(const std::string& filename) { // Редактирует задачу в файле
    int taskNumber;
    std::cout << "Введите номер задачи для редактирования: ";
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

            std::string editedDate, editedTime, editedTask, editedDescription;
            std::cin.ignore();  // Очистка буфера ввода

            do {
                std::cout << "Введите дату (ДД.ММ.ГГГГ): ";
                getline(std::cin, editedDate);
                Task tempTask(editedDate, "", "", "");
                if (!tempTask.isValidDateFormat()) {
                    std::cout << "Некорректный формат даты. Попробуйте еще раз." << std::endl;
                }
            } while (!Task(editedDate, "", "", "").isValidDateFormat());

            do {
                std::cout << "Введите время (ЧЧ:ММ): ";
                getline(std::cin, editedTime);
                Task tempTask("", editedTime, "", "");
                if (!tempTask.isValidTimeFormat()) {
                    std::cout << "Некорректный формат времени. Попробуйте еще раз." << std::endl;
                }
            } while (!Task("", editedTime, "", "").isValidTimeFormat());

            std::cout << "Введите отредактированную задачу: ";
            getline(std::cin, editedTask);
            std::cout << "Введите отредактированное описание задачи: ";
            getline(std::cin, editedDescription);
            tempFile << currentTaskNumber << ". " << editedDate << " " << editedTime << " | " << editedTask << " | " << editedDescription << std::endl;

            std::cout << "Задача отредактирована!" << std::endl;
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
    }
    else {
        remove("temp.txt");
        std::cout << "Задача не найдена!" << std::endl;
    }
}