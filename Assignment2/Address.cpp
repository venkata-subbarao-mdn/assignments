#include "Address.h"

Address::Address(AddressType type, string doorNo, string area,
                 string city, string district, int pin) :
                 mType(type), mDoorNo(doorNo), mArea(area),
                 mCity(city), mDistrict(district), mPin(pin)
{
}

string Address::getAddress()
{
    stringstream ss;

    // Print header
    switch (mType) {
        case AddressType::CURRENT:
            ss << "Current Address:" << "\n";
            break;
        case AddressType::OFFICE:
            ss << "Office Address:" << "\n";
            break;
        case AddressType::PERMANENT:
            ss << "Permanent Address:" << "\n";
            break;
    }
    ss << "---------------------\n";
    if (mDoorNo != "") {
        ss << "\t\tD.No.: " << mDoorNo << "\n";
    }
    if (mArea != "") {
        ss << "\t\tArea: " << mArea << "\n";
    }
    if (mCity != "") {
        ss << "\t\tCity: " << mCity << "\n";
    }
    if (mDistrict != "") {
        ss << "\t\tDist: " << mDistrict << "\n";
    }
    if (mPin != 0) {
        ss << "\t\tPIN: " << mPin << "\n";
    }

    return ss.str();
}
