#include<Manu.h>

class Sandbox : public Manu::Application {
public :
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};
Manu::Application* Manu::CreateApplication() 
{
	return new Sandbox();
}