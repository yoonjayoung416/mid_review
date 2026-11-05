#pragma once
#include <array>
#include "student.h"

const int max{30};

namespace yjy2372032
{
    class studentRoster
    {
        std::string courseName;
        std::array<student, max> studentArray;
        int n;
    public:  
        studentRoster(const std::string& c="no course name yet"):courseName{c}, n{0}{}
        void addStudent(const student& s)
        {
            if(n >= max)
            {
                std::cout << "(in studentRoster:addStudent) error, over max\n";
                std::exit(1);
            }
                studentArray[n] = s; n+=1;
        }
        void print() const
        {
            std::cout << courseName << ":\n";
            for (int i =0; i<n ; ++i)
            std::cout << studentArray[i];
            std::cout << std::endl;
        }
        const std::string& getCourseName() const {return courseName;}
        void setCourseName(const std::string& c){courseName = c;}
    };
}