#include <iostream>
#include <string>
using namespace std;
class contactinfo {
private:
	string name;
	double cnic;
	double mbno;
	string address;
public:
	string getname() {
		return name;
	}
	double getcnic() {
		return cnic;
	}
	double getmobileno()
	{
		return mbno;
	}
	string getaddress()
	{
		return address;
	}
	void setname(string n)
	{
		name = n;
	}
	void setaddress(string a)
	{
		address = a;
	}
	void setcnic(double c)
	{
		cnic = c;
	}
	void setmobileno(double n)
	{
		mbno = n;
	}
	void disp()
	{
		cout << "\tinfo " << endl;
		cout << "name = " << name << endl;
		cout << "cnic = " << cnic << endl;
		cout << "mbno = " << mbno << endl;
		cout << "address = " << address << endl;
	}

};
void main()
{
	contactinfo obj;
	obj.setname("Zahoor Ahmed");
	obj.setaddress("XYZ");
	obj.setcnic(23656622345);
	obj.setmobileno(023564546);
	obj.disp();
	obj.setname("tajamul");
	obj.setcnic(34475643);
	obj.setaddress("abs");
	obj.setmobileno(21453654);
	system("pause");
}