

#include<iostream>
using namespace std;
class Shape{
 public:

 void show()
{

}

 //CODE
};

class Rectangle : public Shape{

 public:
  //CODE
  Rectangle()
  {

      cout<<"Showing a Rectangle"<<endl;
  }
};

class Circle : public Shape{

  public:
       Circle()
  {

      cout<<"Showing a Circle"<<endl;
  }

//CODE
};

int main() {
    Shape *ptr;
    int choice;
    cin >> choice;

    if (choice==1)
        ptr = new Rectangle();
      else if(choice==2)
            ptr = new Circle();

    ptr->show();
    return 0;
}
