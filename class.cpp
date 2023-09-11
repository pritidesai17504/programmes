#include<iostream>
using namespace std;
#include <iomanip>
#include <string.h>


class item
{
        char name[40];

        int code;

        float cost;

public:

        void getdata(char *n, int c, float co)

    {
        strcpy(name, n);
		code = c;
		cost = co;
	}

	void display();
};

void item::display()

{

	cout.precision(2);

	cout.setf(ios::fixed,ios::floatfield);

	cout.setf(ios::showpoint);

	cout.setf(ios::left, ios::adjustfield);

	cout << setw(40) << name << code;

	cout.setf(ios::right, ios::adjustfield);

	cout << setw(15) << cost << endl;

}



int main()

{
	item a[2];
    int i=0;
	a[0].getdata("Tarbo C++", 1001, 250.95);
	a[1].getdata("C primer", 905, 95.7);

	cout << setw(10) << "name" << setw(34) << "code" << setw(15) << "cost" << endl;

	for (int i = 0; i < 60; i++)
		cout << "=";
	cout << endl;
	for (i = 0; i < 2; i++)
		a[i].display();
}

