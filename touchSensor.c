#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
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
		wait1Msec(1000);
	}


}