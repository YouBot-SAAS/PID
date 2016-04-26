class PID{
private: 
	float p, i, d;
	float kp, ki, kd;
	float ep;
public:
	float u(float e);
	void set_params(float kp, float ki, float kd);
};
