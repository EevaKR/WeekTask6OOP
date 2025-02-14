#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    Student A("Aaa", 30);
    Student B("Bee", 26);
    Student C("Cee", 28);
    Student D("Dee", 27);

    studentList.push_back(A);
    studentList.push_back(B);
    studentList.push_back(C);
    studentList.push_back(D);

    vector<Student>::iterator it = studentList.begin();

    string etsittavanimi;
    cin >> etsittavanimi;




    do {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0: {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
           /* int age;
            string name;
            cout << "What is your name and age" << endl;
            cin << name << age;
            Student name = new Student;  */
            // Lisää uusi student StudentList vektoriin.
            break;
        }
        case 1: {
            cout << "Students"<< endl;
            for(Student A:studentList) {
               cout << A.getName() << "" << endl;
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            break;
        }

        case 2: {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getName() < b.getName();
            });

            for (Student &s: studentList) {
                cout << s.getName() << ":" << s.getName() << endl;

            }
            break;
        }

        case 3: {
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b) {
                return a.getAge() < b.getAge();

            });

            for (Student &s: studentList) {
                cout << s.getAge() << ":" << s.getAge() << endl;

            }
            break;  }


        case 4:  {
            /*bool etsiParhaat (const Student &s) {
                find_if =
                return s.grade >= 90;
            }
            bool findName (Student &s) {
                find_if =
                return s.getName == name;
            }
            //auto it = find_if(studentList.begin(), studentList.end(), );
*/


            cout << "anna etsittävä nimi " << endl;

            it = find_if(studentList.begin(), studentList.end(),
                [etsittavanimi](Student & s ) -> bool { return s.getName() == etsittavanimi; });

        if ( it != studentList.end() ) {
                        cout << "Found" <<  distance(studentList.begin(), it) << endl;
        } else {
                    cout << "Not found" << endl;
                }
        break;


        }
            break;
        }
    }        while(selection < 5);

    cout << "Exited the loop." << endl;
    return 0;
}

