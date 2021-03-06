#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S4,     sonicSensor,    sensorEV3_Ultrasonic)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(SensorValue(touchSensor)== 0)
	{
		motor[motorB]=50;
		motor[motorC]=50;
	}

	if(SensorValue(touchSensor)==1)
	{
		motor[motorB]=-50;
		motor[motorC]=-50;
		wait1Msec(750);
	}

	motor[motorB]=0;
	motor[motorC]=50;
	wait1Msec(750);

	while(SensorValue(touchSensor)== 0)
	{
		motor[motorB]=50;
		motor[motorC]=50;
	}

	if(SensorValue(touchSensor)==1)
	{
		motor[motorB]=-50;
		motor[motorC]=-50;
		wait1Msec(750);
	}

	motor[motorB]=0;
	motor[motorC]=50;
	wait1Msec(800);

	while(SensorValue(sonicSensor)>10)
	{
		motor[motorB]=50;
		motor[motorC]=50;
	}

	if(SensorValue(sonicSensor)<=10)
	{
		motor[motorB]=-50;
		motor[motorC]=-50;
		wait1Msec(750);
	}

	motor[motorB]=0;
	motor[motorC]=50;
	wait1Msec(800);

	motor[motorB]=50;
	motor[motorC]=50;
	wait1Msec(1500);

}
