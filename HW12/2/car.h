#pragma once
#include <cstdlib>
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	//virtual  
	void klaxon(int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();

	//추가하는 public 멤버 변수
	int x=80;  

	//추가하는 public 멤버 함수
	int comfortrate()
	{
		return x;
	}


protected:
	//private:
	float price;
	void speedUp(float);
	void speedDown(float);

	//추가하는 protected 멤버 변수
	int y = 9;

	//추가하는 protected 멤버 함수
	int discomfortrate()
	{

		return y;
	}
};
