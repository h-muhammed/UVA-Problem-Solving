#include <stdio.h>
#include <math.h>

int main()
{
    double r1,r2,r3, m1,m2,m3,theta1,theta2,theta3,s;
    int cas,i;
    scanf("%d",&cas);
    for(i=0;i<cas;i++){
      scanf("%lf %lf %lf",&r1,&r2,&r3);

       m1= r2+r3;
       m2= r1+r3;
       m3= r1+r2;

       theta1=acos((m2*m2+m3*m3-m1*m1)/(2*m2*m3));
       theta2=acos((m1*m1+m3*m3-m2*m2)/(2*m1*m3));
       theta3=acos((m2*m2+m1*m1-m3*m3)/(2*m2*m1));

      s=(m1+m2+m3)/2.0;
      double areaOfTri=sqrt(s*(s-m1)*(s-m2)*(s-m3));

      double areaofArc1=0.5*theta1*r1*r1;
      double areaofArc2=0.5*theta2*r2*r2;
      double areaofArc3=0.5*theta3*r3*r3;

      double ans=areaOfTri-areaofArc1-areaofArc2-areaofArc3;
      printf("%.6f\n", ans);
    }
    return 0;
}
