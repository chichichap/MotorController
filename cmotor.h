#ifndef CMotor_H
#define CMotor_H

class CMotor
{
public:
    CMotor();
    CMotor(int startingPosition);
    void resetMotor();                  // moves motor to the starting position
    void moveMotor(int distance);       // moves motor to the measurement position
    int getPosition();

private:
    int m_position;
    int m_startingPosition;
};

#endif // CMotor_H
