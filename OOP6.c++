

//PROGRAM    
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Item
{
	public:
    char name[10];
    int quantity;
    int cost;
    int code;
    bool operator==(const Item& i1)
    {
        if(code==i1.code)
        return 1;
        return 0;
    }
    bool operator<(const Item& i1)
    {
        if(code<i1.code)
        return 1;
        return 0;
    }
};
vector<Item>o1;
void print(Item &i1);
void display();
void insert();
void search();
 void dlt();
 bool compare(const Item &i1,const Item &i2)
 {
     return i1.cost<i2.cost;
 }
 int main()
     {
	 int ch;
     do
     {
         cout<<"\n\n****Menu***";
         cout<<"\n 1.Insert";
         cout<<"\n 2.Display";
         cout<<"\n 3.Search";
         cout<<"\n 4.Sort";
         cout<<"\n 5.Delete";
         cout<<"\n 6.Exit";
         cout<<"\n Eter Your Choice:";
         cin>>ch;

         switch(ch)
         {
             case 1:
             insert();
             break;

             case 2:
             display();
             break;

             case 3:
             search();
             break;

             case 4:
             sort(o1.begin(),o1.end(),compare);
             cout<<"\nSorted on Cost";
             display();
             break;

             case 5:
             dlt();
             break;

             case 6:
             exit(0);
         }
     }
     while(ch!=7);
     return 0;
     }
void insert()
{
    Item i1;
    cout<<"\n Enter Item Name";
    cin>>i1.name;
    cout<<"\n Enter Item Quantity";
    cin>>i1.quantity;
    cout<<"\n Enter Item Cost";
    cin>>i1.cost;
    cout<<"\n Enter Item Code";
    cin>>i1.code;
    o1.push_back(i1);

}
void display()
{
    for_each(o1.begin(),o1.end(),print);

}
void print(Item &i1)
{
    cout<<"\n";
    cout<<"\n Item Name"<<i1.name;
    cout<<"\n Item Quantity"<<i1.quantity;
    cout<<"\n Item Cost"<<i1.cost;
    cout<<"\n Item Code"<<i1.code;
}
void search()
{
    vector<Item>::iterator p;
    Item i1;
    cout<<"\n Enter Code to Search Item";
    cin>>i1.code;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end())
    {
        cout<<"\n Not found";
    }
    else
    {
        cout<<"\n Found"<<endl;
        cout<<"\n Item Name"<<p->name<<endl;
        cout<<"\n Item Quantity"<<p->quantity<<endl;
        cout<<"\n Item Cost"<<p->cost<<endl;
        cout<<"\n Item Code"<<p->code<<endl;
    }
}
void dlt()
{
    vector<Item>::iterator p;
    Item i1;
    cout<<"enter Item Code to delete";
    cin>>i1.code;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end())
    {
        cout<<"\n Not found";
    }
    else
    {
        o1.erase(p);
        cout<<"\nDeleted";
    }
}


