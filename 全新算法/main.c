#include <stdio.h>
#include <__pink/prand.h>
#include <C:\Users\26417\Desktop\Matrix\pMatrix.h>

#define ResetCin() ( stdin->_cnt=0, stdin->_ptr=stdin->_base )

void menu();
int choose(int n);
void ScanMatrix(MATRIX* mat);
int FormatMatrix(double* p, int row, int col);

int main()
{
	int i, j, fd=0, fa=0, fi=0;
	double det;
	MATRIX mat, *amat, *imat, *m, tempmat;
	amat=(MATRIX*)malloc(sizeof(MATRIX));
	imat=(MATRIX*)malloc(sizeof(MATRIX));
	InitMatrix(amat, 1, 1);
	InitMatrix(imat, 1, 1);
	InitMatrix(&mat, 5, 5);
	MatrixTraverse(&mat, &FormatMatrix);
	while(1)
	{
		menu();
		ResetCin();
		ungetc(' ', stdin);
		if( scanf("%*[^0-9a-zA-Z]%1[0-9a-zA-Z]", &i)<1 )
			continue;
		i=choose(i);
		switch(i)
		{
			case 'A':
				PrintMatrixS(&mat);
			break;
			case 'B':
				printf("�������������row: ");
				ResetCin();
				ungetc(' ', stdin);
				scanf("%*[^0-9]%d", &i);
				printf("�������������col: ");
				ResetCin();
				ungetc(' ', stdin);
				scanf("%*[^0-9]%d", &j);
				DestroyMatrix(&mat);
				InitMatrix(&mat, i, j);
				printf("�������������:\n");
				ScanMatrix(&mat);
				fd=0, fa=0, fi=0;
			break;
			case 'C':
				if(mat.row!=mat.col){
					printf("�˾����Ƿ���\n");
					break;
				}
				else if(!fd)
					det=DetValue(&mat), fd=1;
				printf("��������ʽֵΪ: %.32G\n", det);
			break;
			case 'D':
				if(mat.row!=mat.col){
					printf("�˾����Ƿ���\n");
					break;
				}
				else if(!fa){
					DestroyMatrix(amat);
					free(amat);
					amat=AdjointMatrix(&mat);
					fa=1;
				}
				printf("�������:\n");
				PrintMatrixS(amat);
			break;
			case 'E':
				if(mat.row!=mat.col){
					printf("�˾����Ƿ���\n");
					break;
				}
				else if(!fi){
					DestroyMatrix(imat);
					free(imat);
					imat=InverseMatrix(&mat);
					fi=1;
				}
				printf("�����:\n");
				PrintMatrixS(imat);
			break;
			case 'F':
				printf("�������������:\n����row: ");
				ResetCin();
				ungetc(' ', stdin);
				scanf("%*[^0-9]%d", &i);
				printf("����col: ");
				ResetCin();
				ungetc(' ', stdin);
				scanf("%*[^0-9]%d", &j);
				if(i!=mat.col){
					printf("��2�����������\n");
					break;
				}
				InitMatrix(&tempmat, i, j);
				printf("�������������:\n");
				ScanMatrix(&tempmat);
				m=MatrixMul(&mat, &tempmat);
				printf("\n�˻�����:\n");
				PrintMatrixS(m);
				DestroyMatrix(&tempmat);
				DestroyMatrix(m);
				free(m);
			break;
			case 'G':
				printf("������ת��\n");
				m=CloneMatrix(&mat);
				i=mat.row, j=mat.col;
				DestroyMatrix(&mat);
				InitMatrix(&mat, j, i);
				TransposeMatrix(m, &mat);
				PrintMatrixS(&mat);
				DestroyMatrix(m);
				free(m);
			break;
			case 'K':
				system("cls");
			break;
			case 'Q':
				return 0;
			break;
			case 'X':
				MatrixTraverse(&mat, &FormatMatrix);
				fd=0, fa=0, fi=0;
				printf("�����ֵ\n");
			break;
			default:
				printf(">>>switch case::This option was not found!\n");
		}
	}
}

void menu()
{
	printf("\nA.�������  B.�������  C.����ʽֵ  D.�������  E.�����  F.�������  G.ת�þ���  K.����  M.����  Q.�˳�\n��ѡ��: ");
}

int choose(int n)
{
	if(0x30<=n&&n<=0x39)
		n-=0x30;
	else if(0x41<=n&&n<=0x5a)
		n-=0x40;
	else if(0x61<=n&&n<=0x7a)
		n-=0x60;
	else
		n=-1;
	n+=0x40;
	printf(">>>��⵽ѡ��\'%c\'\n\n", n);
	return n;
}

void ScanMatrix(MATRIX* mat)
{
	int i, j;
	ResetCin();
	for(i=0;i<mat->row;i++)
		for(j=0;j<mat->col;j++)
			scanf("%lf", *(mat->bp+i)+j);
}

int FormatMatrix(double* p, int row, int col)
{
	int i, flag;
	for(i=0;i<col;i++,p++){
		flag=prand();
		*p = flag%2==0 ? flag%20 : -flag%20;
	}
	return 0;
}
