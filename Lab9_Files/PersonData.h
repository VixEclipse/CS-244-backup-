#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <iostream>

using namespace std;

class PersonData
{
    protected:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone;
    public:
        // Constructors
        PersonData()
        {
            lastName = "";
            firstName = "";
            address = "";
            city = "";
            state = "";
            zip = "";
            phone = "";
        }

        PersonData(string l, string f, string a,
             string c, string s, string z, string p)
        {
            lastName = l;
            firstName = f;
            address = a;
            city = c;
            state = s;
            zip = z;
            phone = p;
        }

        // Mutators
        void setLast(string l)
        {
            lastName = l;
        }

        void setFirst(string f)
        {
            firstName = f;
        }

        void setAddress(string a)
        {
            address = a;
        }

        void setCity(string c)
        {
            city = c;
        }

        void setState(string s)
        {
            state = s;
        }

        void setZip(string z)
        {
            zip = z;
        }

        void setPhone(string p)
        {
            phone = p;
        }

        // Mutators
        string getLast()
        {
            return lastName;
        }

        string getFirst()
        {
            return firstName;
        }

        string getAddress()
        {
            return address;
        }

        string getCity()
        {
            return city;
        }

        string getState()
        {
            return state;
        }

        string getZip()
        {
            return zip;
        }

        string getPhone()
        {
            return phone;
        }

};
#endif