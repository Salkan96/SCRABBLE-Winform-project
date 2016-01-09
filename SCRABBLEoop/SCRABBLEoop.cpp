// SCRABBLEoop.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
//#include<SFML/Audio.hpp>

using namespace SCRABBLEoop;


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	/*sf::SoundBuffer buffer;
	if (!buffer.loadFromFile("sound.wav")){
		return -1;
	}
	sf::Sound sound;
	sound.setBuffer(buffer);
	sound.play();*/

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
