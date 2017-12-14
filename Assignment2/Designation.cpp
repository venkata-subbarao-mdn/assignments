#include "Designation.h"

Designation::Designation(EmpDesig designation)
{
    mDesignation = designation;
}

int Designation::getBonusRate() const
{
    int bonusRate = 0;

    switch (mDesignation) {
        case EmpDesig::ASSOCIATE:
            bonusRate = 1;
            break;
        case EmpDesig::DEVELOPER:
            bonusRate = 2;
            break;
        case EmpDesig::SR_DEVELOPER:
            bonusRate = 3;
            break;
        case EmpDesig::MANAGER:
            bonusRate = 4;
            break;
        default:
            bonusRate = 0;
    }

    return bonusRate;
}

string Designation::getDesignationStr(EmpDesig desig)
{
    string strDesig;

    switch (desig) {
        case EmpDesig::ASSOCIATE:
            strDesig = "Associate";
            break;
        case EmpDesig::DEVELOPER:
            strDesig = "Developer";
            break;
        case EmpDesig::SR_DEVELOPER:
            strDesig = "Senior Developer";
            break;
        case EmpDesig::MANAGER:
            strDesig = "Manager";
            break;
        default:
            strDesig = "Unknown";
    }

    return strDesig;
}
