#include<FLTKUI.hpp>
#include<clog/clog.h>

FLTKUI::FLTKUI()
{
	window = new Fl_Window(340, 180);
	Fl::run();
}

void FLTKUI::set(std::string command, callback_function callback)
{
	uui::UI::ui_commands->emplace(std::make_pair(command, callback));
	//add callback function to command dictionary
}

void FLTKUI::run(std::string command, void *obj)
{
	uui::UI::ui_commands->operator[](command)(uui::UI::instance, obj);
}

void FLTKUI::error(std::string msg, std::string ok_msg)
{
	switch(fl_choice(msg.c_str(), ok_msg.c_str(), 0, 0));

}

void FLTKUI::alert(std::string msg, UI::action ac, std::string ok_msg, std::string cancel_msg)
{
	switch(fl_choice(msg.c_str(), ok_msg.c_str(), cancel_msg.c_str(), 0))
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

