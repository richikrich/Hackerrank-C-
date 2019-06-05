#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name; int age;
    virtual void getdata(){}
    virtual void putdata(){}
};

class Professor: public Person
{
public:
    int publications; int cur_id_p;
    static int prof_id; //defining a variable as static makes sure it's not destroyed after the class operations are done.
    //cur_id_p=prof_id;
    Professor()
    {
        cur_id_p=++prof_id;
    }
    void getdata()
    {
        cin>>name>>age>>publications;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id_p<<"\n";
    }
};

class Student: public Person
{
public:
    int marks[6]; int cur_id_s; int sum=0;
    static int stud_id; //defining a variable as static makes sure it's not destroyed after the class operations are done.
    //cur_id_s=stud_id;
    Student()
    {
        cur_id_s=++stud_id;
    }
    void getdata()
    {
        cin>>name>>age;
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
            sum+=marks[i];
        }
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id_s<<"\n";
    }
};

int Professor::prof_id=0;
int Student::stud_id=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];//This will throw error if -pedantic warning is treated as error

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
