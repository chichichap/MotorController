#include "csensor.h"
#include <vector>

CSensor::CSensor()
{
    initData();
}

void CSensor::initData() {
    int temp[10] = {100, 101, 105, 110, 210, 100, 102, 110, 150, 100};

    for (int i=0; i < 10; i++)
        m_data[i] = temp[i];
}

bool CSensor::calibrate()
{
    return true;
}

void CSensor::readData(int data[])
{
    for (int i=0; i < 10; i++)
        data[i] = m_data[i];
}
