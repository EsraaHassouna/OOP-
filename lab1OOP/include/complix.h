#ifndef COMPLIX_H
#define COMPLIX_H


class complix
{
    public:
        complix();
        virtual ~complix();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // COMPLIX_H
