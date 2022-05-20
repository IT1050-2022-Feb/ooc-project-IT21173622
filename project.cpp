#include <iostream>
#include <cstring>
using namespace std;
class project{
	private:
		int id;
		string name;
		string type;
		int cost;
		string details;
		
	public:	
	project();
	project(int pid,string pname,string ptype,int pcost,string pdetails);
	void addproject();
	void Editproject();
	void deletproject();
	void setcost();
};


	project::project(){}
	project::project(int pid,string pname,string ptype,int pcost,string pdetails){
  id=pid;
  name=pname;
  type=ptype;
  cost=pcost;
  details=pdetails;
  
}
void project:: addproject(){
cout<<"ID: "<<id<<endl<<"Name:"<<name<<endl<<"type: "<<type<<endl<<"cost: "<<cost<<endl<<"project details: "<<details;
  
}
void project:: deletproject(){
}

void project:: Editproject(){
}

void project:: setcost(){
}


int main(){
	project p1(110,"b1 project","A type",15000,"constrction project");
	p1.addproject();
}