#include <CharacterUI.hpp>

uui::CharacterUI *uui::CharacterUI::instance = nullptr;

uui::CharacterUI::CharacterUI()
{
}
uui::CharacterUI *uui::CharacterUI::getInstance()
{
	if (instance == nullptr)
	{
		instance = new uui::CharacterUI();
		map<std::string, std::string> commands;
	}
	return instance;
}

void uui::CharacterUI::error(std::string msg, std::string ok_msg)
{
	std::cout << msg << std::endl;
}
int uui::CharacterUI::alert(std::string msg, uui::action ac, std::string ok_msg,
							std::string cancel_msg)
{
	std::cout << msg << std::endl;
}