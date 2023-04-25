import csv

class Student:
 
    def __init__(self):
        self.name = None
        self.surname = None
        self.identifier = None
    
    def SetIdentifier(self, identifier):
        self.identifier = identifier
    
    def SetName(self, name):
        self.name = name

    def SetSurName(self, surname):
        self.surname = surname
    
    def GetIdentifier(self):
        return self.identifier
    
    def GetName(self):
        return self.name

    def GetSurName(self):
        return self.surname

class Course:
    
    def __init__(self):
        self.name = None
        self.identifier = None
    
    def SetIdentifier(self, identifier):
        self.identifier = identifier
    
    def SetName(self, name):
        self.name = name

    def GetIdentifier(self):
        return self.identifier
    
    def GetName(self):
        return self.name

class AttendanceManagement:

    def TakeAttendance(self, student:Student, course:Course, datetime:str, state:bool):
        #Guardo todas las variables
        studentID = str(student.GetIdentifier(student))
        studentName = student.GetName(student)
        studentSurname = student.GetSurName(student)
        courseID = str(course.GetIdentifier(course))
        courseName = course.GetName(course)
        state = str(int(state))
        attendance_list = studentID , studentName , studentSurname , courseID ,  courseName , state
        
        with open('attendance.csv', 'a', newline='\n') as csv_file:
            writer = csv.writer(csv_file)
            writer.writerow(attendance_list)
        csv_file.close()
        
    def ShowAttendance():
        with open('attendance.csv', 'r', newline='\n') as csv_file:
            reader = csv.reader(csv_file)
            for row in reader:
                print (row)
               



student = Student
student.SetIdentifier(student, identifier = 1)
student.SetName(student, name = "juan")
student.SetSurName(student,  surname = "perez")

course = Course
course.SetIdentifier(course, identifier = 1)
course.SetName(course, name = "matematica")

attendance = AttendanceManagement
attendance.TakeAttendance(attendance, student=student, course=course, datetime="23/5/23", state=True)

attendance.ShowAttendance()