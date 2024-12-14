#pragma once
#ifdef MN_PLATFORM_WINDOWS

extern Manu::Application* Manu::CreateApplication();
int main(int argc,char** argv)
{
	auto app = Manu::CreateApplication();
	app->Run();
	delete app;
}
#endif 