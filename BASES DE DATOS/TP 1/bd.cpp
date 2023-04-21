#include <iostream>
#include <AttendanceManagement.hpp>
#include <Student.hpp>
#include <Course.hpp>

using namespace std;

int main()
{

    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

    Course* course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->TakeAttendance(*student, *course, "2021-06-08", true);

    attendanceManagement->ShowAttendance();

    delete student;
    delete course;
    delete attendanceManagement;

    return 0;
}

