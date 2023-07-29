 //英寸换厘米  （1英寸 = 2.54厘米）
 #include <stdio.h>
 int main()
 {
    float n;
    printf("请输入英寸数：");
    scanf("%f",&n);
    n *= 2.54;
    printf("厘米数为：%f\n",n);

    return 0;
 }
