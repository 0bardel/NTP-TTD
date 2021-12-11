#ifndef _SAMPLE2_H_
#define _SAMPLE2_H_

#include <string>

class Grade {
public:
    //C'tor domyślny
    Grade();

    //C'tor z inicjalizacja
    Grade(const char*, float);

    //ustawia nazwę
    void setStudent(const char*);

    //getters
    std::string name() const { return _name; };
    float grade() const { return _grade; };
    unsigned ID() const { return _ID; }

    //important because of Gtest logic
    static void reset() { _currentID = 0; };

private:
    static unsigned _currentID;

    std::string _name;
    float _grade;
    const unsigned _ID;
};

#endif
