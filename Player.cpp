#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Init()
{
	pos_ = { 300.0f,500.0f };
	speed_ = 2.0f;
	radius_ = 25.0f;
}

void Player::Update(){
	/*if (pos_.x <= 25) {
		pos_.x = 25.0f;
	}
	else if (pos_.x >= 1255) {
		pos_.x = 1255.0f;
	}*/

}

void Player::Draw(){
	Novice::DrawEllipse(int(pos_.x), int(pos_.y), int(radius_), int(radius_), 0.0f, RED, kFillModeSolid);
}

void Player::MoveRight(){
	this->pos_.x += this->speed_;
}

void Player::MoveLeft(){
	this->pos_.x -= this->speed_;

}
