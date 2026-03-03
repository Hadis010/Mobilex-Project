
task main()
{
setLEDColor(ledGreenFlash);
sleep(2000);
int cpt;
cpt = 0;
eraseDisplay();
displayVariableValues(5,cpt);
while(1){
	if (getButtonPress(buttonRight)==true){
cpt=cpt+1 ;
displayVariableValues(5,cpt);
sleep (400);
}
if (getButtonPress(buttonLeft)==true){
cpt=0 ;
displayVariableValues(5,cpt);
sleep (400);
}

}
}
