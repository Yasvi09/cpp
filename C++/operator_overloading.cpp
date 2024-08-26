//operator overloading

#include<iostream>
using namespace std;

class Image{
	int height,width;
	
	public:
		Image(int h=0,int w=0)
		{
			height=h;
			width=w;
		}
		
		void display()
		{
			cout<<"\n\n\t Height = "<<height;
			cout<<"\n\n\t Width = "<<width;
		}
		
		Image operator+(Image &obj)//obj refers to I2
		{
			Image I;
			I.height=height+obj.height;
			//I3.height=I1.heightI2.height
			I.width=width+obj.width;
			return I;
		}
		
};

main()
{
	Image I1(100,150) ,I2(200,150) ;
	Image I3;
	
	cout<<"\n\n\t Image-1----------";
	I1.display();
	
	cout<<"\n\n\t Image-2----------";
	I2.display();
	
	I3=I1+I2; //operator "+" will be overloaded.
	
	cout<<"\n\n\t Image-3----------";
	I3.display();
}
