#include<iostream>
using namespace std;
//default constructor,parameterised and destructor, create object in main function
class student
{
private:
int erpid,mob,rollno;
string name,parent;
public:
//student();
//student(int erp,int m,int r,string n,string p);
//~student();
void getdata();
void display();
};
//student::~student(){
// cout<<"\nThis is a Destructor";
//}
//
//student::student(){
// erpid=386; mob=123; rollno=11;
// name="abc";parent="xyz";
//}

void student::getdata()
{
cout<<"Enter Erp Id: ";
cin>>erpid;
cout<<"Enter mobile number: ";
cin>>mob;
cout<<"Enter Roll no: ";
cin>>rollno;
cout<<"Enter Name of student: ";
cin>>name;
cout<<"Enter Parent's name: ";
cin>>parent;
}

void student::display()
{
cout<<"\nErp Id: "<<erpid<<"\nmobile number: "<<mob;
cout<<"\nRoll no: "<<rollno;
cout<<"\nName of student: "<<name;
cout<<"\nParent's name: "<<parent;
}

int main(){
// student s1;
// s1.display();
// student s2(100,211,30,"Anaya","pqr");
// s2.display();
// return 0;
student s[3];
for(int i=0;i<3;i++){
s[i].getdata();
}
for(int i=0;i<3;i++){
s[i].display();
}
return 0;
}
