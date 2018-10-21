#pragma once

const float PWM_SCALE = 100.0f;

// Feel free to change these parameters as needed
const float MIN_SPEED = 0.08f * PWM_SCALE;
const float MAX_SPEED = 0.3f * PWM_SCALE;

const int RIGHT_MOTOR = 0;
const int LEFT_MOTOR = 1;

class Motors {
public:
    Motors();
    void startBaseSpeed();
    void stop();

    /***
     * Range from 0.0-100.0.
     ***/
    void setLeftPwm(float pwm);
    void setRightPwm(float pwm);
private:
    void setMotorPwm(int motor, float pwm);
    
    float m_rpwm;
    float m_lpwm;
};