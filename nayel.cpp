#include<iostream>
using namespace std;

struct person
{
   string name ;
   int age;
  float height;
};
void print(person p){

cout<<p.name<<endl;
cout<<p.age<<endl;
cout<<p.height<<endl;
}
void change(person&p,int age ){

    p.age=age;

}
int main(){

person p1;
person p2;
cout<<"enter name,age,height"<<endl;

cin>>p1.name;
cin>>p1.age;
cin>>p1.height;
p2=p1;
change(p1,10);
change(p2,50);
print(p1);
print(p2);

return 0;

}