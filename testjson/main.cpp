#include <iostream>
#include <fstream>
#include <cassert>
#include "../include/json/json.h"

#pragma comment(lib, "lib_json.lib")

using namespace std;
int main()
{	
	ifstream ifs;
	ifs.open("json.json");
	assert(ifs.is_open());
	//ifs.close();

	Json::Reader reader;
	Json::Value root;
	if (!reader.parse(ifs, root, false))
	{
		return -1;
	}

	//----------------------------------------------------
	//json数组
	
	string name;
	int age;
	name = root["name"].asString();
	age = root["age"].asInt();


	cout<<name<<endl;
	cout<<age<<endl;
	//====================================================

	//----------------------------------------------------
	//json数组
	
	/*int size = root.size();
	string name;
	int age;
	for (int i=0;i<size;i++)
	{
		string name = root[i]["name"].asString();
		int age = root[i]["age"].asInt();
	

		cout<<name<<endl;
		cout<<age<<endl;
	}*/
	//====================================================
	ifs.close();
	return 0;
}