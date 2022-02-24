#include "reg52.h"
#include<intrins.h>
#include<config.h>
#include<control.h>



 typedef unsigned char u8;
 u8 r_buf;
sbit key1=P1^0;
sbit key2=P1^1;
sbit key3=P1^2;
sbit key4=P1^3;



/*void SendOneByte(unsigned char c) //发送字符函数
{
    SBUF = c;
    while(!TI);
    TI = 0;
} */



 void main(){
	

InitUART();
	
 while(1){
 	 if (key1==0){ 
	 
	 forward();
	  
	  }
	 if (key2==0){
	 
	  mo1=0;
	  mo2=0;
	  mo3=0;
	  mo4=0;
	  
	 }
	 if (key3==0){ 
	 
	  mo3=0;
	  mo4=1;
	  
	  }
	 if (key4==0){
	 
	  mo3=1;
	  mo4=0;
	  
	 }	
	 	   
 	   } 
 }



 void UARTInterrupt(void) interrupt 4 //串口接收字符
{
    if(RI)
    {
        RI = 0;
        //add your code here!
r_buf = SBUF;
if(r_buf == '0'){
 stop();
 }
 if(r_buf == '1'){
 forward();
 }
  if(r_buf == '2'){
 back();
 }
  if(r_buf == '3'){
left();
 }
  if(r_buf == '4'){
 right();
 }
/*switch(r_buf)
{
case'1': forward(); break; 
case'2': back();  break;
case'3': left();  break;
case'4': right();  break;
case'0': stop();  break;
}  */
   //SendOneByte(r_buf);//回发该字符
   EA = 1;
    }
}