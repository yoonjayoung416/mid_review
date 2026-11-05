#include "studentRoster.h"

int main()
{
    using namespace yjy2372032;
    student s1{"yoon", 1234567, 100};
    student s2{"kim", 2345678, 90};
    student s3{"park", 3456789, 80};

    studentRoster* srPtr{new studentRoster{"C++ Programming"}};
    srPtr->addStudent(s1);
    srPtr->addStudent(s2);
    srPtr->addStudent(s3);

    srPtr->print();

    delete srPtr;

    return 0;
}