void addTask(const std::string& filename) { // Добавляет новую задачу в файл
    std::ofstream file(filename, std::ios::app); // Открывает файл для добавления данных в конец
    if (!file) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return;
    }

    std::string date, time, task, description;
    std::cout << "Введите дату (ДД.ММ.ГГГГ): ";
    std::cin >> date;
    if (!Task(date, "", "", "").isValidDateFormat()) { // Проверяет формат даты
        std::cout << "Неверный формат даты!" << std::endl;
        return;
    }
    std::cout << "Введите время (ЧЧ:ММ): ";
    std::cin >> time;
    if (!Task("", time, "", "").isValidTimeFormat()) { // Проверяет формат времени
        std::cout << "Неверный формат времени!" << std::endl;
        return;
    }
    std::cin.ignore();  // Очистка буфера ввода
    std::cout << "Введите задачу: ";
    getline(std::cin, task);
    std::cout << "Введите описание задачи: ";
    getline(std::cin, description);

    // Получение текущего количества задач в файле
    std::ifstream inputFile(filename);
    int taskCount = std::count(std::istreambuf_iterator<char>(inputFile), std::istreambuf_iterator<char>(), '\n');
    inputFile.close();

    file << taskCount + 1 << ". " << date << " " << time << " | " << task << " | " << description << std::endl;

    std::cout << "Задача добавлена!" << std::endl;

    file.close();
}