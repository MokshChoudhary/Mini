#include<Mini.h>

class Sandbox : public Mini::Application {
public :
	Sandbox() {

	}

	~Sandbox() {

	}
};

Mini::Application* Mini::CreateMiniApplication() {
	return new Sandbox();
}