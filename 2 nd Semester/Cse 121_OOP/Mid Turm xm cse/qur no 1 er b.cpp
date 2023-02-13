#include <iostream>

using namespace std;

class square
{
  private:
      int length;

  public:
    void set_length(int a)
    {
        length= a;
    }

inline int getarea(void)
{
     return length*length;
    cout<< length <<endl;}

};
/*int square::getarea(void)

{


}*/

/*void square::set_length(int a)
{
    length = a;
}*/


int main()
{
   square square1;
   int area = 0.0;

    square1.set_length(23);
    area = square1.getarea();
    cout<<"area of square1 :" << area << endl;
    return 0;


}
