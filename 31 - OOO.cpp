#include <iostream> 

void OOO_message(const std::string& date){
  std::cout << "Thank you for your email.\n";
  std::cout << "I am currently out of the office and will be back " << date << ". \n";
  std::cout << "I will respond as soon as I can upon my return";
}

int main() {
std::string returnDate = "October 30, 2025";
OOO_message(returnDate);


}