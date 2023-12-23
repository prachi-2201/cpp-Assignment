/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/


class triangle{
	int l1,l2,l3;
	public : 
			triangle(int a,int b,int c)
			{
				l1=a;
				l2=b;
				l3=c;
			}
			void check()
			{
				if(l1==l2==l3)
				{
					cout<<"Triangle is equilateral";
				}
				else if(l1==l2||l2==l3||l3==l1)
				{
					cout<<"Traingle is isoscelene";
				}
				else
				{
					cout<<"Triangle is scalene";
				}
			}
};
main()
{
	cout<<"Enter length of triangle : "<<endl;
	cin>>a>>b>>c;
	triangle t1(a,b,c);
	t1.check();
}

