#include <iostream>
using namespace std;

class Mat {
private:
	int r, c;
	int m[4][4];

public:
	void read();
	void display();
	friend Mat operator+(Mat a, Mat b);
	friend Mat operator-(Mat a, Mat b);
	friend Mat operator*(Mat a, Mat b);
};

void Mat:: void read() {
	cout << "Data of Matrix: " << endl;
	cout << "Enter the no. of Rows: " << endl;
	cin >> r;
	cout << "Enter the no. of Columns: " << endl;
	cin >> c;
	try {
		if (r > 4 || c > 4)
		{
			throw'Exception';
		}
	}
	catch (char c) {
		cout < "The array size is more, it should be less than 4." << endl;
		exit(0);
	}
	cout << "Enter the Elements: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> m[j][j];
		}
	}
}

void Mat:: void display() {
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << m[j][j] << "\t";
		}
		cout << endl;
	}
}

Mat operator+(Mat a, Mat b)
{
	try {
		if (a.r != b.r) || (a.c != b.c))
		{
			throw'Exception';
		}
	}
	catch (char c)
	{
		cout << "Order of Matrix is not same!!!" << endl;
		cout << "Please, Enter valid orders..." << endl;
		exit(0);
	}
	Mat c;
	c.r = a.r;
	c.c = a.c;
	for (int i = 0; i < a.r; i++)
	{
		for (int j = 0; j < a.c; j++)
		{
			c.m[i][j] = a.m[i][j] + b.m[i][j];
		}
	}
	return c;
}

Mat operator-(Mat a, Mat b)
{
	try {
		if (a.r != b.r) || (a.c != b.c))
		{
			throw'Exception';
		}
	}
	catch (char c)
	{
		cout << "Order of Matrix is not same!!!" << endl;
		cout << "Please, Enter valid orders..." << endl;
		exit(0);
	}
	Mat c;
	c.r = a.r;
	c.c = a.c;
	for (int i = 0; i < a.r; i++)
	{
		for (int j = 0; j < a.c; j++)
		{
			c.m[i][j] = a.m[i][j] - b.m[i][j];
		}
	}
	return c;
}

Mat operator*(Mat a, Mat b)
{
	try {
		if (a.c != b.r)
		{
			throw'Exception';
		}
	}
	catch (char c)
	{
		cout << "Order of Matrix is not same!!!" << endl;
		cout << "Please, Enter valid orders..." << endl;
		exit(0);
	}
	Mat c;
	c.r = a.r;
	c.c = a.c;
	for (int i = 0; i < a.r; i++)
	{
		for (int j = 0; j < a.c; j++)
		{
			c.m[i][j] = 0;
			for (int k = 0; k < a.c; k++)
				c.m[i][j] = a.m[i][k] + b.m[k][j];
		}
	}
	return c;
}

int main()
{
	int c;
	Mat m1, m2;
	m1.read();
	m1.display();
	m2.read();
	m2.display();
	do {
		cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit";
		cin >> c;

		switch (c) {
		case 1:
			Mat m3;
			m3 = m1 + m2;
			cout << "The Addition of Matrix: " << endl;
			m3.display();
			break;

		case 2:
			Mat m4;
			m4 = m1 - m2;
			cout << "The Addition of Matrix: " << endl;
			m4.display();
			break;

		case 3:
			Mat m5;
			m5 = m1 * m2;
			cout << "The Addition of Matrix: " << endl;
			m5.display();
			break;

		case 4:
			exit(0);
		}
	} while (c != 4);
}