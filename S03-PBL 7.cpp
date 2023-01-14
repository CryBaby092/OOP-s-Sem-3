/*Write a class template to represent a generic vector. Include member functions to perform the following tasks:
a To create the vector.
b To modify the value of a given element.
c To multiply the vector by a scalar value.
d To display the vector in the form (10, 20, 30)*/


#include<iostream>
using namespace std;
template<class In>
class vector
{
	In in[20];
	int size;

public:
	void create();
	void modify();
	void scalar_multiplication();
	void display();
};

template<class In>
void vector<In>::create()
{
	int n;
	In value;
	cout << "Enter Number of Elements you want to Insert: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter the Value to be Inserted: ";
		cin >> in[i];
	}
}

template<class In>
void vector<In>::modify()
{
	int key;
	In new_value;
	cout << "\nEnter Index for Modification: ";
	cin >> key;
	cout << "\nEnter New Value:";
	cin >> new_value;
	in[key] = new_value;
}

template<class In>
void vector<In>::scalar_multiplication()
{
	int i;
	int scalar_value;
	cout << "\nEnter Scalar Value for Multiplication: ";
	cin >> scalar_value;
	for (i = 0; i < size; i++)
		in[i] = in[i] * scalar_value;
}

template<class In>
void vector<In>::display()
{
	int size;
	cout << "\nElements how many elements you want to display :";
	cin >> size;


	int i;
	cout << "\nSize of Vector is:" << size;
	cout << "\nElements in Vector are:";
	cout << "(";
	for (i = 0; i < size; i++)
	{
		cout << in[i] << " ";
	}
	cout << ")";
}

int main()
{
	int ch;
	vector<int>obj;
	do
	{
		cout << "\n\n--------------------------------------------";
		cout << "\n\t\t\tInsertion Sort\t\n";
		cout << "--------------------------------------------";
		cout << "\nMAIN MENU";
		cout << "\n1.Create Vector";
		cout << "\n2.Display Vector";
		cout << "\n3.Scalar Multiplication of Vector";
		cout << "\n4.Modification in Vector";
		cout << "\n5.Exit";
		cout << "\nEnter your Choice:";
		cin >> ch;

		switch (ch)
		{
		case 1:
			obj.create();
			break;
		case 2:
			obj.display();
			break;
		case 3:
			obj.scalar_multiplication();
			break;
		case 4:
			obj.modify();
			break;
		case 5:
			cout << "\nExit\n";
			break;
		default:
			cout << "\nInvalid Choice!!!";
			cout << "\nPlease Input Correct Choice....";
			break;
		}
	} while (ch != 0);
	return 0;
}