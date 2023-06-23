#include<iostream>
using namespace std;
int volume(int value){
	cout<<"cube volume:"<<(value*value*value);
}
int volume(int l, int b,int h){
	cout<<"cuboid volue:"<<(l*b*h);
	}
float volume(float pi,float radious){
	cout<<"sphere volume:"<<(pi*radious*radious);
}
float volume(float pi,int r,int h){
	cout<<"cylinder volume"<<(pi*r*r*h);
}

int main()
{
	volume(5);
	cout<<endl;
	volume(4,5,6);
	cout<<endl;
	volume(3.14f,5.0f);
	cout<<endl;
	volume(3.14f,5,6);
	
}
