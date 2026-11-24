#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

using namespace std;

class CustomerData : public PersonData
{
    private:
        int customerNumber;
        bool mailingList;
    public:
        CustomerData()
        {
            customerNumber = 0;
            mailingList = false;
        }

        CustomerData(int n, bool m)
        {
            customerNumber = n;
            mailingList = m;
        }

        // Mutators
        void setNum(int n)
        {
            customerNumber = n;
        }

        void setList(bool m)
        {
            mailingList = m;
        }

        // Accessors
        int getNum()
        {
            return customerNumber;
        }

        bool getList()
        {
            return mailingList;
        }
};
#endif