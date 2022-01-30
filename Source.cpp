#include <iostream>
#include <string>
using namespace std;
class contactinfo {
private:
	double mbno;
	string address;
public:
	
	double getmobileno()
	{
		return mbno;
	}
	string getaddress()
	{
		return address;
	}
	void setaddress(string a)
	{
		address = a;
	}
	void setmobileno(double n)
	{
		mbno = n;
	}
	void disp()
	{
		cout << "\tinfo " << endl;
		cout << "mbno = " << mbno << endl;
		cout << "address = " << address << endl;
	}

};
<<<<<<< HEAD
class person:contactinfo
{
	string name;
	double cnic;
	person()
	{
		name = " ";
		cnic = 0;
	}
	string getname() {
		return name;
	}
	double getcnic() {
		return cnic;
	}
	void setname(string n)
	{
		name = n;
	}
	void setcnic(double c)
	{
		cnic = c;
	}
	void disp()
	{
		cout << "name = " << name << endl;
		cout << "cnic = " << cnic << endl;
	}
};
void main()
{
	contactinfo obj;
=======
void adddata(contactinfo obj)
{
	
	obj.setname("Zahoor Ahmed");
>>>>>>> e191b54ae865a9828527fedf17617a9ce33bf702
	obj.setaddress("XYZ");
	obj.setmobileno(023564546);
	obj.disp();
<<<<<<< HEAD
<<<<<<< HEAD
	obj = new person();
	obj.setname("Zahoor Ahmed");
	obj.setcnic(23656622345);
	obj.disp();
=======
	obj.setname("tajamul");
	obj.setcnic(34475643);
	obj.setaddress("abs");
	obj.setmobileno(21453654);
>>>>>>> c5d06e89a712fdde768ea06b23580baf27ec2be0
=======
}
void main()
{
	contactinfo obj;
	adddata(obj);
>>>>>>> e191b54ae865a9828527fedf17617a9ce33bf702
	system("pause");
}