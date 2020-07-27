int a[4][4],t=;                                     // define t as required
  for(int i=0;i<4;i++)                              // initialise positive pins
   for(int j=0;j<4;j++)
      a[i][j]=t++;

int b[4],k=;                                        // define k as required
  for(int i=0;i<4;i++)                              // initialise ground pins
      b[i]=k++;

void off()
{
  for(int i=0;i<4;i++)                              
   for(int j=0;j<4;j++)
     digitalWrite(a[i][[j],LOW);
  for(int i=0;i<4;i++)
     digitalWrite(b[i],HIGH);
}

void pattern1()                                     // pattern 1
{
  for(int i=0;i<4;i++)                              
   for(int j=0;j<4;j++)
    digitalWrite(a[i][j],HIGH);

  for(int i=0;i<4;i++)
    {
      digitalWrite(b[i],LOW);
      delay(1000);
      digitalWrite(b[i],HIGH);
    }
  off();
}

void pattern2()
{
  for(int i=0;i<4;i++)
    digitalWrite(b[i],LOW);
    
  for(int i=0;i<4;i++)
  {                              
   for(int j=0;j<4;j++)
    digitalWrite(a[i][j],HIGH);
   delay(1000);
   for(int j=0;j<4;j++)
       digitalWrite(a[i][j],LOW);
  }
   off();
}

void pattern3()
{
  for(int i=0;i<4;i++)
    digitalWrite(b[i],LOW);
    
  for(int i=3;i>=0;i--)                              
   {                              
   for(int j=0;j<4;j++)
    digitalWrite(a[i][j],HIGH);
   delay(1000);
   for(int j=0;j<4;j++)
       digitalWrite(a[i][j],LOW);
   } 
   off();
}

void pattern4()
{
  for(int i=0;i<4;i++)
    digitalWrite(b[i],LOW);
    
  for(int i=0;i<4;i++)                              
   for(int j=0;j<4;j++)
   {                              
   for(int j=0;j<4;j++)
    digitalWrite(a[j][i],HIGH);
   delay(1000);
   for(int j=0;j<4;j++)
       digitalWrite(a[j][i],LOW);
   }
   off();
}

void pattern5()
{
  for(int i=0;i<4;i++)
    digitalWrite(b[i],LOW);
    
  for(int i=3;i>=0;i--)                              
   for(int j=0;j<4;j++)
   {                              
   for(int j=0;j<4;j++)
    digitalWrite(a[j][i],HIGH);
   delay(1000);
   for(int j=0;j<4;j++)
       digitalWrite(a[j][i],LOW);
   }
   off();
}

void setup() 
{
  Serial.begin(9600);

  for(int i=0;i<4;i++)                              
   for(int j=0;j<4;j++)
   {
      pinMode(a[i][j],OUTPUT);                      // pinmodes set to output for positives
      digitalWrite(a[i][j],LOW);                    // set the positives to LOW initially [will be switched to HIGH  
   }

  for(int i=0;i<4;i++)
  {
    pinMode(b[i],OUTPUT);                           // pinmodes set to output for grounds
    digitalWrite(b[i],HIGH);                        // set the ground to HIGH initially
  }
  
  
}

void loop() 
{
  off();
  pattern1();
  pattern2();
  pattern3();
  pattern4();
  pattern5();
  off();
  delay(5000);
}
