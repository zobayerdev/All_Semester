#include <iostream>
#include<conio.h>
using namespace std;

class Server {
  public:
    void S() {
    cout << "This is class Server\n" ;
  }
};

class OtherServer : public Server {
  public:
    void S() {
    cout << "This is class OtherServer\n" ;
   }
};


int main() {
  Server myServer;
  OtherServer myOtherServer;

  myServer.S();
  myOtherServer.S();
  getch ();
}
