#include "sample2.h"

unsigned Grade::_currentID{ 0 };

Grade::Grade()
    : _name{ "None" }, _grade{ 0 }, _ID{ ++_currentID } {
}

Grade::Grade(const char* name, float grade)
    : _name{ name }, _grade{ grade }, _ID{ ++_currentID } {
}

void Grade::setStudent(const char* name) {
    _name = name;
}
