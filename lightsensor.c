#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S3,     lightSensor,    sensorEV3_Color)
#pragma config(Sensor, S4,     ultraSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(SensorValue(lightSensor)>45)
	{
		motor[motorB]=50;
		motor[motorC]=50;
	}
	if(SensorValue(lightSensor)<=45)
	{
		motor[motorB]=-50;
		motor[motorC]=-50;
		wait1Msec(1000);
	}


}