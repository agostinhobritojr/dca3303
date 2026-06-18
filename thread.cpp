//g++ thread.cpp -std=c++11 -lpthread -o thread
// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <chrono>

using namespace std;

void foo(){
  int i=0;
  while(i<3){
	this_thread::sleep_for(chrono::seconds(1));
	cout << "foo\n";
	i++;
  }
}

void bar(int x){
  int i=0;
  while(i<3){
	this_thread::sleep_for(chrono::seconds(2));
	cout << "bar\n";
	i++;
  }
}

int main() {
  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar,0);  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";

  return 0;
}
