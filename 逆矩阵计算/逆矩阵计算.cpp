#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int M, JC, D1, I, J; double D, DD, *y=&D, *x=&DD;
double xb[2];
double* b[6][4];
double* d4[24][5];
double* d5[120][6];
double* d6[720][7];
double* d7[5040][8];
int jc(int n);
double x03(double* (*p)[3]);
double x04(double* (*p)[4]);
double x05(double* (*p)[5]);
double x06(double* (*p)[6]);
double x07(double* (*p)[7]);
double axb(double* p,double* a[]);
int main(){
	long double N;
	int ns=MessageBox(NULL,TEXT("Welcome to use \"逆矩阵计算3.0\""),TEXT("Welcome"),MB_OKCANCEL);
	if(ns==IDCANCEL)
		exit(0);
loop:	D=0, D1=0, I=0, J=0;
	cout<<"请输入矩阵\"A\"的阶数(行数=列数): ";
	cin>>N;
	cin.clear();
	cin.sync();
	M=int(N);
	if(!cin||M!=N||M<1){
		MessageBox(NULL,TEXT("输入了非正整数字符，或者输入的数字过大！请重新输入！"),TEXT("Warining!"),MB_ICONWARNING);
		system("cls");
		goto loop; 
	}
	if(M==1){
		MessageBox(NULL,TEXT("亲，您在逗我吗？请重新输入！"),TEXT("Warining!"),MB_ICONWARNING);
		system("cls");
		goto loop;
	}
	else if(M>7){
		MessageBox(NULL,TEXT("抱歉，为了用户输入方便，作者将矩阵最高阶数限制为\"7\"阶."),TEXT("Warining!"),MB_ICONWARNING);
		MessageBox(NULL,TEXT("如需解除限制，您可以加qq群 \"128440097\" 向管理员索取可执行文件。"),TEXT("THEN"),MB_ICONASTERISK);
		system("cls");
		goto loop;
	} 
	JC=jc(M);
	double a[M][M], njz[M][M], e[M][M], ls[M], xbz[M][2], k1; int i, j, k, l, i1;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++){
			if(i==j)
				e[i][j]=1;
			else
				e[i][j]=0;
		}
	for(i=0;i<M;i++){
loop1:	
		cout<<"请输入矩阵A的第"<<i+1<<"行 : ";
		cin.clear();
		cin.sync();
		for(j=0;j<M;j++){
			cin>>a[i][j];
			if(!cin){
				MessageBox(NULL,TEXT("输入了其他字符！请重新输入该行！"),TEXT("Warining!"),MB_ICONWARNING);
				cin.clear();
				cin.sync();
				goto loop1;
			}
		}
	}
	for(i=0;i<M;i++)
		ls[i]=a[i][I];
	double *pa[M][M], *ppa[M];
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			pa[i][j]=&a[i][j];
	for(i=0;i<M;i++)
		ppa[i]=a[i];
loopd:	switch(M){
		case 2:
			D+=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);
			break;
		case 3:
			double* pa3[3][3];
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					pa3[i][j]=pa[i][j];
			x03(pa3);
			for(i=0;i<JC;i++){
				for(j=0;j<M;j++){
					axb(b[i][j],ppa);
					xbz[j][0]=xb[0];
					xbz[j][1]=xb[1];
				}
				for(l=0,k=0;l<M-1;l++)
					for(j=l+1;j<M;j++)
						if(xbz[l][0]>xbz[j][0])
							k++;
				if(k%2==0)
					b[i][M]=y;
				else
					b[i][M]=x;
			}
			for(i=0,k1=1;i<JC;i++){
				for(j=0;j<M;j++)
					k1*=(*b[i][j]);
				if(b[i][M]==y)	D+=k1;
				else	D-=k1;
				k1=1;
			}
			break;
		case 4:
			double* pa4[4][4];
			for(i=0;i<4;i++)
				for(j=0;j<4;j++)
					pa4[i][j]=pa[i][j]; 
			x04(pa4);
			for(i=0;i<JC;i++){
				for(j=0;j<M;j++){
					axb(d4[i][j],ppa);
					xbz[j][0]=xb[0];
					xbz[j][1]=xb[1];
				}
				for(l=0,k=0;l<M-1;l++)
					for(j=l+1;j<M;j++)
						if(xbz[l][0]>xbz[j][0])
							k++;
				if(k%2==0)
					d4[i][M]=y;
				else
					d4[i][M]=x;
			}			
			for(i=0,k1=1;i<JC;i++){
				for(j=0;j<M;j++)
					k1*=(*d4[i][j]);
				if(d4[i][M]==y)	D+=k1;
				else	D-=k1;
				k1=1;
			}
			break;
		case 5:	
			double* pa5[5][5];
			for(i=0;i<5;i++)
				for(j=0;j<5;j++)
					pa5[i][j]=pa[i][j]; 
			x05(pa5);
			for(i=0;i<JC;i++){
				for(j=0;j<M;j++){
					axb(d5[i][j],ppa);
					xbz[j][0]=xb[0];
					xbz[j][1]=xb[1];
				}
				for(l=0,k=0;l<M-1;l++)
					for(j=l+1;j<M;j++)
						if(xbz[l][0]>xbz[j][0])
							k++;
				if(k%2==0)
					d5[i][M]=y;
				else
					d5[i][M]=x;
			}			
			for(i=0;i<JC;i++){
				for(j=0;j<M;j++){
					axb(d5[i][j],ppa);
					xbz[j][0]=xb[0];
					xbz[j][1]=xb[1];
				}
				for(l=0,k=0;l<M-1;l++)
					for(j=l+1;j<M;j++)
						if(xbz[l][0]>xbz[j][0])
							k++;
				if(k%2==0)
					d5[i][M]=y;
				else
					d5[i][M]=x;
			}		
			for(i=0,k1=1;i<JC;i++){
				for(j=0;j<M;j++)
					k1*=(*d5[i][j]);
				if(d5[i][M]==y)	D+=k1;
				else	D-=k1;
				k1=1;
			}	
			break;
		case 6: 	
			double* pa6[6][6];
			for(i=0;i<6;i++)
				for(j=0;j<6;j++)
					pa6[i][j]=pa[i][j]; 
			x06(pa6);
			for(i=0;i<JC;i++){
				for(j=0;j<M;j++){
					axb(d6[i][j],ppa);
					xbz[j][0]=xb[0];
					xbz[j][1]=xb[1];
				}
				for(l=0,k=0;l<M-1;l++)
					for(j=l+1;j<M;j++)
						if(xbz[l][0]>xbz[j][0])
							k++;
				if(k%2==0)
					d6[i][M]=y;
				else
					d6[i][M]=x;
			}			
			for(i=0,k1=1;i<JC;i++){
				for(j=0;j<M;j++)
					k1*=(*d6[i][j]);
				if(d6[i][M]==y)	D+=k1;
				else	D-=k1;
				k1=1;
			}
			break;
		case 7: 
			double* pa7[7][7];
			for(i=0;i<7;i++)
				for(j=0;j<7;j++)
					pa7[i][j]=pa[i][j]; 
			x07(pa7);
			for(i=0;i<JC;i++){
				for(j=0;j<M;j++){
					axb(d7[i][j],ppa);
					xbz[j][0]=xb[0];
					xbz[j][1]=xb[1];
				}
				for(l=0,k=0;l<M-1;l++)
					for(j=l+1;j<M;j++)
						if(xbz[l][0]>xbz[j][0])
							k++;
				if(k%2==0)
					d7[i][M]=y;
				else
					d7[i][M]=x;
			}			
			for(i=0,k1=1;i<JC;i++){
				for(j=0;j<M;j++)
					k1*=(*d7[i][j]);
				if(d7[i][M]==y)	D+=k1;
				else	D-=k1;
				k1=1;
			}
		 	break;
	}
	if(D1==0&&D==0){
		MessageBox(NULL,TEXT("矩阵A=0，无逆矩阵！"),TEXT("Warining!"),MB_ICONWARNING);
		system("cls");
		goto loop;
	}
	for(i=0;i<M;i++)
		a[i][I]=ls[i];
	if(D1==0){
		I--;
		DD=D;
		D=0;
	}
	else{
		njz[I][J]=D/DD;
		D=0;
	}
	D1++;		
	if(J==M-1&&I==M-1)
		goto lpend;
	else if(I==M-1){
		I=0; J++;
	}
	else
		I++;
	for(i=0;i<M;i++){
		ls[i]=a[i][I];
		a[i][I]=e[i][J];
	}
	goto loopd;	
lpend:	
	cout<<endl<<"计算结果 A的逆矩阵:"<<endl;
	for(i=0;i<M;i++){
		for(j=0;j<M;j++)
			cout<<setw(6)<<njz[i][j]<<" ; ";
		cout<<endl;
	}
	cout<<endl;
	MessageBox(NULL,TEXT("如果计算结果有误，或者需要输出更多结果，或者需要Linux等其他平台的本应用，或者对作者有所建议，您可以加qq群 \"128440097\" 向管理员反馈。"),TEXT("计算完成!"),MB_ICONASTERISK);
	int ns9=MessageBox(NULL,TEXT("是否继续计算？"),TEXT("THEN"),MB_OKCANCEL);
	if(ns9==IDCANCEL)
		return 0;
	system("cls");	
	cin.clear();
	cin.sync();
	goto loop; 			
}
double x03(double* (*p)[3])
{
	double *a[3][3]; int i, j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			a[i][j]=*p[i]+j;
	b[0][0]=a[0][0]; b[0][1]=a[1][1]; b[0][2]=a[2][2];
	b[1][0]=a[0][0]; b[1][1]=a[2][1]; b[1][2]=a[1][2];
	b[2][0]=a[1][0]; b[2][1]=a[0][1]; b[2][2]=a[2][2];
	b[3][0]=a[1][0]; b[3][1]=a[2][1]; b[3][2]=a[0][2];
	b[4][0]=a[2][0]; b[4][1]=a[0][1]; b[4][2]=a[1][2];
	b[5][0]=a[2][0]; b[5][1]=a[1][1]; b[5][2]=a[0][2];
	return 0;
}
double x04(double* (*p)[4])
{
	
	double *x3[3][3]; int i, j, k, i1;
	for(k=0;k<4;k++){
		for(i=0,i1=0;i<4;i++,i1++){
			if(i==k){
				i1--;
				continue;
			}
			for(j=1;j<4;j++)
				x3[i1][j-1]=(*(p+i))[j];
		}
		x03(x3);
		for(i=0;i<6;i++){
			d4[i+k*6][0]=(*(p+k))[0];
			for(j=1;j<4;j++)
				d4[i+k*6][j]=b[i][j-1];
		}
	}
}
double x05(double* (*p)[5])
{
	
	double *x4[4][4]; int i, j, k, i1;
	for(k=0;k<5;k++){
		for(i=0,i1=0;i<5;i++,i1++){
			if(i==k){
				i1--;
				continue;
			}
			for(j=1;j<5;j++)
				x4[i1][j-1]=(*(p+i))[j];
		}
		x04(x4);
		for(i=0;i<24;i++){
			d5[i+k*24][0]=(*(p+k))[0];
			for(j=1;j<5;j++)
				d5[i+k*24][j]=d4[i][j-1];
		}
	}
}
double x06(double* (*p)[6])
{	
	double *x5[5][5]; int i, j, k, i1;
	for(k=0;k<6;k++){
		for(i=0,i1=0;i<6;i++,i1++){
			if(i==k){
				i1--;
				continue;
			}
			for(j=1;j<6;j++)
				x5[i1][j-1]=(*(p+i))[j];
		}
		x05(x5);
		for(i=0;i<120;i++){
			d6[i+k*120][0]=(*(p+k))[0];
			for(j=1;j<6;j++)
				d6[i+k*120][j]=d5[i][j-1];
		}
	}
}
double x07(double* (*p)[7])
{	
	double *x6[6][6]; int i, j, k, i1;
	for(k=0;k<7;k++){
		for(i=0,i1=0;i<7;i++,i1++){
			if(i==k){
				i1--;
				continue;
			}
			for(j=1;j<7;j++)
				x6[i1][j-1]=(*(p+i))[j];
		}
		x06(x6);
		for(i=0;i<720;i++){
			d7[i+k*720][0]=(*(p+k))[0];
			for(j=1;j<7;j++)
				d7[i+k*720][j]=d6[i][j-1];
		}
	}
}
double axb(double* p,double* a[])
{
	int i, j;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			if(p==*(a+i)+j){
				xb[0]=i;
				xb[1]=j;
			}
	return 0;				
}
int jc(int n)
{
	if(n==0||n==1)
		return 1;
	else
		n*=jc(n-1);
	return n;
}
