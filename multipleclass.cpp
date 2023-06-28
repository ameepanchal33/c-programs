#include<iostream>
using namespace std;
class A{
	public:
		int a;
		int b;
	public:
		int get_data(){
			a=5;
			b=6;
		}
		int put_data(){
			cout<<a;
			cout<<b;
		}
};
class B: public A{
	public:
		int c;
		int d;
	public:
		int getdata(int l,int k){
			c=l;
			d=k;
		}
		int putdata(){
			cout<<c;
			cout<<d;
		}
};

int main(){
 // A a;
 // a.getdata();
 // a.putdata();	
  
  B b;
  b.getdata(7,8);
  b.putdata();
  b.get_data();
  b.put_data();	
  
}
