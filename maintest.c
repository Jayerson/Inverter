/* 
 * File:   main.c
 * Author: Jay
 *
 * Created on July 31, 2018, 12:20 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <pic18f2550.h>
        
// Simple testing version: allows for port connection        

int dummy;
int i;

//main program
int main(void)
{
    //setup for ports
    TRISA = 0x00;
    PORTA = 0;
  
  while(1)
  {
   for (int i=1:10)    
    {
        PORTA = 9;
        for (i=0; i<20000000;) { dummy++; i++; }
        PORTA = 0;
        for (i=0; i<20000000;) { dummy++; i++; }
    }
        
    for (int i=1:10)
    {
        PORTA = 18;
        for (i=0; i<20000000;) { dummy++; i++; }
        PORTA = 0;
        for (i=0; i<20000000;) { dummy++; i++; }
    }

   for (int i=1:10)
    {
        PORTA = 36;
        for (i=0; i<20000000;) { dummy++; i++; }
        PORTA = ;
        for (i=0; i<20000000;) { dummy++; i++; }
    }
  }
}


