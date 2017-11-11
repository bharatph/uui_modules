#include <CharacterUI.hpp>

CharacterUI::CharacterUI()
{
}
void CharacterUI::error(std::string msg, std::string ok_msg)
{
	std::cout << msg << std::endl;
}
void CharacterUI::alert(std::string msg, UI::action ac, std::string ok_msg, std::string cancel_msg)
{
	std::cout << msg << std::endl;
}
