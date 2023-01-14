/*Write a program using C++ to create a student database system containing the following 
information: Name, roll number, Class, division, Date of Birth, Blood group, Contact address, 
telephone number. Use Class, object, inline function. Use static variables and static functions 
to maintain count of the number of students. Use constructor and destructor.*/

#include <iostream>
using namespace std;

static int count = 0; 
class student
    { 
        private:
            string name; 
            int roll; 
            int clas; 
            char div; 
            string dob; 
            string blood; 
            string address; 
            long long phone; 

        public:
            student();

            void setdata(); 
            void getdata(); 
            inline void static display_count() 
            { 
                cout << "Count of students is " << count << endl; 
            }

            inline void static increment() 
            { 
                count++; 
            } 

            ~student(); 
    };

student::student() 
    { 
        roll = 0; 
        clas = 0; 
        div = 0; 
        name.clear(); 
        dob.clear(); 
        blood.clear(); 
        address.erase(); 
        phone = 0; 
    }

student::~student() 
    { 
        cout << "Object is destroyed\n"; 
    }

void student::setdata() 
    { 
        cin.ignore(); 
        cout << "Enter the name of the student\n"; 
        getline(cin, name); 
        cout << "Enter Roll Number\n"; 
        cin >> roll; 
        cout << "Enter Class\n"; 
        cin >> clas; 
        cout << "Enter Division\n"; 
        cin >> div; 
        cin.ignore(); 
        cout << "Enter Date Of Birth\n"; 
        getline(cin, dob); 
        cout << "Enter Blood Group\n"; 
        getline(cin, blood); 
        cout << "Enter Address\n"; 
        getline(cin, address); 
        cout << "Enter your phone number\n"; 
        cin >> phone; 
    }

void student::getdata() 
    { 
        cout << "Name of the student : " << name << endl; 
        cout << "Roll number of the student :" << roll << endl; 
        cout << "Class number of the stdent :" << clas << endl; 
        cout << "Division of the student :" << div << endl; 
        cout << "Date of Birth of the student:" << dob << endl; 
        cout << "Blood group of the student :" << blood << endl; 
        cout << "Address of the student :" << address << endl; 
        cout << "Phone number of the student :" << phone << endl; 
    }; 

int main() 
    { 
        int n, choice; 
        cout << "Enter the number of the student\n"; 
        cin >> n;

        student stu[n]; 
        do 
            { 
                cout << "Enter your choice\n 1.New Entry\n 2.Display\n 3.Exit\n"; 
                cin >> choice; 
                switch (choice) 
                { 
                    case 1: 
                        for (int i = 0; i < n; i++) 
                        { 
                            cout << "Enter data for " << i + 1 << "student" << endl; 
                            stu[i].setdata(); 
                            stu[i].increment(); 
                            stu[i].display_count(); 
                        } 
                    break;

                    case 2: 
                        for (int i = 0; i < n; i++)
                        { 
                            cout << "Enter data for " << i + 1 << "student" << endl; 
                            stu[i].getdata(); 
                        } 
                    break;

                    case 3: 
                        exit(0); 
                    break; 
                } 
            }
        while (1); 
        return 0; 
    }