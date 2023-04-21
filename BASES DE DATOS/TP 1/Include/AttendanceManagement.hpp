
#ifndef AttendanceManagement_hpp
    #define AttendanceManagement_hpp

#include <iostream>
#include <string>
#include <fstream>
#include <Student.hpp>
#include <Course.hpp>
using namespace std;
class AttendanceManagement{
private:

public:
    AttendanceManagement();
    ~AttendanceManagement();
    void TakeAttendance(Student _student, Course _course, string datetime, bool state);
    void ShowAttendance();
};

#endif