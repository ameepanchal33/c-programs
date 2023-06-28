#include<iostream>
using namespace std;
class area{
	public:
		int Squarearea(int length){
			cout<<"area of sqaure:"<<length*4<<endl;
		}
		int Rectanglearearea(int length,int breadth){
			cout<<"area of rectangle:"<<length*breadth<<endl;
		}
	
};
int main(){
	area a;
	a.Rectanglearearea(4,5);
	a.Squarearea(4);
	
}

