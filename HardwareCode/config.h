void InitUART() //���ڳ�ʼ��9600
{
//��ʼ�����ڶ�ʱ��9600
TMOD = 0x20;
PCON = 0x00;
SCON = 0x50;  
TH1 = 0xFD;
TL1 = 0xFD;
TR1 = 1;
ES = 1;
EA = 1;
}