 #include<stdio.h>
 void swap (float *b1, float *b2)
 {
    printf("befor hacking : a has became GOVINDA %f b has %f\n", *b1,*b2);
    float temp=0;
    temp=*b1;
    *b1=*b2;
    *b2=temp;
    printf("after hacking: a has %f b has became GOVINDA %f\n", b1,b2);
 }
 void main()

 {
    float b1,b2;
    printf(" enter b1,b2");
    scanf("%f%f", &b1,&b2);
    swap (&b1,&b2);
 }