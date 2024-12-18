#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>

int processArray(std::vector<int> &array) {
 int odd = 0 
 for(int i=0; i<array.size(); i++){
  if(array[i]%2!=0) odd = array[i];
 }
 return odd;
}

int main(void) {
  std::vector<int> array;
  int val;
  while (std::cin >> val) {
    if (val < 0) break;
    array.push_back(val);
  }
  std::cout << processArray(array) << std::endl;
  return 0;
}



