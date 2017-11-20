#include<FLTKUI.hpp>
#include<clog/clog.h>

uui::FLTKUI::FLTKUI()
{
	window = new Fl_Window(340, 180);
	Fl::run();
}

void uui::FLTKUI::set(std::string name, std::vector<std::string> *input_info, callback cb)
{
	commands->insert(std::make_pair(name, cb));
	for(const std::string& s : *input_info)
	{
		//
	}
}

void uui::FLTKUI::run(std::string name, void *args)
{
	log_inf("FLTKUI::set", "Launching predefined functions");
	uui::callback cb = (*commands)[name];	
	if(cb == nullptr)
	{
		log_fat("FLTKUI::set", "Empty callback");
	}
	cb(this->instance, args); 
}

void uui::FLTKUI::error(std::string msg, std::string ok_msg)
{
	switch(fl_choice(msg.c_str(), ok_msg.c_str(), 0, 0));

}

void uui::FLTKUI::alert(std::string msg, UI::action ac, std::string ok_msg, std::string cancel_msg)
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

