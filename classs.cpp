#include<iostream>
using namespace std;
class room{
	public:
	int a;
	int b;
	
	int getdata(){
		int a=8;
		int b=9;
		int res=a+b;
		cout<<res;
	}
};
int main()
{
	room r;
	r.getdata();
	
}
