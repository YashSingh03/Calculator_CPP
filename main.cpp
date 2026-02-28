#include <iostream>
#include <iomanip>
#include <cmath>
#include <complex>
#include <numbers>
#include <mutex>

void standard();
void scifi();
void conv();
void trig();
int operat_no=0;

int main(){
  std::cout<<"Scientific calculator"<<std::endl;
  std::cout<<"Select the type of operation you want to perform:"<<std::endl;
  std::cout<<"Standard calculations   ||"<< "Scientific           ||" <<"Unit conversions    ||"<<"21. Trignometric"<<std::endl;
  std::cout<<"1. Addition             ||"<<"8. Logarithm          ||"<<"14. Length"<<std::endl;
  std::cout<<"2. Substraction         ||"<<"9. Factorial          ||"<<"15. Weight"<<std::endl;
  std::cout<<"3. Multiplication       ||"<<"10. Under-Root        ||"<<"16. Temperature"<<std::endl;
  std::cout<<"4. Division             ||"<<"11. Power             ||"<<"17. Pressure"<<std::endl;
  std::cout<<"5. Modulus              ||"<<"12. Pie               ||"<<"18. Power"<<std::endl;
  std::cout<<"6. Squr Root            ||"<<"13. Euler's number    ||"<<"19. Speed"<<std::endl;
  std::cout<<"7. Cube Root            ||"<<"20. Energy"<<std::endl;


  std::cout<<"Enter the operator you want to use from above table (1-21):";
  std::cin>>operat_no;

  if(operat_no>=1&&operat_no<=7){
    standard();
 }else if(operat_no >=8 &&operat_no<=13){
    scifi();
  }else if(operat_no >=14 && operat_no<=20){
    conv();
  }else if(operat_no ==21){
    trig();
  }else{
    std::cout<<"Error!! Enter the correct operator."<<std::endl;
  }
}

void standard(){
  int numofval=0;
  double result =0;
  int num1=0, num2=0;
  int temp=0;

  if(operat_no==1){
    std::cout<<"Enter the total number of values you want to enter: "<<std::endl;
    std::cin>>numofval;

     while(numofval!=0){
       std::cin>>temp;
       result +=temp;
       numofval--;
     }
    std::cout<<"Answer: "<< result<<std::endl;

  }else if(operat_no==2){
    std::cout<<"Enter the total number of values you want to enter: "<<std::endl;
    std::cin>>numofval;

     while(numofval!=0){
       std::cin>>temp;
       result -=temp;
       numofval--;
     }
    std::cout<<"Answer: "<< result<<std::endl;

  }else if(operat_no==3){
    std::cout<<"Enter the total number of values you want to enter: "<<std::endl;
    std::cin>>numofval;
    result=1;

     while(numofval!=0){
       std::cin>>temp;
       result *=temp;
       numofval--;
     }
    std::cout<<"Answer: "<< result<<std::endl;

  }else if (operat_no==4){
    std::cout <<"Enter the dividend: ";
    std::cin>> num1;
    std::cout<< "\n Enter divisor: ";
    std::cin>>num2;
     std::cout<<"\nAnswer: "<< num1/num2<<std::endl;

  }else if (operat_no==5){
    std::cout <<"Enter the dividend: ";
    std::cin>> num1;
    std::cout<< "\n Enter divisor: ";
    std::cin>>num2;
     std::cout<<"\nAnswer: "<< num1%num2<<std::endl;

  }else if (operat_no==6){
    std::cout<<"Enter the number for SQRT: ";
    std::cin>>num1;
    std::cout<<"\nAnswer: "<<std::sqrt(num1)<<std::endl;
  }else if (operat_no==7){
    std::cout<<"Enter the number for Cube root: ";
    std::cin>>num1;
    std::cout<<"\nAnswer: "<<std::cbrt(num1)<<std::endl;
  }

}

void conv(){

  long double num1=0;
  int opr1=0, opr2=0;
  std::cout<<"\nEnter the number: ";
  std::cin>>num1;

  if(operat_no==14){
    std::cout<<"Select the type of value entered:\n1.Micron \n2.Millimeters \n3.Centimeters \n4.meters \n5.Killometers \n6.inches \n7.Feets"<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to:\n1.Micron \n2.Millimeters \n3.Centimeters \n4.meters \n5.Killometers \n6.inches \n7.Feets"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: "<< num1/10000<<std::endl;
    }
    else if(opr1==1&&opr2==4){
      std::cout<<"The converted value is: "<< num1/100000<<std::endl;
    }
    else if(opr1==1&&opr2==5){
      std::cout<<"The converted value is: "<< num1/1000000000<<std::endl;
    }
    else if(opr1==1&&opr2==6){
      std::cout<<"The converted value is: "<< num1/25400<<std::endl;
    }
    else if(opr1==1&&opr2==7){
      std::cout<<"The converted value is: "<< num1/304800<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: "<< num1/10<<std::endl;
    }
    else if(opr1==2&&opr2==4){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==2&&opr2==5){
      std::cout<<"The converted value is: "<< num1*1000000<<std::endl;
    }
    else if(opr1==2&&opr2==6){
      std::cout<<"The converted value is: "<< num1/25.4<<std::endl;
    }
    else if(opr1==2&&opr2==7){
      std::cout<<"The converted value is: "<< num1/304.8<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: "<< num1*10000<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: "<< num1*10<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==3&&opr2==4){
      std::cout<<"The converted value is: "<< num1/100<<std::endl;
    }
    else if(opr1==3&&opr2==5){
      std::cout<<"The converted value is: "<< num1/100000<<std::endl;
    }
    else if(opr1==3&&opr2==6){
      std::cout<<"The converted value is: "<< num1/2.54<<std::endl;
    }
    else if(opr1==3&&opr2==7){
      std::cout<<"The converted value is: "<< num1/30.48<<std::endl;
    }
    else if(opr1==4&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000000<<std::endl;
    }
    else if(opr1==4&&opr2==2){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==4&&opr2==3){
      std::cout<<"The converted value is: "<< num1*100<<std::endl;
    }
    else if(opr1==4&&opr2==4){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==4&&opr2==5){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==4&&opr2==6){
      std::cout<<"The converted value is: "<< num1*39.37<<std::endl;
    }
    else if(opr1==4&&opr2==7){
      std::cout<<"The converted value is: "<< num1*3.281<<std::endl;
    }
    else if(opr1==5&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000000000<<std::endl;
    }
    else if(opr1==5&&opr2==2){
      std::cout<<"The converted value is: "<< num1*1000000<<std::endl;
    }
    else if(opr1==5&&opr2==3){
      std::cout<<"The converted value is: "<< num1*100000<<std::endl;
    }
    else if(opr1==5&&opr2==4){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==5&&opr2==5){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==5&&opr2==6){
      std::cout<<"The converted value is: "<< num1*39370.1<<std::endl;
    }
    else if(opr1==5&&opr2==7){
      std::cout<<"The converted value is: "<< num1*3280.84<<std::endl;
    }
    else if(opr1==6&&opr2==1){
      std::cout<<"The converted value is: "<< num1*25400<<std::endl;
    }
    else if(opr1==6&&opr2==2){
      std::cout<<"The converted value is: "<< num1*25.4<<std::endl;
    }
    else if(opr1==6&&opr2==3){
      std::cout<<"The converted value is: "<< num1*2.54<<std::endl;
    }
    else if(opr1==6&&opr2==4){
      std::cout<<"The converted value is: "<< num1/0.0254<<std::endl;
    }
    else if(opr1==6&&opr2==5){
      std::cout<<"The converted value is: "<< num1/39370<<std::endl;
    }
    else if(opr1==6&&opr2==6){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==6&&opr2==7){
      std::cout<<"The converted value is: "<< num1/12<<std::endl;
    }
    else if(opr1==7&&opr2==1){
      std::cout<<"The converted value is: "<< num1*304800<<std::endl;
    }
    else if(opr1==7&&opr2==2){
      std::cout<<"The converted value is: "<< num1*304.8<<std::endl;
    }
    else if(opr1==7&&opr2==3){
      std::cout<<"The converted value is: "<< num1*30.48<<std::endl;
    }
    else if(opr1==7&&opr2==4){
      std::cout<<"The converted value is: "<< num1/3.281<<std::endl;
    }
    else if(opr1==7&&opr2==5){
      std::cout<<"The converted value is: "<< num1/3281<<std::endl;
    }
    else if(opr1==7&&opr2==6){
      std::cout<<"The converted value is: "<< num1*12<<std::endl;
    }
    else if(opr1==7&&opr2==7){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }

  }


  if (operat_no==15) {
    std::cout<<"Select the type of value to be entered: \n1.Milligrams \n2.Grams \n3. Kilograms \n4. pounds"<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to: \n1.Milligrams \n2.Grams \n3. Kilograms \n4. pounds"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: "<< num1/1000000<<std::endl;
    }
    else if(opr1==1&&opr2==4){
      std::cout<<"The converted value is: "<< num1/453600<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==2&&opr2==4){
      std::cout<<"The converted value is: "<< num1/453.6<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000000<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==3&&opr2==4){
      std::cout<<"The converted value is: "<< num1*2.205<<std::endl;
    }
    else if(opr1==4&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*453600<<std::endl;
    }
    else if(opr1==4&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1*453.592<<std::endl;
    }
    else if(opr1==4&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1/2.205<<std::endl;
    }
    else if(opr1==4&&opr2==4){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
  }


  if (operat_no==16) {
    std::cout<<"Select the type of value to be entered: \n1.Celsius \n2.Fahrenheit \n3. Kelvin"<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to: \n1.Celsius \n2.Fahrenheit \n3. Kelvin"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: "<< (num1*9/5)+32<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: "<< num1+273.15<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: "<< (num1-32)*5/9<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: "<< (num1-32)*5/9+273.15<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: "<< num1-273.15<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: "<< (num1-273.15)*9/5+32<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
  }

if (operat_no==17) {
    std::cout<<"Select the type of value to be entered: \n1.Atmosphere \n2.Bars \n3. Pascals \n4. Kilopascals"<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to: \n1.Atmosphere \n2.Bars \n3. Pascals \n4. Kilopascals"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1*1.013<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1*101300<<std::endl;
    }
    else if(opr1==1&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*101.3<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1/1.013<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: "<< num1/100000<<std::endl;
    }
    else if(opr1==2&&opr2==4){
      std::cout<<"The converted value is: "<< num1*100<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1/101300<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: "<< num1/100000<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==3&&opr2==4){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==4&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1/101.3<<std::endl;
    }
    else if(opr1==4&&opr2==2){
      std::cout<<"The converted value is: "<< num1/100<<std::endl;
    }
    else if(opr1==4&&opr2==3){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==4&&opr2==4){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
  }

   
if (operat_no==18) {
    std::cout<<"Select the type of value to be entered: \n1.Watts \n2.Kilowatts \n3. Horsepower \n4. Foot-pounds/Minute"<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to: \n1.Watts \n2.Kilowatts \n3. Horsepower \n4. Foot-pounds/Minute"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: "<< num1/745.7<<std::endl;
    }
    else if(opr1==1&&opr2==4){
      std::cout<<"The converted value is: "<< num1*44.2537<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1*1.341<<std::endl;
    }
    else if(opr1==2&&opr2==4){
      std::cout<<"The converted value is: "<< num1*44253.7<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*745.7<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: "<< num1/1.341<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==3&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*550<<std::endl;
    }
    else if(opr1==4&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1/44.2537<<std::endl;
    }
    else if(opr1==4&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1/44253.7<<std::endl;
    }
    else if(opr1==4&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1/33000<<std::endl;
    }
    else if(opr1==4&&opr2==4){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
  }


if(operat_no==19){
    std::cout<<"Select the type of value entered:\n1.Meters/Sec \n2.Killometers/Sec \n3.Feet/Sec \n4.Miles/Hr \n5.Knots \n6.Mach "<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to:\n1.Meters/Sec \n2.Kilometers/Sec \n3.Feet/Sec \n4.Miles/Hr \n5.Knots \n6.Mach"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: "<< num1*3.281<<std::endl;
    }
    else if(opr1==1&&opr2==4){
      std::cout<<"The converted value is: "<< num1*2.237<<std::endl;
    }
    else if(opr1==1&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1*1.944<<std::endl;
    }
    else if(opr1==1&&opr2==6){
      std::cout<<"The converted value is: "<< num1*343<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1*3281<<std::endl;
    }
    else if(opr1==2&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*2237<<std::endl;
    }
    else if(opr1==2&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1*1944<<std::endl;
    }
    else if(opr1==2&&opr2==6){
      std::cout<<"The converted value is: ~"<< num1*2.915<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*3.281<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1/3281<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==3&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1/1.467<<std::endl;
    }
    else if(opr1==3&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1/1.688<<std::endl;
    }
    else if(opr1==3&&opr2==6){
      std::cout<<"The converted value is: ~"<< num1*1125<<std::endl;
    }
    else if(opr1==4&&opr2==1){
      std::cout<<"The converted value is: "<< num1/2.237<<std::endl;
    }
    else if(opr1==4&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1/2237<<std::endl;
    }
    else if(opr1==4&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1*1.467<<std::endl;
    }
    else if(opr1==4&&opr2==4){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==4&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1/1.151<<std::endl;
    }
    else if(opr1==4&&opr2==6){
      std::cout<<"The converted value is: ~"<< num1*767.3<<std::endl;
    }
    else if(opr1==5&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1/1.944<<std::endl;
    }
    else if(opr1==5&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1/1944<<std::endl;
    }
    else if(opr1==5&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1*1.688<<std::endl;
    }
    else if(opr1==5&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*1.151<<std::endl;
    }
    else if(opr1==5&&opr2==5){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==5&&opr2==6){
      std::cout<<"The converted value is: ~"<< num1/666.7<<std::endl;
    }
    else if(opr1==6&&opr2==1){
      std::cout<<"The converted value is: "<< num1*343<<std::endl;
    }
    else if(opr1==6&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1/2.916<<std::endl;
    }
    else if(opr1==6&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1*1125<<std::endl;
    }
    else if(opr1==6&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*767.3<<std::endl;
    }
    else if(opr1==6&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1*666.7<<std::endl;
    }
    else if(opr1==6&&opr2==6){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
  }


if(operat_no==20){
    std::cout<<"Select the type of value entered:\n1.Electron volts \n2.Joules \n3.Kilojoules \n4.Foot-pounds \n5.British thermal units \n6.Kilowatt-Hours "<<std::endl;
    std::cin>>opr1;
    std::cout<<"Convert the value to:\n1.Electron volts \n2.Joules \n3.Kilojoules \n4.Foot-pounds \n5.British thermal units \n6.Kilowatt-Hours"<<std::endl;
    std::cin>>opr2;

    if(opr1==1&&opr2==1){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==1&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1/34.96752<<std::endl;
    }
    else if(opr1==1&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1/-17.64482<<std::endl;
    }
    else if(opr1==1&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1/-15.78781<<std::endl;
    }
    else if(opr1==1&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1/-15.78781<<std::endl;
    }
    else if(opr1==1&&opr2==6){
      std::cout<<"The converted value is: "<< num1/31.10798<<std::endl;
    }
    else if(opr1==2&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*34.96752<<std::endl;
    }
    else if(opr1==2&&opr2==2){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==2&&opr2==3){
      std::cout<<"The converted value is: "<< num1/1000<<std::endl;
    }
    else if(opr1==2&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1/1.356<<std::endl;
    }
    else if(opr1==2&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1/1055<<std::endl;
    }
    else if(opr1==2&&opr2==6){
      std::cout<<"The converted value is: "<< num1/15.78581<<std::endl;
    }
    else if(opr1==3&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*37.96752<<std::endl;
    }
    else if(opr1==3&&opr2==2){
      std::cout<<"The converted value is: "<< num1*1000<<std::endl;
    }
    else if(opr1==3&&opr2==3){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==3&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*737.6<<std::endl;
    }
    else if(opr1==3&&opr2==5){
      std::cout<<"The converted value is: "<< num1/1.055<<std::endl;
    }
    else if(opr1==3&&opr2==6){
      std::cout<<"The converted value is: "<< num1/3600<<std::endl;
    }
    else if(opr1==4&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*41.0021<<std::endl;
    }
    else if(opr1==4&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1*1.356<<std::endl;
    }
    else if(opr1==4&&opr2==3){
      std::cout<<"The converted value is: ~"<< num1/737.6<<std::endl;
    }
    else if(opr1==4&&opr2==4){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==4&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1/778.2<<std::endl;
    }
    else if(opr1==4&&opr2==6){
      std::cout<<"The converted value is: ~"<< num1/13.21704<<std::endl;
    }
    else if(opr1==5&&opr2==1){
      std::cout<<"The converted value is: ~"<< num1*38.89989<<std::endl;
    }
    else if(opr1==5&&opr2==2){
      std::cout<<"The converted value is: ~"<< num1*1055<<std::endl;
    }
    else if(opr1==5&&opr2==3){
      std::cout<<"The converted value is: "<< num1*1.055<<std::endl;
    }
    else if(opr1==5&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*778.2<<std::endl;
    }
    else if(opr1==5&&opr2==5){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
    else if(opr1==5&&opr2==6){
      std::cout<<"The converted value is: ~"<< num1/3412<<std::endl;
    }
    else if(opr1==6&&opr2==1){
      std::cout<<"The converted value is: "<< num1*31.10798<<std::endl;
    }
    else if(opr1==6&&opr2==2){
      std::cout<<"The converted value is: "<< num1*15.78581<<std::endl;
    }
    else if(opr1==6&&opr2==3){
      std::cout<<"The converted value is: "<< num1*3600<<std::endl;
    }
    else if(opr1==6&&opr2==4){
      std::cout<<"The converted value is: ~"<< num1*13.21704<<std::endl;
    }
    else if(opr1==6&&opr2==5){
      std::cout<<"The converted value is: ~"<< num1*3412<<std::endl;
    }
    else if(opr1==6&&opr2==6){
      std::cout<<"The converted value is: "<< num1<<std::endl;
    }
  }
}

void scifi() {
  int num1=0;
  std::cout<<"\nEnter the number: ";
  std::cin>>num1;

  if (operat_no==8) {
    std::cout<<"The log of "<<num1<<" is: "<<std::log(num1)<<std::endl;
  }else if (operat_no==9) {
    long long result = 1;
    for (int i = 1; i <= num1; ++i) {
      result *= i;
    }
    std::cout<<"The Factorial of "<<num1<<" is: "<<result<<std::endl;
  }else if (operat_no==10) {
      std::cout<<"The Square root of "<<num1<<" is: "<<std::sqrt(num1)<<std::endl;
  }else if (operat_no==11) {
      int pwr=0;
      std::cout<<"Enter the power for"<< num1<<" :"<<std::endl;
      std::cin>>pwr;
      std::cout<<"Answer: "<<std::pow(num1,pwr)<<std::endl;
  }else if (operat_no==12) {
    std::cout<<"Answer: "<<std::numbers::pi*num1<<std::endl;
  }
  else if (operat_no==13) {
    std::cout<<"Answer: "<<std::numbers::e*num1<<std::endl;
  }
}

void trig() {
  int opr=0,deg=0,num=0;
  double rad=0;
  std::cout<<"Select conversion: \n1.Normal \n2.Inverse"<<std::endl;
  std::cin>>opr;
  if (opr==1) {
    std::cout<<"Choose: \n1.Sin \n2.Cos \n3.Tan"<<std::endl;
    std::cin>>deg;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    rad=num*(std::numbers::pi / 180.0);
    if (deg==1) {
      std::cout<<"Sin("<<num<<"): "<<std::sin(rad)<<std::endl;
    }else if (deg==2) {
      std::cout<<"Cos("<<num<<"): "<<std::cos(rad)<<std::endl;
    }else if (deg==3) {
      std::cout<<"Tan("<<num<<"): "<<std::tan(rad)<<std::endl;
    }

  }else if (opr==21) {
    std::cout<<"Choose: \n1.Sin(-1 to 1) \n2.Cos(-1 to 1) \n3.Tan"<<std::endl;
    std::cin>>deg;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    rad=num*(std::numbers::pi / 180.0);
    if (deg==1) {
      if (num>-1&&num<1) {
        std::cout<<"Sin Inv("<<num<<"): "<<std::asin(rad)<<std::endl;
      }else {
        std::cout<<"Error!!! the conversion value must be between -1 to 1"<<std::endl;
      }
    }else if (deg==2) {
      if (num>-1&&num<1) {
        std::cout<<"Cos Inv("<<num<<"): "<<std::acos(rad)<<std::endl;
      }else {
        std::cout<<"Error!!! the conversion value must be between -1 to 1"<<std::endl;
      }
    }else if (deg==3) {
      std::cout<<"Tan Inv("<<num<<"): "<<std::atan(rad)<<std::endl;
    }
  }



}