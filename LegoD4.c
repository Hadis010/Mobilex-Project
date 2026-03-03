/*===============================================================
// Nom du fichier : Activite1_v1.c
// Auteur : HafsaDn
// Date de création : Février 2022
// Version : V1
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Description :
											/
//-------------------------------------------------------------
// A noter :
// - le capteur de contact est sur l'entrée 1
// - le moteur est sur la sortie A
//===============================================================*/
SensorType[S1] = sensorEV3_Touch;
task main()
{
While(SensorValue[S1]!=1);
setMotorSpeed(motorA,75);

}
