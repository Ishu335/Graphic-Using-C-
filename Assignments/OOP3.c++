#include <iostream>
#include<string>
using namespace std;
class publication
{
protected:
	string title;
	float price;
public:
	publication()
{
		title=" ";
		price=0.0;
}
	publication(string t,float p)
	{
		title=t;
		price=p;
	}
public:
	void getdata()
	{
		cout<<"enter title of publication";
		cin>>title;
		cout<<"enter price of publication";
		cin>>price;
	}
	void putdata(void)
	{
		cout<<"Publication titles :"<<title<<endl;
		cout<<"Publication price :"<<price<<endl;
	}
};
class book:public publication
{
	int pagecount;
public:
	book()
{
		pagecount=0;
}
	book(string t,float p,int pc):publication(t,p)
	{
		pagecount=pc;
	}
	void getdata(void)
	{
		publication::getdata();
		cout<<"enter book page count:";
		cin>>pagecount;
	}
	void putdata(void)
	{
		publication::putdata();
		cout<<"book page count:"<<pagecount<<endl;
	}
};
class CD: public publication
{
	float time1;
public:
	CD()
{
		time1=0.0;
}
	CD(string t,float p,float tim):publication(t,p)
	{
		time1=tim;
	}
	void getdata(void)
	{
		publication::getdata();
		cout<<"enter tape's playing time:";
		cin>>time1;
	}
	void putdata(void)
	{
		publication::putdata();
		cout<<"tape's playing time:"<<time1<<endl;
	}
};
int main()
{
	cout<<endl<<"book data"<<endl;
	book b("C++",230,300);
	b.putdata();
	cout<<endl<<"CD data"<<endl;
	CD c("C++",100,120.5);
	c.putdata();
	cout<<"\n enter new details of book: \n";
	b.getdata();
	c.getdata();
	cout<<"\n \n book data entered by user:\n";
	b.putdata();
	c.putdata();
	return 0;
}

