#include <stdio.h>   //���������� �������� ������� ��� �������� stdio.h-��������� ��������� printf()(�������� ������),scanf()(���������� ����� � ���������)
#include <stdlib.h>  //������ � ��� �������, �� ���������� ��������� ���'��, ��������� ������� ��������� ��������, ������������� ���� �� ����
#include <windows.h> //������ ���������� ��� ��� ������� Windows API, �� ������� �������, �� ���������������� ������������ Windows, � �� ���� �����, �� ���������������� ������ ��������� �� ���������
#include <stdlib.h>  //��� ����, ��� ���� ����� ������������� ������� system("cls")

#define Name "Vladyslav "  //��������� ������������ Name-���������, � ��� �� ��'� - �� ��������
#define LastName "Bovsunivskyi"
#define GroupName "RS-31"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main() //�������
{
unsigned int semestr;  // unsigned int (1 bit)
float admissionScore;  //float (32 bit, 0...255)
int grade1;            //int (32 bit, � 2 147 483 368 � 2 147 483 367)
int grade2;            //������ 1...2...3..
int grade3;
int grade4;
int grade5;
double averageGrade;   //double (64 ���), ������ �������� ������
unsigned int age;      //��
SetConsoleCP (1251);   //���������� ��������� ��������� �� �������
SetConsoleOutputCP(1251); //���������� ��������� ����� � ������ � � ��������� ����

printf("%s%s ��������� ������� 䳿 .\n", Name, LastName); //���� ���� �� ������� ��������, %s � ��������/��������� ����������� ����� (������ �������).

printf("������ ����� ��������:"); //���� ���������.
scanf("%u", &semestr);    //������� �����, %u � ��������/��������� ����������� ����� ���������� �����.

printf("������ ��� �������� ���: ");
scanf("%f", &admissionScore); //%f � ��������/��������� ����� ���� float.


printf("������ ������ �� ������� #1: ");
scanf("%d", &grade1); //%d ��� %i � ��������/��������� ����� ���������� ����� �� ������.

printf("������ ������ �� ������� #2:");
scanf("%d", &grade2);

printf("������ ������ �� ������� #3:");
scanf("%d", &grade4);

printf("������ ������ �� ������� #4:");
scanf("%d", &grade5);

printf("������ ������ �� ������� #5:");
scanf("%d", &grade3);

printf("������ ��� ��: ");
scanf("%u", &age);

averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5) / 5; //�������� � ���� ����� averageGrade ���������� ���������, �� ������� �� ��� � ����� (double)

system("cls"); //�������� �������� ���� �� ������
printf("%s", University); //%s � ��������/��������� ����������� ����� (������ �������), ��������� ����� �����������, ��� �������� � ����� University.
printf("\n%s", Faculty); //��������� ����� ����������, ��� �������� � ����� Faculty.
printf("\n%s", GroupName); //��������� ����� �����, ��� �������� � ����� GroupName.
printf("\n---------------------------------"); //������� 15, ��� ��� ������� �� ����� �� � �������
printf("\n�������: %s %s", Name, LastName ); //��������� ���� �� ������� ��������.
printf("\n³�: %u", age); //���� ��.
printf("\n�������: %u", semestr); //������ ��������.
printf("\n=================================");
printf("\n�������� ���: %.2f", admissionScore); //��������� ����
printf("\n������� ������ = %.3lf", averageGrade); //���������� ����, �� ����� ���������
printf("\n"); // \n - ��� ����� ������� � ������ �����, ��� ������ ������

  return 0;
}
