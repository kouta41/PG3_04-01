#include "StageScene.h"

StageScene::StageScene()
{
}

void StageScene::Init(){
	inputHandler_ = new InputHandler();

	//Assign command
	inputHandler_->AssignMoveLeftCommand2pressKeyA();
	inputHandler_->AssignMoveRightCommand2pressKeyD();

	//New Player
	player_ = new Player();
	player_->Init();
}

void StageScene::Update() {
	//get Input
	command_ = inputHandler_->HandleInput();

	//set command
	if (this->command_) {
		command_->Exec(*player_);
	}
	player_->Update();
}

void StageScene::Draw(){
	player_->Draw();
}
