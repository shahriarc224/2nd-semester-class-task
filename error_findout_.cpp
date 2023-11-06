/*Error find out */



#include <iostream>
using namespace std;
class student {
protected:
    string name;
    int id;

public:
    void getData() {
        cout << "Enter Student Information" << endl;
        cout<<"Enter name:";
        cin >> name;
        cout<<"Enter ID:";
        cin >> id;
    }

    void show_Data() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

class Course : public student {
private:
    int courseid;

public:
    void getCourseData() {
        cout << "Enter Course Information" << endl;
        cout<<"Course id:";
        cin >> courseid;
    }

    void show_CourseData() {
        show_Data();
        cout << "Course id: " << courseid << endl;
    }
};

int main() {
    Course C1;
    C1.getData();
    C1.getCourseData();
    C1.show_CourseData();
    return 0;
}
