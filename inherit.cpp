#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
    void display(){
        cout<<"\nname ="<<name<<"\nage ="<<age;
    }
    Person()
    {
        cout<<"\n person default";
        name="";age=18;
    }
    Person(string name ,int age){
        cout<<"\n person parameterized";
        this->name=name;
        this ->age=age;
    }

};
class Student : public Person{
    string rollno;
    public:
    Student()
    {
        cout<<"\n student default";
        rollno="25csu049";}
        Student(string rno ,string nm,int ag):Person(nm , ag){
            cout<<"\nstudent parameterized";
            rollno=rno;
        }
    
    void display_student(){
        display();
        cout<<"\nroll no is "<<rollno;
    }
};
int main(){
    Student s1("25CSU000","Jaadu",19);
    s1.display_student();
    cout<<endl<<"next"<<endl;
    s1.display();

}