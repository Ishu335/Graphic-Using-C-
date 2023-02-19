// Assignmet No : 7
//PROGRAM
#include <iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	typedef map<string,int>mapType;
	mapType populationMap;
	populationMap.insert(pair<string,int>("Maharashtra",3894580));
	populationMap.insert(pair<string,int>("madhya pradesh",5674893021));
	populationMap.insert(pair<string,int>("goa",108746));
	populationMap.insert(pair<string,int>("gujrat",432678456));
	populationMap.insert(pair<string,int>("punjab",67895532));
	mapType::iterator iter;
	cout<<"   population of states of India    \n";
	cout<<"\n size of population map"<<populationMap.size()<<"\n";
	string state_name;
	cout<<"enter the name of the state:\n";
	cin>>state_name;
	iter=populationMap.find(state_name);
    
	if(iter!=populationMap.end())
	    cout<<state_name<<" population is"<<iter->second;
	else
        cout<<"key is not populationMap"<<"\n";
	populationMap.clear();

	return 0;

}
