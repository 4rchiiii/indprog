class Task {
private:
    std::string date;
    std::string time;
    std::string task;
    std::string description;

public:
    Task(const std::string& date, const std::string& time, const std::string& task, const std::string& description)
        : date(date), time(time), task(task), description(description) {}

    bool isValidDateFormat() const { // Проверяет, является ли формат даты действительным
        if (date.length() != 10) {
            return false;
        }
        if (date[2] != '.' || date[5] != '.') {
            return false;
        }
        for (int i = 0; i < 10; ++i) {
            if (i == 2 || i == 5) {
                continue;
            }
            if (!isdigit(date[i])) {
                return false;
            }
        }

        int day = stoi(date.substr(0, 2));
        int month = stoi(date.substr(3, 2));

        if (day < 1 || day > 31) {
            return false;
        }

        if (month < 1 || month > 12) {
            return false;
        }

        return true;
    }

    bool isValidTimeFormat() const { // Проверяет, является ли формат времени действительным
        if (time.length() != 5) {
            return false;
        }
        if (time[2] != ':') {
            return false;
        }
        for (int i = 0; i < 5; ++i) {
            if (i == 2) {
                continue;
            }
            if (!isdigit(time[i])) {
                return false;
            }
        }
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
            return false;
        }
        return true;
    }

    void printTask(int taskNumber) const { // Выводит информацию о задаче
        std::cout << taskNumber << ". " << date << " " << time << " | " << task << " | " << description << std::endl;
    }

    bool operator==(const std::string& dateToCompare) const { // Проверяет, совпадает ли дата с заданной датой
        return date == dateToCompare;
    }

    const std::string& getDate() const { // Возвращает дату
        return date;
    }

    const std::string& getTime() const { // Возвращает время
        return time;
    }

    const std::string& getTask() const { // Возвращает задачу
        return task;
    }

    const std::string& getDescription() const { // Возвращает описание задачи
        return description;
    }
};