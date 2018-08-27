#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <thread>
#include <chrono>

inline void sleep( int seconds ) {
  std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

int main(int argc, const char *argv[]) {
  // std::cout << argc << std::endl;
  // for ( int i = 0; i < argc ; ++i ) {
  //   std::cout << argv[i] << ", " << strlen(argv[i]) << std::endl;
  // }
  for ( int i = 0 ; i < 5; ++i ) {
    std::cout << i << std::endl;
    sleep(1);
  }
  char a;
  while (true) {
    std::cin >> a;
    std::cout << "a = " << a << std::endl;
  }

  return 0;
}
