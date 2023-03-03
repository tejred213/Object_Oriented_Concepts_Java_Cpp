#include<iostream>
#include<fstream>
using namespace std;


class student{
int roll_no;
char ch[100];
public:
void getdata(){
cout<<"Please enter roll no. and name of student: "<<endl;
cin>>roll_no>>ch;
}
void putdata(){
cout<<"Roll"<<roll_no<<endl;
cout<<"Name"<<ch<<endl;
}
};


int main(){
student s1,s2;
s1.getdata();
fstream file;
file.open("xyz1.txt",ios::out);
file.write((char*)&s1, sizeof(s1));
file.close();
file.open("xyz1.txt",ios::in);
file.read((char*)&s2, sizeof(s2));
s2.putdata();
file.close();
return 0;
}
