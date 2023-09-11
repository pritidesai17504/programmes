#include<iostream>
#include<vector>
#include<math.h>
#
using namespace std;

class Student 
{
    private :

        string name;
        int ID;
        string  classstud;
        char grade;
        
public:
    Student(string n, int id, string c, char grd)
        : name(n), ID(id), classstud(c), grade(grd) {}

    void displayDetails() {
        cout << "Name: " << name << "\nID: " << ID
             << "\nClass: " << classstud << "\nGrade: " << grade << "\n";
    }
};

class Teacher {
private:
    string name;
    int ID;
    string subject;
    double lpa;

public:
    Teacher(string n, int id, string sub, double sal)
        : name(n), ID(id), subject(sub), lpa(sal) {}

    void displayDetails() {
        cout << "Name: " << name << "\nID: " <<ID<< "\nSubject: " << subject << "\nSalary: " << lpa << "\n";
    }
};

class Course {
private:
    string name;
    int ID;
    int assignedTeacherID;
    vector<int> studentIDs;

public:
    Course(string n, int id, int teacherID)
        : name(n), ID(id), assignedTeacherID(teacherID) {}

    void addStudent(int studentID) {
        studentIDs.push_back(studentID);
    }

    void displayDetails() {
        cout << "Course Name: " << name << "\nCourse ID: " << ID
             << "\nAssigned Teacher ID: " << assignedTeacherID
             << "\nEnrolled Students: ";
        for (int id : studentIDs) {
            cout << id << " ";
        }
        cout << "\n";
    }
};
int main() {
    using namespace std;

    vector<Student> students;
    vector<Teacher> teachers;
    vector<Course> courses;
    
    students.push_back(Student("VAISHNAVI", 58, "CLASS S.Y", 'A'));
    students.push_back(Student("CHETANA", 59, "CLASS S.Y", 'A'));
    students.push_back(Student("PRITI", 62, "CLASS S.Y", 'A'));

    teachers.push_back(Teacher("MR.SURVE", 1, "MATH", 10000000));
    teachers.push_back(Teacher("MRS.KHOT", 2, "MATH", 10000000));

    courses.push_back(Course("MATH", 70000, 70001));
    courses.push_back(Course("SCI.", 80000, 80001));

    courses[0].addStudent(1);
    courses[1].addStudent(3);

    cout<<"\n\t\t SCHOOL MANAGEMENT SYSTEM"<<endl;

    cout << "Student Details:\n";
    for (Student &student : students) {
        student.displayDetails();
    }

    cout << "\nTeacher Details:\n";
    for (Teacher &teacher : teachers) {
        teacher.displayDetails();
    }

    cout << "\nCourse Details:\n";
    for (Course &course : courses) {
        course.displayDetails();
    }

    return 0;
}

