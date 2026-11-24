#include "CustomerData.h"
#include "PersonData.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Setting example values
    string last = "Lee", first = "Kristen", address = "123 4th Ave", 
        city = "Brooklyn", state = "New York", zip = "54321", phone = "(718) 123-4567";
    PersonData customer1(last, first, address, city, state, zip, phone);

}