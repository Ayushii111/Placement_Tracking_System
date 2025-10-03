#include<iostream>
#include<fstream>
using namespace std;
string n,b,c,d,t,dep,pas,name,mob,p;
string type,venue,date,bat,sal,l;
int i,r,s,y,id,o;
bool j=false;
void Alumni()
{
	ofstream f;					
	f.open("Alumni.txt",ios::app);
	cout<<"Enter Name,Roll No,Branch & Semester"<<"\n";
	cin>>n>>r>>b>>s;
	cout<<"Enter Company,Designation,Year of Experience"<<"\n";
	cin>>c>>d>>y;
	cout<<"Enter current city"<<"\n";
	cin>>t;
	f<<n<<"\t"<<r<<"\t"<<b<<"\t"<<s<<"\t"<<c<<"\t"<<d<<"\t"<<y<<"\t"<<t<<"\n";
	f.close();
}
void search(string cname)
{
	ifstream f;
	f.open("Alumni.txt");
	while(1)
	{
	f>>n>>r>>b>>s>>c>>d>>y>>t;
	if(f.eof())
	{
		break;
	}
	if(c==cname)
	{
		cout<<n<<"\t"<<r<<"\t"<<b<<"\t"<<s<<"\t"<<c<<"\t"<<d<<"\t"<<y<<"\t"<<t<<"\n";
	}
	}
	
}

void showresult()
{
	string company[]={"TCS","Capegemini","Accenture","Wipro","Google"};
	int count[]={0,0,0,0,0};
	int s=0;
	ifstream f;
	f.open("Alumni.txt");
	while(1)
	{
	f>>n>>r>>b>>s>>c>>d>>y>>t;
	if(f.eof())
	{
		break;
	}
	if(c=="TCS")
	{
		count[0]++;
	}
	else if(c=="Capegemini")
	{
		count[1]++;
	}
	else if(c=="Accenture")
	{
		count[2]++;
	}
	else if(c=="Wipro")
	{
		count[3]++;
	}
	else
	{
		count[4]++;
	}
}
	s=0;
	for(i=0;i<5;i++)
	{
		cout<<company[i]<<"\t"<<count[i]<<"\n";
		s=s+count[i];
	}
	cout<<"total placed canditates"<<s<<"\n";
}
void regis()
{
	ofstream g;
	g.open("admin.txt",ios::app);
	cout<<"enter your id,name,department,mobile number & password"<<"\n";
	cin>>id>>name>>dep>>mob>>pas;
	g<<id<<"\t"<<name<<"\t"<<dep<<"\t"<<mob<<"\t"<<pas<<"\n";
	
	g.close();
}
void login()
{
	int w;
	string z;
	cout<<"enter id & password"<<"\n";
	cin>>w>>z;
	ifstream g;
	g.open("admin.txt");

	while(1)
	{
		g>>id>>name>>dep>>mob>>pas;
	
		if(w==id&&z==pas)
		{
			cout<<"valid"<<"\n";
			j=true;
		}
		
			if(g.eof())
		{
			break;
		}
	}
	
	
}
void byexp(int exp)
{
	ifstream f;
	f.open("Alumni.txt");
	while(1)
	{
	f>>n>>r>>b>>s>>c>>d>>y>>t;
	if(f.eof())
	{
		break;
	}
	if(y==exp)
	{
		cout<<n<<"\t"<<r<<"\t"<<b<<"\t"<<s<<"\t"<<c<<"\t"<<d<<"\t"<<y<<"\t"<<t<<"\n";
	}
	}	
}
void AddEvent()
{
	
	ofstream h("event.txt",ios::app);
	cout<<"TYPE,DATE & VENUE"<<"\n";
	cin>>type>>date>>venue;
	h<<type<<"\t"<<date<<"\t"<<venue<<"\n";
	h.close();
}
void show()
{
	ofstream k("newjob.txt",ios::app);
	cout<<"post"<<"\n";
	cin>>p;
	cout<<"Location"<<"\n";
	cin>>l;
	cout<<"Salary"<<"\n";
	cin>>sal;
	cout<<"For Batch"<<"\n";
	cin>>o;
	k<<p<<"\t"<<l<<"\t"<<sal<<"\t"<<o<<"\n";
	k.close();
}
main()
{
 int exp;
 string cname;
 int ch;
 
// {
 cout<<"Press 1 To Register"<<"\n";
 cout<<"Press 2 To Login"<<"\n";
 cout<<"Press 3 To Exit"<<"\n";
 cin>>ch;

 if(ch==1)
 {
 	regis();
 }
 if(ch==2)
 {
 	login();
 	cout<<"Press 3 To Add Event"<<"\n";
 	cout<<"Press 4 To Add new job vacancies"<<"\n";
 	cin>>ch;
 	if(ch==3)
 	{
 	AddEvent();
    }
    if(ch==4)
    {
    	show();
	}
	 	
 	
 //	if(j==true)
 //	{
 //		cout<<"Press 1 To Add Alumini"<<"\n";
 //		cout<<"Press 2 To Search By company"<<"\n";
 //		cout<<"Press 3 To count number of students placed"<<"\n";
 //		cout<<"Press 4 To Search By their experience"<<"\n";
 //		cin>>ch;
//		 if(ch==1)
  //     {
    // 	Alumni();
       //}
// else if (ch==2)
 //{
 //	cout<<"Enter Company Name To Be Searched";
 //	cin>>cname;
 //	search(cname);
 //} 
  //else if(ch==3){
  
  //showresult();
   //}
	// }
	 //else
	 //{
	 //	cout<<"Wrong username and password"<<"\n";
	 //}
 //}
 //if(ch==3)
 //{
 //	break;
 //}
 //if(ch==4)
 //{
 //	cout<<"Enter year of experience";
 //	cin>>exp;
 //	byexp(exp);
 }
 //}
}
