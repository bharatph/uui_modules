#include<FLTKUI.hpp>
#include<clog/clog.h>

FLTKUI::FLTKUI()
{
	window = new Fl_Window(340, 180);
	Fl::run();
}


template <typename... T>
void FLTKUI::set(std::string name, UI::callback<T...> cb, std::vector<std::string> *input_info)
{
	commands<T...>.insert(std::make_pair(name, cb));
	for(const std::string& s : *input_info)
	{
		//
	}
}

template <typename... T>
void FLTKUI::run(std::string name, T... t)
{
	std::cout << "Launching Predefined function" << endl;
	UI::callback<T...> cb = commands<T...>[name];	
	if(cb == nullptr)
	{
		log_fat("TAG", "Empty callback");
	}
	cb(new UI(), t...); 
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

