#pragma once

#include "InputHandler.h"
#include "Player.h"
#include "Command.h"

class StageScene {
public:
	StageScene();

	/// <summary>
	/// 
	/// </summary>
	void Init();

	/// <summary>
	/// 
	/// </summary>
	void Update();

	/// <summary>
	/// 
	/// </summary>
	void Draw();


private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* command_ = nullptr;
	Player* player_ = nullptr;

};

