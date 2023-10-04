#include<iostream>
using namespace std;

class shape
{
public:
  int width, height;
  float area;


};

class triangle:virtual public shape
{
public:
  float show ()
  {

    width = 10;
    height = 5;
    area = 0.5 * width * height;

    return area;

  }
};


class rectangle:virtual public shape
{
public:
  float show ()
  {

    width = 10;
    height = 10;
    area = width * height;

    return area;
  }
};


class compare:virtual public triangle, virtual public rectangle
{

public:
  void show (float areatri, float arearec)
  {

    if (areatri > arearec)
      {

	cout << "Triangle is  bigger";

      }
    else
      {

	cout << "Rectangle is bigger";

      }


  }
};


int
main ()
{

  compare *p = new compare ();
  float areatri = p->triangle::show ();
  float arearec = p->rectangle::show ();
  p->show (areatri, arearec);

  return 0;
}
