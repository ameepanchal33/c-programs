#include<iostream>
using namespace std;
class animal{
	public:
	int dog(){
		cout<<"barking";
	}
	int cat(){
		cout<<"meowing";
	}
};
class eat : public animal{
	public:
	int eat1(){
		cout<<"eating";
	}
};
int main(){
	eat e;
	e.dog();
	cout<<endl;
	e.cat();
	cout<<endl;
	e.eat1();
}
