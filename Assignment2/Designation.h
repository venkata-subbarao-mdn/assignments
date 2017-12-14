#ifndef __DESIGNATION_H__
#define __DESIGNATION_H__

#include <string>

using namespace std;

enum class EmpDesig {ASSOCIATE, DEVELOPER, SR_DEVELOPER, MANAGER };

class Designation {
    public:
        Designation(EmpDesig designatin);
        int getBonusRate() const;
        EmpDesig getEmpDesig() const { return mDesignation; }
        static string getDesignationStr(EmpDesig desig);

    private:
        EmpDesig mDesignation;
};

#endif
