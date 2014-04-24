#ifndef CSENSOR_H
#define CSENSOR_H

class CSensor
{
public:
    CSensor();
    void initData();
    bool calibrate();               // calibrates the sensor
    void readData(int data[]);      // reads the data from the sensor

private:
    int m_data[10];
};

#endif // CSENSOR_H
