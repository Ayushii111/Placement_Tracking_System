#include<iostream>
#include<fstream>
using namespace std;
string n,b,c,d,t;
string name,type,date,venue,p,l,sal;
int r,s,y,o;
int roll;
bool j=false;
void loginname()
{
	cout<<"Enter name & Rollno"<<"\n";
	cin>>name>>roll;
	ifstream f;
	f.open("Alumni.txt");
	while(1)
	{
	f>>n>>r>>b>>s>>c>>d>>y>>t;
	if(n==name && r==roll)
	{
	//	cout<<n<<"\t"<<r<<"\t"<<b<<"\t"<<s<<"\t"<<c<<"\t"<<d<<"\t"<<y<<"\t"<<t<<"\n";
	cout<<"valid"<<"\n";
	j=true;
	}
	if(f.eof())
	{
	  break;
	  
	}
	}
}
	void showEvent()
	{
		ifstream h;
		h.open("event.txt");
		cout<<"WELCOME"<<"\n";
		while(1)
		{
				h>>type>>date>>venue;
		 if(h.eof())
		 {
		 	break;
		 }
		cout<<type<<"\t"<<date<<"\t"<<venue<<"\n";
	    }
    }
	void job()
	{
		ifstream k;
		k.open("newjob.txt");
		cout<<"WELCOME"<<"\n";
		while(1)
		{
		k>>p>>l>>sal>>o;
		if(k.eof())
		{
			break;
		}
		
		cout<<"New Job Vacancies"<<"\n";
		cout<<p<<"\t"<<l<<"\t"<<sal<<"\t"<<o<<"\t";
		}
	}
main()
{
	int ch;
	cout<<"Press 1 to login"<<"\n";
	cin>>ch;
	if(ch==1)
	{
    loginname();
	if(j==true)
	{
	cout<<"Press 2 to show Event"<<"\n";
	cout<<"Press 3 To see New Job Vacancies"<<"\n";
	cin>>ch;
	if(ch==2)
	{
		showEvent();
	}
    }
    else
    {
    	cout<<"not valid";
	}
	if(ch==3)
	{
		job();
	}
}
}
	
//}
