#include<iostream>
using namespace std;


//&&开关特性 
class Solution
{
	public:
		int fsum(int n)
		{
			int sum=0; 
			n&&(sum=n+fsum(n-1));
			return sum;
		}
};

//内部类的方法

class Solution2
{
	public:
	class A
	{
		public:
		A()
		{
			count+=i;
			i++;
		}
	};
	
	int fsum(int n)
	{
		A* p=new A[n]; 
		delete[] p;
		return count;
	}
	
	private:
		static int count;
		static int i;
 } ;

int Solution2::count=0;
int Solution2::i=1;

int main()
{
	Solution s;
	cout<<s.fsum(5)<<endl;
	Solution2 s2;
	cout<<s2.fsum(5)<<endl;
	return 0;
 } 
