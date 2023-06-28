#include<iostream>
using namespace std;
class animal{
	int eat(){
		cout<<"eating"<<endl;
	}
};
class dog extends animal{
	int bark(){
		cout<<"barking";
	} 
};
class cat extends dog{
	int meow(){
		cout<<"meowing"<<endl;
	}
};
intmain()
{ 
  cat c;
  c.eat;
  c.bark;
  c.meow;

	
}
