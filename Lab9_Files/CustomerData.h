#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"

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

        CustomerData(int n, bool m, string l, string f, string a,
             string c, string s, string z, string p)
        {
            customerNumber = n;
            mailingList = m;
            lastName = l;
            firstName = f;
            address = a;
            city = c;
            state = s;
            zip = z;
            phone = p;
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