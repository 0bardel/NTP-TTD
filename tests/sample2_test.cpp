#include "sample2.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

class GradeFixture : public ::testing::Test {
protected:
    virtual void SetUp() override {
        ocenaptr = new Grade;
    }

    virtual void TearDown() override {
        delete ocenaptr;
        Grade::reset();
    }

    Grade ocena;
    Grade ocena2{ "Antoni", 3.0 };
    Grade* ocenaptr;
};

TEST_F(GradeFixture, DefaultConctructor) {
    EXPECT_EQ(ocena.name(), "None");
    EXPECT_FLOAT_EQ(ocena.grade(), 0.0F);
}

TEST_F(GradeFixture, IDsAreUpdating) {
    EXPECT_EQ(ocena.ID(), 1);
    EXPECT_EQ(ocena2.ID(), 2);
    EXPECT_EQ(ocenaptr->ID(), 3);
}

TEST_F(GradeFixture, NamesAreSetsCorrectly){
    ocena.setStudent("Zofia");
    using ::testing::StrEq;
    EXPECT_STREQ(ocena.name().c_str(), "Zofia");
    EXPECT_THAT(ocena.name(), StrEq("Zofia")); //alternatywne wykokanie tego samego testu, wymaga gmock
}
