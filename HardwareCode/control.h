sbit mo1=P2^0;
 sbit mo2=P2^1;
 sbit mo3=P2^2;
 sbit mo4=P2^3;

 void forward(){
 mo1 = 0;
mo2 = 1;
 }

  void back(){
mo1 = 1;
mo2= 0;
 }
   void left(){
mo3= 0;
mo4 = 1;
 }
 void right(){
 mo3= 1;
mo4 = 0;
}
void stop(){  
  mo1=0;
mo2=0;
mo3= 0;
mo4 = 0;
}