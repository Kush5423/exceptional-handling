#include <iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	try{
		if(age<18)
		{
			throw("you cannot  create an account");
		}
		cout<<"you can create a account"<<endl;
	}
	catch(const char*messsage)
	{
		cout<<message;
	}
    return 0;
}