#pragma once
#include <Command.h>

class InputHandler{
public:
	ICommand *HandleInput();

	void AssignMoveLeftCommand2pressKeyA();
	void AssignMoveRightCommand2pressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;

};

