
task main(){
	int x ;
SensorType[S1] = sensorEV3_Touch;
x = SensorValue[S1];
displayVariableValues(10,x);
while (x != 1){
setMotorSpeed (motorA,50);
setMotorSpeed (motorD,50);
x = SensorValue[S1];
displayVariableValues(10,x);
}
stopAllMotors();
}
