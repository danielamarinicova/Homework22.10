#include <stdio.h>

int main()
{
	int date , month ;
	printf("Enter date:");
	scanf ("%d", &date);
	printf("Enter month:");
	scanf ("%d", &month);
	if ((date>=20 && date<31 && month==1)||(date<=18 && date>=1 && month==2)){
printf("Your zodiac sign : AQUARIUS);}
 else if ((date>=19 && date<31 && month==2)||(date<=20 && date>=1 && month==3)) {
printf("Your zodiac sign : PISCES); 

}
else if ((date>=21 && date<31 && month==3)||(date<=19 && date>=1 && month==4)) {
printf("Your zodiac sign : ARIES");}

else if ((date>=20 && date<31 && month==4)||(date<=20 && date>=1 && month==5)) {
printf("Your zodiac sign : TAURUS");}
else if ((date>=21 && date<31 && month==5)||(date<=20 && date>=1 && month==6)) {
printf("Your zodiac sign : GEMINI");}
else if ((date>=21 && date<31 && month==6)||(date<=22 && date>=1 && month==7)) {
printf("Your zodiac sign : CANCER");}
else if ((date>=23 && date<31 && month==7)||(date<=22 && date>=1 && month==8)) {
printf("Your zodiac sign : LEO");}
else if ((date>=23 && date<31 && month==8)||(date<=22 && date>=1 && month==9)) {
printf("Your zodiac sign : VIRGO");}
else if ((date>=23 && date<31 && month==9)||(date<=22 && date>=1 && month==10)) {
printf("Your zodiac sign : LIBRA");}
else if ((date>=23 && date<31 && month==10)||(date<=21 && date>=1 && month==11)) {
printf("Your zodiac sign : SCORPIO");}
else if ((date>=22 && date<31 && month==11)||(date<=21 && date>=1 && month==12)) {
printf("Your zodiac sign : SAGUITTARIUS");}
else if ((date>=22 && date<31 && month==12)||(date<=19 && date>=1 && month==1)) {
printf("Your zodiac sign : CAPRICORN");}
else {
printf("Wrong number!");
}
}








