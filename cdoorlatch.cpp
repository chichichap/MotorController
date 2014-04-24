#include "cdoorlatch.h"

CDoorLatch::CDoorLatch()
    : m_isOpen(true)
{

}

void CDoorLatch::setOpen(bool open)
{
    m_isOpen = open;
}

bool CDoorLatch::checkOpen()
{
    return m_isOpen;
}
