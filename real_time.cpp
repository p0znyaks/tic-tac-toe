#include "Header.h"
#include <ctime>

int callRealTime() {
    // ��������� �������� �������
    time_t currentTime = time(nullptr);

    // �������������� ������� � ��������� �����
    tm localTime;
    localtime_s(&localTime, &currentTime);

    // ��������� ����������� �������
    int hours = localTime.tm_hour;
    int minutes = localTime.tm_min;
    int seconds = localTime.tm_sec;


    // ����� �������
    cout << "Current time: " << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}