#include<bits/stdc++.h>
using namespace std;
class solution{
  private:
    string name;
    int age;
  public:
    void setname(string name){
        this->name=name;
    }
    void setage(int age){
        this->age=age;
    }
    string getname(){
        return name;
    
    }
    int getage(){
        return age;
    }
};
int main(){
    solution obj;
    obj.setname("Shivam");
    obj.setage(21);
    cout<<"The name is "<<obj.getname()<<endl;
    cout<<"The age is "<<obj.getage();
    
  return 0;
}