#include "CustomerData.h"
#include "PersonData.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Setting example values
    int custNum = 1903;
    bool listCheck = true;
    string last = "Lee", first = "Kristen", address = "123 4th Ave", 
        city = "Brooklyn", state = "New York", zip = "56789", phone = "(718) 123-4567";

    // Initializing & printing the first customer's data
    CustomerData customer1(custNum, listCheck, last, first, address, city, state, zip, phone);

    cout << "Customer #" << customer1.getNum() << "'s Data:" << endl;
    cout << "--------------------------------\n";
    cout << "Name: " << customer1.getFirst() << " " << customer1.getLast() << endl;
    cout << "Address: " << customer1.getAddress() << ", " << customer1.getCity() 
        << ", " << customer1.getState() << ", " << customer1.getZip() << endl;
    cout << "Phone: " << customer1.getPhone() << endl;
    if (customer1.getList() == true)
    {
        cout << "Mailing List? Yes\n";
    }
    else
    {
        cout << "Mailing List? No\n";
    }

    cout << endl;

    // Printing Customer 2's data (default)
    CustomerData customer2;

    cout << "Customer #" << customer2.getNum() << "'s Data:" << endl;
    cout << "--------------------------------\n";
    cout << "Name: " << customer2.getFirst() << " " << customer2.getLast() << endl;
    cout << "Address: " << customer2.getAddress() << ", " << customer2.getCity() 
        << ", " << customer2.getState() << ", " << customer2.getZip() << endl;
    cout << "Phone: " << customer2.getPhone() << endl;
    if (customer2.getList() == true)
    {
        cout << "Mailing List? Yes\n";
    }
    else
    {
        cout << "Mailing List? No\n";
    }

}