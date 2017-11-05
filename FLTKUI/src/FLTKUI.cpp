#include<FLTKUI.hpp>

FLTKUI::FLTKUI()
{
	window = new Fl_Window(340, 180);
	Fl::run();
}
void FLTKUI::error(std::string msg, std::string ok_msg)
{
	switch(fl_choice(msg.c_str(), ok_msg.c_str(), 0, 0)){
		//deal with the acions
	}	
}
void alert(std::string msg, UI::action ac, std::string ok_msg, std::string cancel_msg="Cancel")
{
	std::cout << msg << std::endl;
}

