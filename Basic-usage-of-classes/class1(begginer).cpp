#include<iostream> // basic cpp template
#include<string>

using namespace std;

// creating a class names dog
class dog{
// default value in a class will always be private, make sure to set it to public
public:
  void setDog(int dogSize, int setLegs){
    cout<<"set you're dog size below"<<endl;
    cin>>dogSize;
    cout<<"ok now lets set how many legs your dog has ;) "<<endl;
    cin>>setLegs;
    cout<<"aight we have set your dogs size and legs"<<endl;
  }
  
};


// main function
int main(){
  dog ep;
  ep.setDog(0, 0);
  return 0;
}


// OUTPUT IS SHOWN BELOW://
// set you're dog size below//
// 21//
// ok now lets set how many legs your dog has ;)//
// 4//
// aight we have set your dogs size and legs//
