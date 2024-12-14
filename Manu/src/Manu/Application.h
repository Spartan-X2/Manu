#pragma once
#include "Core.h"
namespace Manu {

	class MANU_API Application
	{  
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//To be used on the client side
	Application* CreateApplication();
}

