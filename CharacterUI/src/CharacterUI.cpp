#include <CharacterUI.hpp>

CharacterUI::CharacterUI() {}
void CharacterUI::error(std::string msg, std::string ok_msg) {
  std::cout << msg << std::endl;
}
int CharacterUI::alert(std::string msg, uui::action ac, std::string ok_msg,
                       std::string cancel_msg) {
  std::cout << msg << std::endl;
}
