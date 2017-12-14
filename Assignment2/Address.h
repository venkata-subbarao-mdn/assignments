#ifndef __ADDRESS_H__
#define __ADDRESS_H__

#include <string>
#include <sstream>

using namespace std;

enum class AddressType {PERMANENT, CURRENT, OFFICE};

class Address {
    public:
        Address(AddressType type, string doorNo, string area,
                string city, string district, int pin);

        string getAddress();

    private:
        AddressType mType;
        string mDoorNo;
        string mArea;
        string mCity;
        string mDistrict;
        int mPin;
};

#endif
