/*
*
*  Program: arrays.cc
*  Name: Zachary Knoblauch
*  Date: 8/April/2019
*  Description: Program prints the sizes of all five (5) arrays created
*
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

const int SIZE = 10;

int main(int argc, char const *argv[]) {

  double a_list[] = {3.2, 4.6, 7.0, 12.5, 8.3, 9.1};
  int nums[SIZE];
  char vowels[] = {'A', 'E', 'I', 'O', 'U',};
  string name[SIZE];
  float values[SIZE];

  cout << "The size of the array \"a_list\" is " << sizeof(a_list) << endl;
  cout << "The size of the array \"nums\" is " << sizeof(nums) << endl;
  cout << "The size of the array \"vowels\" is " << sizeof(vowels) << endl;
  cout << "The size of the array \"name\" is " << sizeof(name) << endl;
  cout << "The size of the array \"values\" is " << sizeof(values) << endl;

  return 0;
}
