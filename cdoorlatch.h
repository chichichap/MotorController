#ifndef CDoorLatch_H
#define CDoorLatch_H

class CDoorLatch
{
public:
    CDoorLatch();
    void setOpen(bool open);
    bool checkOpen();

private:
    bool m_isOpen;
};

#endif // CDoorLatch_H
