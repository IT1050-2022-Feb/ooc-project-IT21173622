#include <iostream>

using namespace std;
//engineer class
class engineer{
protected:
int Id;
string name;
string type;
public:
engineer();
engineer(int eid,string ename,string etype);
void engineerdetails();
void worksguiddetails();
};
//engineer class implimentation
engineer::engineer(){}
engineer::engineer(int eid,string ename,string etype){
  Id=eid;
  name=ename;
  type=etype;
}
void engineer::engineerdetails(){
  cout<<"id : "<<Id<<endl<<"name :"<<name<<endl<<"type: "<<type<<endl;
}
void engineer:: worksguiddetails(){}




//civil class
class civil:public engineer{
private:
string state;
public:
civil();
civil(int cid,string cname,string ctype,string s);
void cheackmetrial();

};


//civil class implimentation
civil::civil(){}
civil::civil(int cid,string cname,string ctype,string s):engineer(cid,cname,ctype)
{
  state=s;
}
void civil :: cheackmetrial(){}

//main
int main(){

engineer e1(101,"eline","A type");
  e1.engineerdetails();
  civil c1(102,"jone","B type","seniar");
  c1.engineerdetails();
}
