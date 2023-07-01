#include<iostream>
using namespace std;
class Animal{
	public:
		void info(){
			cout<<"i am an animal"<<endl;
		}
};
class Dog : public  Animal{
	public:
		void bark(){
			cout<<"i am Dog .Woof Woof"<<endl;
		}
};
class cat : public Animal{
	public:
		void meowing(){
			cout<<"i am cat meowing "<<endl;
		}
};
int main(){
	cat c;

	Dog d;
	d.bark();
	d.info();
	c.info();
	c.meowing();
	
}
