//
//  main.cpp
//  workproject_5
//
//  Created by 20141105043dj on 15/12/16.
//  Copyright (c) 2015年 20141105043dj. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    class Student
    {
    public:
        void get_value()
        {
            cin>>num>>name>>sex;
        }
        void display()
        {
            cout<<"num:"<<num<<endl;
            cout<<"name:"<<name>>endl;
            cout<<"sex:"<<sex<<endl;
        }
    private:
        int mun;
        string name;
        char sex;
    };
    class Studentt1:public Student
    {
    public:
        void get_value_1()
        {
            cin>>age>>addr;
        }
        void display_1()
        {
            cout<<"num:"<<num<<endl;
            cout<<"name:"<<num<<endl;
            cout<<"sex:"<<num<<endl;
            cout<<"age:"<<num<<endl;
            cout<<"address:"<<num<<endl;
        }
    private:
        int age;
        string addr;
    }
}
int main()
{
    Student1 stud;
    stud.get_value();
    stud.get_value_1();
    stud.display();
    stud.display_1();
    return 0;

}
