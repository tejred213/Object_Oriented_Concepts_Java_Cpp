#include<iostream>

using namespace std;

class employee

{

private:

string ename;

int emid;

public:

employee();

employee(string n, int id);

~employee();

void display();

void accept();

void earnings();

};

void employee::earnings()

{

cout<<"This is earnings function!!";

};

employee::employee()

{

cout<<"\nThis is a constructor";

ename=" ";

emid=0.0;

}

employee::employee(string n, int id)

{

ename=n;

emid=id;

}

void employee::display()

{

cout<<"\nEmployee Name:"<<ename<<endl;

cout<<"Employee id:"<<emid<<endl;

}

employee::~employee()

{

cout<<"\nThis is Destructor";

}

void employee::accept()

{

cout<<"\nEnter name employee: ";

cin>>ename;

cout<<"\nEnter id: ";

cin>>emid;

}

class salariedEmp: public employee

{

double weekly;

public:

salariedEmp(double ws, string ename, int emid):employee(ename, emid)

{

weekly=ws; // parameterized constructor

}

salariedEmp();

void earnings();

};

salariedEmp::salariedEmp()

{

weekly=180; //default constructor

}

void salariedEmp::earnings()

{

cout<<"Salary Earnings are:"<<weekly<<endl;

}

class hourlyEmp : public employee

{

protected:

double wages;

double hours;

double hourlysal;

public:

hourlyEmp();

hourlyEmp( double w, double h, double hs, string ename, int emid): employee(ename, emid)

{

wages=w;

hours=h;

hourlysal=hs;

}

void earnings();

};

hourlyEmp::hourlyEmp()

{

accept();

wages=0.0;

hours=0.0;

hourlysal=0.0;

}

void hourlyEmp::earnings()

{

if(hours<40)

{

hourlysal=hours*wages;

}

else

{

hourlysal=40*wages+((hours-40)*wages)*1.5;

}

cout<<"The hourly Salary is: "<<hourlysal<<endl;

}

class commissionEmp:public employee

{

protected:

double grosssale, commissionrate, commissionsal;

public:

commissionEmp();

commissionEmp(double gs, double cr, double cs, string ename, int eid):employee(ename, eid)

{

grosssale= gs;

commissionrate= cr;

commissionsal= cs;

}

void earnings();

};

commissionEmp::commissionEmp()

{

accept();

grosssale=0.0;

commissionrate=0.0;

commissionsal=0.0;

}

void commissionEmp::earnings()

{

commissionsal = grosssale*commissionrate;

cout<<"Commissioned Earnings are: "<<commissionsal<<endl;

}

int main()

{

employee e1;

e1.accept();

e1.display();

employee e2("Tejas",2210);

e2.display();

salariedEmp se1;

se1.display();

se1.earnings();

salariedEmp se2(1000,"Tejas",44);

se2.display();

se2.earnings();

hourlyEmp hrs1;

hrs1.display();

hrs1.earnings();

hourlyEmp hrs2(22,2,4,"abc",5678);

hrs2.display();

hrs2.earnings();

commissionEmp ce1;

ce1.display();

ce1.earnings();

commissionEmp ce2(55,1,3,"cmp",2243);

ce2.display();

ce2.earnings();

}