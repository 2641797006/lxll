#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int M, S, N;
double jzxc(double *a[],double *b[],double *s[]);
int main(){
	int I0, J0, M0, N0;
	long double I1, J1, M1, N1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);
	cout<<"Welcome to use \"�������";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	cout<<"2.0";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);
	cout<<"��\"."<<endl;
loop:	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	cout<<"���������\'A\'������ : ";
	cin.clear();
	cin.sync();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
	cin>>I1;
	I0=int(I1);
	if(!cin||I0!=I1||I0<1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"�����˷��������ַ���������������ֹ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	}
	else if(I0>9){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"��Ǹ��Ϊ���û����뷽�㣬���߽������������������Ϊ\"9\"�ף�"<<endl
		    <<"���������ƣ������Լ�qqȺ \"128440097\" �����Ա��ȡ��ִ���ļ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	} 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	cout<<"���������\'A\'������ : ";
	cin.clear();
	cin.sync();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
	cin>>J1;
	J0=int(J1);
	if(!cin||J0!=J1||J0<1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"�����˷��������ַ���������������ֹ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	}
	else if(J0>9){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"��Ǹ��Ϊ���û����뷽�㣬���߽������������������Ϊ\"9\"�ף�"<<endl
		    <<"���������ƣ������Լ�qqȺ \"128440097\" �����Ա��ȡ��ִ���ļ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	} 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	cout<<"���������\'B\'������ : ";
	cin.clear();
	cin.sync();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
	cin>>M1;
	M0=int(M1);
	if(!cin||M0!=M1||M0<1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"�����˷��������ַ���������������ֹ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	}
	else if(M0>9){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"��Ǹ��Ϊ���û����뷽�㣬���߽������������������Ϊ\"9\"�ף�"<<endl
		    <<"���������ƣ������Լ�qqȺ \"128440097\" �����Ա��ȡ��ִ���ļ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	} 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	cout<<"���������\'B\'������ : ";
	cin.clear();
	cin.sync();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
	cin>>N1;
	N0=int(N1);
	if(!cin||N0!=N1||N0<1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"�����˷��������ַ���������������ֹ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	}
	else if(N0>9){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"��Ǹ��Ϊ���û����뷽�㣬���߽������������������Ϊ\"9\"�ף�"<<endl
		    <<"���������ƣ������Լ�qqȺ \"128440097\" �����Ա��ȡ��ִ���ļ���"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
		cout<<"����������AB��������"<<endl;
		goto loop;
	} 
	if(J0==M0){
		M=I0; S=J0; N=N0;	}
	else if(N0==I0){
		M=M0; S=N0; N=J0;	}
	else{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"����A��B������� !"<<endl
		    <<"���������� !"<<endl;
		goto loop;
	}	
	double a[I0][J0], b[M0][N0], s[M][N]; int i, j;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	long double ij;
	cout<<"���������\'A\'. "<<endl;
	for(i=0;i<I0;i++){
loop1:		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
		cout<<"���������\'A\'�ĵ�"<<i+1<<"�� : ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
		cin.clear();
		cin.sync();
		for(j=0;j<J0;j++){
			cin>>a[i][j];
		}
		if(!cin){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"�����������ַ� ������������ֹ���������������У�"<<endl;
		goto loop1;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
	cout<<"���������\'B\'. "<<endl;
	for(i=0;i<M0;i++){
loop2:		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
		cout<<"���������\'B\'�ĵ�"<<i+1<<"�� : ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
		cin.clear();
		cin.sync();
		for(j=0;j<N0;j++){ 
			cin>>b[i][j];
		} 
		if(!cin){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		cout<<"�����������ַ� ������������ֹ���������������У�"<<endl;
		goto loop2;
		}
	}
	double *pa[I0], *pb[M0], *ps[M];
	for(i=0;i<I0;i++)
		pa[i]=a[i];
	for(i=0;i<M0;i++)
		pb[i]=b[i];
	for(i=0;i<M;i++)
		ps[i]=s[i];
	if(J0==M0)
		jzxc(pa,pb,ps);
	else if(N0==I0)
		jzxc(pb,pa,ps);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
	cout<<endl<<"������ �������� C = AB ���� : "<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
			cout<<setw(6)<<s[i][j]<<" ; ";
		cout<<endl;
	}
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);
	cout<<"������������󣬻�����Ҫ�����������������ҪLinux������ƽ̨�ı�Ӧ�ã����߶������������飬"<<endl
	    <<"�����Լ�qqȺ \"128440097\" �����Ա������"<<endl
	    <<"���������Լ������� ���� ��\"";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);			
	cout<<"Ctrl+C";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);
	cout<<"\"�˳�����"<<endl;
	cin.clear();
	cin.sync();
	goto loop; 
}
double jzxc(double *a[],double *b[],double *s[])
{
	int m, n, i, j;
	for(m=0;m<M;m++)
		for(n=0;n<N;n++){
			*(s[m]+n)=0;
			for(i=0,j=0;j<S;i++,j++)
				*(s[m]+n)+=*(a[m]+j)**(b[i]+n);
		}	
	return 0;
}
		
