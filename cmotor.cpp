#include "cmotor.h"

CMotor::CMotor()
    : m_startingPosition(0)
    , m_position(0)
{
}

CMotor::CMotor(int startingPosition)
{
    m_startingPosition = startingPosition;
}

void CMotor::resetMotor()
{
    m_position = m_startingPosition;
}

void CMotor::moveMotor(int distance)
{
    m_position = distance;
}

int CMotor::getPosition()
{
    return m_position;
}
