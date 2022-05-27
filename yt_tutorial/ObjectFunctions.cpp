#include <iostream>

using namespace std;

class  Student {
    public:
        string  name;
        string  major;
        double  gpa;

        Student (string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors()
        {
            if (gpa >= 3.5)
                return true;
            return false;
        }

        ~Student(){
            cout << "Deleting Student" << endl;
        }
};

int main()
{
    Student student1("Jim", "Business Administration", 3.6);
    cout << student1.hasHonors() << endl;
    Student student2("Pam", "Math", 2.5);
   
    cout << student1.name << endl;

    return 0;
}