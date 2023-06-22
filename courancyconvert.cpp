#include<iostream>
using namespace std;
float doller(float ruppes){
//	doller=81.95;
  float i=0,doller=0;
  if(ruppes>0){
  	
  		doller=ruppes/81.95;
	}
  return doller;
  cout<<endl;
}

float dinner(float ruppes){
	//	dinner=266.86;
	float dinner=0;
	if(ruppes>0){
		dinner=ruppes/266.86;
	}
	return dinner;
	cout<<endl;
}

float pound(float ruppes){
//	pound=104.82;
    float pound;
    if(ruppes>0){
	 pound=ruppes/104.82;
    }
	return pound;
	cout<<endl;
}

//int ruppes(int ruppes )
int main()
{
	float ruppes;
	cout<<"enter Indian ruppes :";
	cin>>ruppes;
	cout<<"doller is:"<<doller(ruppes)<<endl;
	cout<<"dinner is:"<<dinner(ruppes)<<endl;
	cout<<"pound is:"<<pound(ruppes);
	
}
