// Create a class Student Record that manages a student grade dynamically.
// data members: int StudentID: a unique id (private),string name:Students name (private), float* grades : a pointer to a heap-allocated array of grades (private), int totalStudents: a counter to track how many total students enrolled.
//constructor: Takes nameand int subjectCount, Increments totalStudents and assigns it to StudentID, allocates a heap array for grades based on subjectCount.
// deep copy constructor : Implement a copy constructor that perform deep copy, ensure the new student gets their own copy of the grades array,not just a pointer to the original.
#include <iostream>
using namespace std;
class StudentRecord {
    private:
        static int totalStudents;
        int StudentID;
        string name;
        float* grades;
        int subjectCount;

    public:
        StudentRecord(string name, int subjectCount) {
            this->name = name;
            this->subjectCount = subjectCount;
            grades = new float[subjectCount];
            StudentID = ++totalStudents;
        }
    
        StudentRecord(const StudentRecord& other) {
            name = other.name;
            subjectCount = other.subjectCount;
            StudentID = ++totalStudents;
            grades = new float[subjectCount];
            for (int i = 0; i < subjectCount; i++) {
                grades[i] = other.grades[i];
            }
        }

        void setGrades(float* newGrades) {
            for (int i = 0; i < subjectCount; i++) {
                grades[i] = newGrades[i];
            }
        }

        void displayInfo() {
            cout << "Student ID: " << StudentID << ", Name: " << name << ", Grades: ";
            for (int i = 0; i < subjectCount; i++) {
                cout << grades[i] << " ";
            }
            cout << endl;
        }

        ~StudentRecord() {
            delete[] grades;
        }
};
int StudentRecord::totalStudents = 0;
int main() {
    float grades1[] = {85.5, 90.0, 78.5};
    StudentRecord student1("Alice", 3);
    student1.setGrades(grades1);
    student1.displayInfo();

    StudentRecord student2 = student1;
    student2.displayInfo();

    return 0;
}
