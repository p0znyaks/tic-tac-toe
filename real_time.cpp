#include "Header.h"
#include <ctime>

int callRealTime() {
    // Получение текущего времени
    time_t currentTime = time(nullptr);

    // Преобразование времени в локальное время
    tm localTime;
    localtime_s(&localTime, &currentTime);

    // Получение компонентов времени
    int hours = localTime.tm_hour;
    int minutes = localTime.tm_min;
    int seconds = localTime.tm_sec;


    // Вывод времени
    cout << "Current time: " << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}