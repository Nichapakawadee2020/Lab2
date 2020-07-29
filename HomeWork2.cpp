# include<string>
# include <iostream>
using namespace std;
void cal_com(float, float, float);

int main()
{
 string name;
 float salary ;
 float sale ;
 float com  ;
 float income;
 cout<<"Enter Name :";
 cin>>name;
 cout<<"\nEnter Sale: ";
 cin>>sale;
 cout<<"\nEnter Salary : ";
 cin>>salary;
 cout<<"\nEnter Commission Percent :";
 cin>>com;
 cout<<"\nYour Name = "<<name<<endl;
 cal_com(salary , sale , com );	
 
 return(0);
}
void cal_com(float salary,float sale,float com)
{
cout<<"\nTotal Revenue "<<salary + (sale*(com/100)) <<" Bath"<<endl;

}