/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int c,count=0;
	int flag=0;
	do
	{

		cin>>c;
		if(c==42)
        {
            flag=1;
        }
		if(c>=100||c<=-100)
        {

            break;
        }
		if(c!=42&&(c<100&&c>-100)&&flag==0)
		{
			v.push_back(c);
			count++;

		}
	}while(c<100&&c>-100);
	for(int i=0;i<count;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}*/
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {

	string str[101];
	int k=0;
    /*for(int i=0;i<101;i++)
    {
        str[i]="";
    }*/
    int j=0;
    getline(cin,str[k]);
	while(str[k]!="42")
	{
		k++;
		getline(cin,str[k]);
		//k++;
        //cout<<"*****************"<<endl;
	}

	int c=0;
	//scanf("%d",&c);
	/*while(c<99)
	{
		scanf("%d",&c);
	}*/
	for(int i=0;i<k;i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
