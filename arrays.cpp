#include <iostream>
#include <array>

/*int main(){
  std::array <int,6> myarray;
  int x;
  std::cin>>x;
  myarray[2] = x;
  std::cout << myarray[2] <<" "<< myarray[1];
  //std::cout << x << std::endl; // Testing line
  return 0;
  
  
}
*/




int main(){
  std::array<int,6> mylist;
  for(int x = 0 ; x <mylist.size(); x++){
    mylist[x] = x;
  }
  //return mylist;

  for(int i = 0; i<mylist.size();i++ ){
    std:: cout << mylist[i]<< std::endl;
  }
  return 0;
  
}
