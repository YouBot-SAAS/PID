#include "PID.h"

float PID::u(float e){

	float u;
	p = kp * e;
	i += ki * e;
	d = kd * (e - ep);
	u = p + i + d;
	ep = e;
	return u;
}

void PID::set_params(float kp, float ki, float kd){
	this->kp = kp;
	this->ki = ki;
	this->kd = kd;
}

