#include <gtest/gtest.h>
#include <string>
#include "smartPtr.hpp"
#include "A.hpp"

class smartPointerTests : public ::testing::Test {
public:
    smartPointerTests()
    {
    }
    ~smartPointerTests()
    {
    }

    bool bool1 = true;
    bool bool2 = false;
    char char1 = 'a';
    char char2 = 'b';
    int int1 = 11;
    int int2 = 13;
    float flt1 = 1.41421356237;
    float flt2 = 1.73205080757;
    double dbl1 = 3.14159265359;
    double dbl2 = 2.718281828459;
    std::string str1 = "Lorem ipsum dolor sit amet";
    std::string str2 = "Consectetur adipiscing elit";
    int AInt = 17;
    
    void SetUp()
    {    
        A A1(19);
        A A2(23);
    }
    
    void TearDown()
    {  
    }
};

TEST_F(smartPointerTests, canProperlyConstructSmartPtr)
{
    smartPointer<bool> sPtrBool1(new bool(bool1));
    smartPointer<char> sPtrChar1(new char(char1));
    smartPointer<int> sPtrInt1(new int(int1));
    smartPointer<float> sPtrFloat1(new float(flt1));
    smartPointer<double> sPtrDouble1(new double(dbl1));
    smartPointer<std::string> sPtrString1(new std::string(str1));
    smartPointer<A> sPtrA1(new A(AInt));
    
    ASSERT_TRUE(*sPtrBool1 == bool1);
    ASSERT_TRUE(*sPtrChar1 == char1);
    ASSERT_TRUE(*sPtrInt1 == int1);
    ASSERT_TRUE(*sPtrFloat1 == flt1);
    ASSERT_TRUE(*sPtrDouble1 == dbl1);
    ASSERT_TRUE(*sPtrString1 == str1);
    ASSERT_TRUE(*sPtrA1 == A(AInt));
}
