/*Implement a class Complex which represents the Complex Number data type. Implement the 
following operations:
a. Constructor (including a default constructor which creates the complex number 0+0i). 
b. Overloaded operator + to add two complex numbers.
c. Overloaded operator * to multiply two complex numbers.
d. Overloaded << and >> to print and read Complex Numbers.

Write a C + + program to read and display all project information using Operator Overloading. 
*/

#include <iostream>
using namespace std;

class Complex
    {
        float r,i;

        public:
            Complex()
                {
                    r=0;
                    i=0;
                }

            Complex operator+(Complex);
            Complex operator*(Complex);
            Complex operator-(Complex);

            friend istream& operator >>(istream & in,Complex &t)
                {
                    cout<<"Enter the real part";
                    in>>t.r;
                    cout<<"Enter the imaginary part";
                    in>>t.i;
                    return in;
                }

            friend ostream& operator <<(ostream & output,Complex &t)
                {
                    output<<t.r<<"+"<<t.i<<"i\n";
                    return output;
                }

    };

Complex Complex::operator+(Complex c)
    {
        Complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return(temp);
    }

Complex Complex::operator*(Complex c)
    {
        Complex temp2;
        temp2.r=(r*c.r)-(i*c.i);
        temp2.i=(i*c.r)+(r*c.i);
        return(temp2);
    }

Complex Complex::operator-(Complex c)
    {
        Complex temp3;
        temp3.r=r-c.r;
        temp3.i=i-c.i;
        return(temp3);
    }

int main()
    {
        Complex c1,c2,c3,c4,c5;
        cout<<"Default constructor value=\n";
        cout<<c1;
        cout<<"\nEnter the 1st number\n";
        cin>>c1;
        cout<<"\nEnter the 2nd number\n";
        cin>>c2;

        c3=c1+c2;
        c4=c1*c2;
        c5=c1-c2;

        cout<<"\nThe 1st number is ";
        cout<<c1;
        cout<<"\nThe 2nd number is ";
        cout<<c2;
        cout<<"\nThe Addition is ";
        cout<<c3;
        cout<<"\nThe Multiplication is ";
        cout<<c4;
        cout<<"\nThe Subtraction is ";
        cout<<c5;
        return 0;
    }
