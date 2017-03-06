const byte startPin = 0;
const byte endPin = 8;
int n;
void setup() 
{
  for (byte i = startPin; i<= endPin; i++) 
  {
       pinMode(i, OUTPUT);
    }
}

void loop()
{
   byte i=0;
   byte lightPin = startPin;
   
   for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,HIGH);
   }
     		delay (100);
    for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,LOW);
   }
     		delay (1000);
  for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,HIGH);
   }
     		delay (100);
    for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,LOW);
   }
     		delay (1000);
for (i=startPin; i<= endPin; i++) 
   { 
      	digitalWrite(i,LOW);
			if (lightPin < endPin) 
				{
       			lightPin++;
    			} 
  			else 
    			{
        		lightPin = startPin;
    			}  
		digitalWrite(lightPin, HIGH);
  		delay (100);
		}
     for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,HIGH);
   }
     		delay (100);
    for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,LOW);
   }
     		delay (1000);
  for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,HIGH);
   }
     		delay (100);
    for (i=startPin; i<= endPin; i++) 
{ 
      	digitalWrite(i,LOW);
   }
     		delay (1000);
for (n=endPin; n>= startPin; n--) 
   { 
      	digitalWrite(n,HIGH);
		delay (100);
digitalWrite(n,LOW);
  		
}
}

