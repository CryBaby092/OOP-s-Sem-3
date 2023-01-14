/*Create a base class called 'SHAPE' having-two data members of type double -member function get-data( )to 
initialize base class data members - pure virtual member function display-area( )to compute and display the 
area of the geometrical object.
Derive two specific classes 'TRIANGLE' and 'RECTANGLE' from the base class Using these three 
classes, design a program that will accept the dimension of a triangle / rectangle interactively and display 
the area. Implement using C++.*/

#include <iostream>
using namespace std;

class Shape
    {
        protected:
            long area;
            double length;
            double breadth;
       
        public:
            void get_data();
            void display_data();
            virtual void display_area()=0;
    };


class Square: public Shape
    {
        private:
           double length;
       
        public:
            Square(){
              area=length=0;
          }
         
        void get_data(){
              cout<<"Please, Enter the Length of Square :";
              cin>>length;
          }
          void display_area(){
              area=length*length;
              cout<<"Area :"<<area;
          }
    };
   
class Triangle : public Shape
    {
     private:
          double length,breadth;
     public:
          Triangle(){
              area=length=breadth=0;
          }
          void get_data(){
              cout<<"\nPlease, Enter the The Length of Triangle:"<<endl;
              cin>>length;\
               cout<<"\nPlease, Enter the The Breadth of Triangle:"<<endl;
              cin>>breadth;
          }
          void display_area(){
              area=0.5*length*breadth;
              cout<<endl<<"Area : "<<area;
          }
    };
   
class Rectangle : public Shape
    {
     private:
          double length,breadth;
     public:
          Rectangle(){
              area=length=breadth=0;
          }
          void get_data(){
              cout<<"\nPlease, Enter the The Length of Rectangle: "<<endl;
              cin>>length;\
               cout<<"\nPlease, Enter the The Breadth of Rectangle: "<<endl;
              cin>>breadth;
          }
          void display_area(){
              area=length*breadth;
              cout<<endl<<"Area : "<<area;
          }
     
    };
   
int main()
    {
        Square s1;
        Triangle t1;
        Rectangle r1;
       
        int choice;
        do{
        cout<<"\n";
        cout<<"\n1.Square\n";
        cout<<"2.Triangle\n";
        cout<<"3.Rectangle\n";    
        cout<<"4.Exit\n";
        cout<<"Please ,Enter your Choice: ";
        cin>>choice;
       
        switch (choice)
        {
            case 1:
                s1.get_data();
                s1.display_area();
                // s1.perimeter();
            break;
            case 2:
                t1.get_data();
                t1.display_area();
                // t1.perimeter();
            break;
            case 3:
                r1.get_data();
                r1.display_area();
                // r1.perimeter();
            break;
            case 4:
                 cout<<"You are Exiting the Program..."<<endl;
                 cout<<"Thank You";
            default:
                 cout<<"Incorrect Choice";
        }
        }while(1);
        return 0;
    }

