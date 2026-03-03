
task main()
{
setLEDColor(ledGreenFlash);
sleep(400);
setLEDColor(ledRedFlash);
sleep(400);
int cpt;
cpt =0;
eraseDisplay();{
displayVariableValues(5,cpt);
while (1){
if(getButtonPress(buttonRight)==true){
cpt = cpt + 1;
sleep(400);
displayVariableValues(5,cpt);
}
if(getButtonPress(buttonLeft)==true){
cpt = 0;
sleep(400);
displayVariableValues(5,cpt);
}}
}
}
