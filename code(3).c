//#include <stdio.h>
//void main ()
//{
// printf("\t\t\t**********ѧ����Ϣ����ϵͳ********** \n\n");
// printf("\t\t\t*            ver 1.0               * \n\n");
// printf("\t\t\t*==================================* \n\n");
// printf("\t\t\t*   1.��������      2.��Ϣ��ѯ     * \n\n");//������
// printf("\t\t\t*   3.��Ϣ�޸�      4.ɾ����Ϣ     * \n\n");
// printf("\t\t\t*   5.���ȫ��      6.�˳�ϵͳ     * \n\n");
// printf("\t\t\t*==================================* \n\n");
// printf("\t\t\t�����빦����� (1-6) ;\n\n");
// 
//}


//#include <stdio.h>
//int main ()
//{
// float r,s;
// printf("�뾶r=");//����Բ���
// scanf("%f",&r);
// s=3.1415926*r*r;
// printf("Բ�����Ϊ%0.3f\n",s);
//return 0;
//}

//#define PI 3.1415926
//#include <stdio.h>
//void main()
//{
// double r,h,v;
// printf("����������뾶����\n");  //Բ�������
// scanf("%lf%lf",&r,&h);
// v=PI*r*r*h;
// printf("Բ��������Ϊ%0.3lf\n\n",v);
//
//}

//#include <stdio.h>
//void main()
//{
// int a,b,age;
// printf("��������<�������><��ǰ���>\n\n");//�������
// scanf("%d%d",&a,&b);
// age=b-a;
// printf("�������Ϊ%d\n\n",age);
//}

//#include <stdio.h>
//void main()
//{
// double r,s,c;
// printf("Բ�İ뾶R="); //����Բ��������ܳ�
// scanf("%lf",&r);
// s=3.1415*r*r;
// c=2*3.14159*r;
// printf("Բ�����S=%.3f   Բ���ܳ�C=%.3f\n",s,c);
//
//}

//#include <stdio.h>
//void main ()
//{
 //float a,b,c,v;
 //printf("���������볤���:");//�������������
 //scanf("%f%f%f",&a,&b,&c);
 //v=a*b*c;
 //printf("������������ v=");
 //printf("%.3f\n",v);

//}

//#include <stdio.h>
//void main ()
//{
// int x,y;
// printf("����������Ҫת���ɰ˽��ƺ�ʮ��������\n"); //ʮ����ת��ʮ�����ƺͰ˽���
// scanf("%d%d",&x,&y);
// printf("��һ�����ֵİ˽���Ϊ%o \t�ڶ������ֵ�ʮ������Ϊ%X\n",x,y);
// printf("��һ�����ֵ�ʮ������Ϊ%X\t�ڶ������ֵİ˽���Ϊ%o\n",x,y);
//}						
//#include <stdio.h>
//void main ()
//{
// int a,b,s,y;
// printf("�����뱻����:");
// scanf("%d",&a);
// printf("���������:");
// scanf("%d",&b);
// //printf("���������뱻�����ͳ���:");
// //scanf("%d%d",&a,&b);
// s=a/b;
// y=a%b;
// printf("��Ϊ:%d\n����Ϊ:%d\n",s,y);
//}

//#include <stdio.h>
//void main()
//{
// int n,gw,sw,bw;
// printf("������Ҫ�������:");
// scanf("%d",&n);
// gw=n%10;
// sw=n/10%10;
// bw=n/100%10;
// printf("��λ=%d\nʮλ=%d\n��λ=%d\n",gw,sw,bw);
// 
//}

//#include <stdio.h>
//void main ()
//{
// double x;
// printf("��������Ҫ������λС����ʵ��:");
// scanf("%lf",&x);
// x=(int)(x*100+0.5)/100.0;
// printf("���=%.2f\n",x);
//}

//#include <stdio.h>
//void main ()
//{
// int a,b;						   //δ��ɴ���
// scanf("%d",&a);
// b=a%4=0&&a%100=0||a%400=0;
// if ()
//}

//#include <stdio.h>
//void main()
//{
// int a,b,c;
// printf("������������Ҫ��������������\n");//�������� (��ֵ��)
// printf("a=");
// scanf("%d",&a);
// printf("b=");
// scanf("%d",&b);
// c=a;
// a=b;
// b=c;
// printf("�����������\n");
// printf("a=%d\tb=%d\n",a,b);
//}

//#include <stdio.h>
//void main ()
//{
//int a,b;
//printf("������������Ҫ��������������:\n");	//�������� (������㷨)
// printf("a=");
// scanf("%d",&a);
// printf("b=");
// scanf("%d",&b);a^b,b^a,a^b;
//printf("�����������\n");
//printf("a=%d\tb=%d\n",a,b);
//}

//#include <stdio.h>
//void main()
//{
// int a,b,c,d,e; //�������ȴ�С
// printf("���������������бȽϴ�С:\n");
// printf("a=");
// scanf("%d",&a);
// printf("b=");
// scanf("%d",&b);
// printf("c=");
// scanf("%d",&c);
// d=a>b?a:b,e=d>c?d:c;
// printf("��������������:");
// printf("%d\n",e);
//}

//#include <stdio.h>
//void main ()
//{
//  int a,b,c;
//  printf("�������������Ƚϴ�С:");
//  scanf("%d%d%d",&a,&b,&c);
//  a=a>b?a:b,a=a>c?a:c;
//  printf("��������������:");
//  printf("%d\n",a);
//}

//#include <math.h>
//#include <stdio.h>
//void main ()
//{
// double x,y,z;
// printf("����x��y�η�\n");
// printf("����������x,y��");
// scanf("%lf%lf",&x,&y);
// z=pow (x,y);
// printf("x��y�η�=%.3f\n",z);
//
//}

//#include <math.h>
//#include <stdio.h>
//void main()
//{
// double x,y;
// printf("����һ����������ƽ����\n");
// printf("x=");
// scanf("%lf",&x);
// if (x>=0)
// {
//   y=sqrt(x);
//   printf("x������ƽ����=%.3f\n",y);
// }
// if (x<0)
//	 printf("������һ���Ǹ���Ŷ������\n");
//}

//#include <math.h>
//#include <stdio.h>
//void main ()
//{
// double x,y;
// printf("����һ����������ƽ����\n");
// printf("x=");
// scanf("%lf",&x);
// if(x>=0)
// {
//   y=sqrt(x);
//   printf("x������ƽ����=%.3f\n",y);
// }
// else
//   printf("������һ���Ǹ���Ŷ������\n");
//}

//#include <stdio.h>
//void main()
//{
//	int x;
//	scanf("%d",&x);
//	if (x == 1) printf("��������һ\n");
//	else if (x == 2)  printf("�������ܶ�\n");
//	else if (x == 3)  printf("����������\n");
//	else if (x == 4)  printf("����������\n");
//	else if (x == 5)  printf("����������\n");
//	else if (x == 6)  printf("����������\n");
//	else if (x == 7)  printf("����������\n");
//	else printf("����˵ʲô???\n");
//}

//#include <stdio.h>
//void main ()
//{
// double x,y,z;
// printf("�������ȴ�С\n��һ����x=");   //��������С�Ƚ�
// scanf("%lf",&x);
// printf("�ڶ�����y=");
// scanf("%lf",&y);
// printf("��һ����z=");
// scanf("%lf",&z);
// if (x>y)
//	x=x;
// else
//	x=y;
// if (x>z)
//	x=x;
// else
//	x=z;
//printf("��������������%.2f\n",x);
//}
//
//#define PI 3.1415926
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//void main ()
//{
//int x;
//	 printf("\t	**************�������************** \n\n");
//	 printf("\t	*            ver 1.0               * \n\n");
//	 printf("\t	*==================================* \n\n");
//	 printf("\t	*  1.Բ��������ܳ�   2.Բ������� * \n\n");//������
//	 printf("\t	*  3.�������������   4.�������   * \n\n");
//	 printf("\t	*  5.�������Ƚϴ�С   6.ƽ����     * \n\n");
//   printf("\t	*  7.�����ȼ�         8.����       * \n\n");
//	 printf("\t	*==================================* \n\n");
//	 printf("�����빦����� (1-6);  ");
//	 scanf("%d",&x);
// if (x==1)
//{
//	 double r,s,c;
//	 printf("����Բ��������ܳ�\n");
//	 printf("Բ�İ뾶R="); //����Բ��������ܳ�
//	 scanf("%lf",&r);
//	 s=PI*r*r;
//	 c=2*PI*r;
//	 printf("Բ�����S=%.3f   Բ���ܳ�C=%.3f\n",s,c);
// }
// if (x==2)
// {
//	 double r,h,v;
//	 printf("����Բ�������\n");
//	 printf("����������뾶����\n");  //Բ�������
//	 scanf("%lf%lf",&r,&h);
//	v=PI*r*r*h;
//	 printf("Բ��������Ϊ%0.3lf\n\n",v);
// }
//
// if (x==4)
// {
//	 int a,b,age;
//	 printf("��������<�������><��ǰ���>\n\n");//�������
//	 scanf("%d%d",&a,&b);
//	 age=b-a;
//	 printf("�������Ϊ%d\n\n",age);
// }
//
// if (x==3)
// {
//	  float a,b,c,v;
//	 printf("���������볤���:\n");//�������������
//	 printf("��=");
//	 scanf("%f",&a);
//	 printf("��=");
//	 scanf("%f",&b);
//	 printf("��=");
//	 scanf("%f",&c);
//	 v=a*b*c;
//	 printf("������������ v=");
//	 printf("%.3f\n",v);
// }
//
// if (x==5)
// {
//	 double x,y,z;
//	 printf("�������ȴ�С\n��һ����x=");   //��������С�Ƚ�
//	 scanf("%lf",&x);
//	 printf("�ڶ�����y=");
//	 scanf("%lf",&y);
//	 printf("��һ����z=");
//	 scanf("%lf",&z);
//	if (x>y)
//		x=x;
//	 else
//		x=y;
//	if (x>z)
//		x=x;
//	else
//		x=z;
//	printf("��������������%.2f\n",x);
// }
//
// if (x==6)
// {
//	double x,y;
//	 printf("����һ����������ƽ����\n");
//	 printf("x=");
//	 scanf("%lf",&x);
//	 if(x>=0)
//	 {
//	   y=sqrt(x);
//	   printf("x������ƽ����=%.3f\n",y);
//	 }
//	 else
//	   printf("������һ���Ǹ���Ŷ������\n");
//	 }
// if ( x==7)
// {
//	double s;
//	char g;
// printf("���������\n����=");
// scanf("%lf",&s);
// if (s>=0&&s<=100)
// {
//	 if (s>90)
//		 g='A';
//	 else if (s>=80)     ///////////�����⣡
//		 g='B';
//	 else if (s>=70)
//		 g='C';
//	 else if (s>=60)
//		 g='D';
//	 else if
//		 g='E';
//	 printf("��ĵȼ�Ϊ%c\n",g);
// }
// else
//	 printf("������ĳɼ����󣡣���\n ");
// }
//
//
// Sleep (4000);
//}


//#include <stdio.h>
//void main ()
//{
// int a,i;
// a=0;
// i=1;
// while (i<=100)
// {
//  a=a+i;
//  i++;
// }
// printf("%d\n",a);
//}

//#include <stdio.h>
//void main ()
//{
//  int s,i;
//  for (
//		s=0,i=1;
//		i<=100;
//		i++
//	  )
//		s=s+i;
//	  
//  printf("%d\n",s);
//}

//#include <stdio.h>
//void main ()
//{ 
// int i;
// double s,f;
// s=0;f=1;
// for (i=1;i<=8;i++)
//	 {
//		f=f*i;
//	    s+=f;
//     }
//
//	printf("%.0f\n",s);
//}

//#include <stdio.h>
//void main ()
//{
// int s,i;
// i=1;
// s=0;
// do{s+=i;i++;}
// while(i<=100);
// printf("%d\n",s);
//}


//#include <stdio.h>
//void main ()
//{
//	int s,i;
//	s=0;
//	i=1;
//	for (s)
//}

//#include <stdio.h>
//void main ()
//{
// double s;
// char g;
// printf("���������\n����=");
// scanf("%lf",&s);
// if (s>=0&&s<=100)
// {
//	 if (s>90)
//		 g='A';
//	 else if (s>=80)
//		 g='B';
//	 else if (s>=70)
//		 g='C';
//	 else if (s>=60)
//		 g='D';
//	 else 
//		 g='E';
//	 printf("��ĵȼ�Ϊ%c\n",g);
// }
// else
//	 printf("������ĳɼ����󣡣���\n ");
//}

//#include <stdio.h>
//void main ()
//{
// int s;
// char g;
//  printf("���������\n����=");
// scanf("%d",&s);
// if (s>=0&&s<=100)
// {
// switch ((int)s/=10)
// {
//	case 10 :
//	case 9 : 
//   		 g='A';break;
//	case 8 :
//		 g='B';break;
//	case 7 :
//		 g='C';break;
//	case 6 :
//		 g='D';break;
//	default :
//		 g='E';
// }
//  printf("��ĵȼ�Ϊ%c\n",g);
//  
//}
//  else
//	 printf("������ĳɼ����󣡣���\n ");
//}

//#include <stdio.h>
//void main()
//{
//  int  year,month,day;
//   printf("Please input a year:");
//  scanf("%d",&year);
//  printf("Please input a month:");
//  scanf("%d",&month);
//  switch(month)
//  {
//   case 1: case 3:  case 5:  case 7:  case 8:  case 10:  case 12: day=31;break;
//   case 4: case 6:  case 9:  case 11: day=30;break;
//   case 2:  
//	  if(year%4==0&&year%100!=0||year%400==0)
//		  day=29;
//	  else
//		  day=28;
//	  break;
//  }
//  printf("%d month has %d days\n",month ,day);
// }


//#include <stdio.h>
//void main()
//{
	//double sum,i;
	//i=1,sum=0;
	//while(i<=100)
	//{
	//	sum=sum+1/i;
	//	i++;
	//}
	//printf("%f\n",sum);
	//int i,sum;
	//i=1,sum=0;
	//while (i<=100)
	//{
	//	sum=sum+i*i;
	//	i++;
	//}
	//printf("%d\n",sum);
	//int i,sum;
	//i=1,sum=0;
	//while (i<=100)
	//{
	//	sum=sum+i;
	//	i=i+2;
	//}
	//printf("%d\n",sum);
	//int i,sum;
	//i=1,sum=0;
	//while (i<=100)
	//{
    //    if(i%2==0)	  
	//	  sum=sum-i;  	  
	//  else
	//	  sum=sum+i;
	//  i++;
	//}
	//printf("%d\n",sum);

//#include <stdio.h>
//#include <math.h>
//main()
//{ 
//    float sum = 0, term = 1,n = 1;   
//    int    sign = 1;            
//                       
//    while (fabs(term) >= 1e-4)
//    {
//        sum = sum + term;           
//        sign = -sign;     //ʵ��+-         
//        n = n + 2;        //��ĸ+2        
//        term = sign * (1/n);   //��Ҫ�㷨         
//    }
//     
//    printf("sum=%f\n",sum);
//}


//#include <stdio.h>
//#include <math.h>
//void main ()
//{
//	double s,sign,n;
//	n=1,s=0,sign=1;
//	while (fabs(sign/n)>=1e-4)
//	{
//		s+=sign/n;
//		n+=2;
//		sign=-sign;
//	}
//	printf("��ֵ�ǣ�%f\n",s);
//}

//#include <stdio.h>
//void main ()
//{
//	int f1,f2,f3,i;
//	f1=1;
//	f2=1;
//	printf("%5d%5d",f1,f2);
//	for (i=3;i<=20;i++)
//	{
//		f3=f1+f2;
//		printf("%5d",f3);
//		f1=f2;
//		f2=f3;
//		if(i%5==0)
//			printf("\n");
//	}
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,k,n;
//	printf(" ����Ϊ��");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		for (j=1;j<=i-1;j++)
//			printf(" ");
//		for (k=1;k<=(2*n+1)-2*i;k++)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,k,n;
//	n=0;
//	for (i=1;i<=4;i++)
//		for (j=1;j<=4;j++)
//			for (k=1;k<=4;k++)
//				if (i!=j&&i!=k&&j!=k)
//				{
//					printf("%d\n",100*i+10*j+k);
//					n++;
//				}
//	printf("һ����%d��������\n",n);	
//} 

//#include <stdio.h>
//void main ()
//{
//	double x,s,a;
//	int i,j,N,M;
//	printf("����������ѧ����������Ŀ��Ŀ��");
//	scanf("%d%d",&N,&M);
//	for (i=1;i<=N;i++)
//	{
//		s=0;
//		printf("�����������%dѧ���ĳɼ�\n",i);
//		for (j=1;j<=M;j++)
//		{
//			
//			scanf("%lf",&x);
//			s+=x;
//		}
//		a=s/M;
//		printf("��ͬѧ��ƽ����Ϊ��%.3f\n\n",a);
//	}
//		
//		
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,n;
//	printf("����������:");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		for (j=1;j<=i-1;j++)
//			printf(" ");
//		for (j=1;j<=(2*n+1)-2*i;j++)
//			printf("*");
//		printf("\n");
//	}   
//}

//#include <stdio.h>
//void main ()
//{
//	int i,j,n;
//	n=0;
//	for (i=3;i<=100;i++)
//	{
//		for (j=2;j<=i-1;j++)
//			if (i%j==0)
//				break;		
//		if (i==j)
//		{
//			printf("%6d",i);
//			n++;
//			if (n%5==0)
//				printf("\n");	
//		}
//		
//	}
//	printf("\n����%d������\n",n);
//}

//#include <stdio.h>
//#define N 10
//void main ()
//{
// double s[N],a=0;
// int i;
// printf("������ʮ��ͬѧ�ĳɼ���");
// for (i=0;i<=N-1;i++)
// {
//	scanf("%lf",&s[i]);
//	a+=s[i];
// }
// a/=N;
// printf("\nƽ����Ϊ��%.2f\n\n",a);
// for (i=0;i<=N-1;i++)
//	if (s[i]<a)
//		printf ("����ƽ���ֵ��ǣ�%d��  ���ķ����ǣ�%.2f\n\n",i+1,s[i]);
// printf("\n");
//
//}

//#include <stdio.h>
//#define N 5
// void main ()
// {
//	int i,max,min,a[N];
//	printf("����������Ҫ�Ƚϵ�����");
//	for (i=0;i<=N-1;i++)
//		scanf("%d",&a[i]);
//	min=max=a[0];
//	for (i=1;i<=N-1;i++)
//		if (a[i]>max)
//			max=a[i];
//		else
//			min=a[i];
//	printf("\n���ֵΪ��%d\n\n��СֵΪ��%d\n\n",max,min);
//
//
// }

//#include <stdio.h>/////ͳ���ַ�
//void main ()
//{
//	int ge,qi,shu[10]={0},i;
//	char a=0;
//	ge=qi=0;
//	while ((a=getchar())!=EOF)
//	{
//		if (a==' '||a=='\n'||a=='\t')
//			ge++;
//		else if (a>='0'&&a<='9')
//			++shu[a-'0'];
//		else 
//			qi++;
//		
//	}
//	for (i=0;i<10;i++)	
//		printf("����%d��%d��\n",i,shu[i]);
//	printf("�հ׷���%d��\n����%d��\n",ge,qi);
//}


//#include <stdio.h>//////////////////// ð������
//#define N 5
//void main ()
//{
//	int a[N],i,j,x;
//	for (i=0;i<=N-1;i++)
//		scanf("%d",&a[i]);
//
//	for (i=1;i<=N-1;i++)
//		for (j=1;j<=N-i;j++)
//		{
//			if (a[j-1]>a[j])
//			{
//				x=a[j];
//				a[j]=a[j-1];
//				a[j-1]=x;
//			}
//		}
//	
//	for (i=0;i<=N-1;i++)
//		printf("%5d",a[i]);
//	printf("\n");
//}



//#include "stdlib.h"/////////////////ѡ������
//#include "stdio.h"
//void main()
//{   int i,j,k,t,a[10];
//    for(i=0;i<10;i++)
//          a[i]=rand()%61+30;
//    for(i=0;i<9;i++)
//     {
//  /***********space***********/
//        k=i;
//          for(j=i+1;j<10;j++)
//  /***********space***********/
//              if(a[k]>a[j])
//                     k=j;
//         if(k!=i) 
//         {   t=a[k];
//  /***********space***********/
//            a[k]=a[i];
//             a[i]=t;
//           }
//      } 
//  for(i=0;i<10;i++)
//    printf("%5d",a[i]);
//  printf("\n");
//}
