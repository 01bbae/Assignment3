#include <iostream>
using namespace std;

class Pet{
  public:
    Pet(string name,int age,string type, double weight);
    string getName();
    int getAge();
    string getType();
    double getWeight();
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    string name;
    int age;
    string type;
    double weight;
};

Pet::Pet(string name,int age,string type, double weight){
  this->name=name;
  this->age=age;
  this->type=type;
  this->weight=weight;
}
string Pet::getName(){
  return name;
}
int Pet::getAge(){
  return age;
}
string Pet::getType(){
  return type;
}

double Pet::getWeight(){
  return weight;
}

void Pet::setName(string name){
  this->name = name;
}

void Pet::setAge(int age){
  this->age=age;
}

void Pet::setType(string type){
  this->type=type;
}

void Pet::setWeight(double weight){
  this-> weight = weight;
}

int main(int argc, char const *argv[]) {
  Pet* pet1 = new Pet("jeremy",5,"turtle",5.0);
  Pet* pet2 = new Pet("jay",2,"dog",30.0);
  cout << pet1 -> getName() << endl;
  cout << pet2 -> getName() << endl;

  return 0;
}
