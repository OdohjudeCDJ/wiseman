#include <iostream>
class Matrix{
    public:
    void Exit(){
      int main();
    ///Matrix option;
    int exit; 
    // system("cls");
     std::cout<<"\t\t\n1.Calculate  Again.\n2.Exit Matrix Calulator\n    <->.";
     std::cin>>exit;
     if(exit==1){
        list();
        main();
        
      }
       else if(exit==2){
          std::cout<<"\t\t  ___ ___   ____ _____ ____                 "<<std::endl;
          std::cout<<"\t\t |   |   | |    |  |  |    | | |    |       "<<std::endl;
          std::cout<<"\t\t |   |   | |____|  |  |____/ |  |__/        "<<std::endl;
          std::cout<<"\t\t |       | |    |  |  |    | |  /  |        "<<std::endl;
          std::cout<<"\t\t |       | |    |  |  |    | | |    |       "<<std::endl;
          std::cout<<"\t\t                         ....by @WiseMan    "<<std::endl;
          system("pause");
      }
    }
      void list(){
        double num[]= {1,2,3,4,5,6};
        std::cout<<"\t\t      [";
        for(int i=0;i<6;i++){
          std::cout<<"  |("<< num[i]<<")|";
        }
    
        std::cout<<"  ]\n\n\n";
        std::cout<<"\t\t|\t\t1.ADDITION OF MATRICES.            |\n"<<std::endl;  
        std::cout<<"\t\t|\t\t2.SUBTRACTION OF MATRICES.         |\n"<<std::endl;
        std::cout<<"\t\t|\t\t3.MULTIPLICATION OF MATRICES.      |\n"<<std::endl;
        std::cout<<"\t\t|\t\t4.INVERSE OF MATRICES.             |\n"<<std::endl;
        std::cout<<"\t\t|\t\t5.TRANSPOSE OF MATRICES.           |\n"<<std::endl; 
        std::cout<<"\t\t|\t\t6.DETERMINANTS OF MATRICES.        |\n"<<std::endl;
  
      }
      Matrix(){
          std::string question = "\t\t      Which calculation do you want do on Matrices ?";
          std::cout<<"\t\t_____________________________________________________\n"<<std::endl;
          std::cout<< question << std::endl;
      }
      double add2x2M(){
        double numA1,numA2,numA3,numA4,numB1,numB2,numB3,numB4;
          ele:
          std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
          std::cout<<"Enter first element of Matrix A: ";
          std::cin>>numA1;
          std::cout<<"Enter second element of Matrix A: ";
          std::cin>>numA2;
          std::cout<<"Enter third element of Matrix A: ";
          std::cin>>numA3;
          std::cout<<"Enter fourth element of Matrix A: ";
          std::cin>>numA4;
          std::cout<<"This is your Matrix A ?"<<std::endl;
          std::cout<<"[ "<<numA1<<"  "<<numA2<<" ]\n";
          std::cout<<"[ "<<numA3<<"  "<<numA4<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          int q;
          std::cin>>q;
      switch(q){
        case 1:{
          ddd:
          std::cout<<"Enter first element of Matrix B: ";
          std::cin>>numB1;
          std::cout<<"Enter second element of Matrix B: ";
          std::cin>>numB2;
          std::cout<<"Enter third element of Matrix B: ";
          std::cin>>numB3;
          std::cout<<"Enter fourth element of Matrix B: ";
          std::cin>>numB4;
          std::cout<<"This is your Matrix B ?"<<std::endl;
          std::cout<<"[ "<<numB1<<"  "<<numB2<<" ]\n";
          std::cout<<"[ "<<numB3<<"  "<<numB4<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          double m;
          std::cin>>m;
          if(m==1){
            double ans;
              double C1R1=numA1+numB1;
              double C1R2=numA3+numB3;
              double C2R1=numA2+numB2;
              double C2R2=numA4+numB4;
              system("cls");
              std::cout<<"Answer = \n";
              std::cout<<"[ "<<C1R1<<"  "<<C2R1<<" ]\n";
              std::cout<<"[ "<<C1R2<<"  "<<C2R2<<" ]\n";
              Exit();
            }
          else if(m==2){
              system("cls");
              goto ddd;
            }
          break;
        }
        case 2:{
            system("cls");
            goto ele;
        }
        default:
            std::cout<<"Invalid Entry"<<std::endl;
        break;
      }
      return 0;
    }


      double add3x3M(){
          double numA11,numA22,numA33,numA44,numA55,numA66,numA77,numA88,numA99;
          double numB11,numB22,numB33,numB44,numB55,numB66,numB77,numB88,numB99;
          el:
          std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
          std::cout<<"Enter first element of Matrix A: ";
          std::cin>>numA11;
          std::cout<<"Enter second element of Matrix A: ";
          std::cin>>numA22;
          std::cout<<"Enter third element of Matrix A: ";
          std::cin>>numA33;
          std::cout<<"Enter fourth element of Matrix A: ";
          std::cin>>numA44;
          std::cout<<"Enter fifth element of Matrix A: ";
          std::cin>>numA55;
          std::cout<<"Enter sixth element of Matrix A: ";
          std::cin>>numA66;
          std::cout<<"Enter seventh element of Matrix A: ";
          std::cin>>numA77;
          std::cout<<"Enter eight element of Matrix A: ";
          std::cin>>numA88;
          std::cout<<"Enter ninth element of Matrix A: ";
          std::cin>>numA99;
          std::cout<<"This is your Matrix A ?"<<std::endl;
          std::cout<<"[ "<<numA11<<"  "<<numA22<<"  "<<numA33<<" ]\n";
          std::cout<<"[ "<<numA44<<"  "<<numA55<<"  "<<numA66<<" ]\n";
          std::cout<<"[ "<<numA77<<"  "<<numA88<<"  "<<numA99<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          int qg;
          std::cin>>qg;
      switch(qg){
        case 1:{
            od:
          std::cout<<"Enter first element of Matrix B: ";
          std::cin>>numB11;
          std::cout<<"Enter second element of Matrix B: ";
          std::cin>>numB22;
          std::cout<<"Enter third element of Matrix B: ";
          std::cin>>numB33;
          std::cout<<"Enter fourth element of Matrix B: ";
          std::cin>>numB44;
          std::cout<<"Enter fifth element of Matrix B: ";
          std::cin>>numB55;
          std::cout<<"Enter sixth element of Matrix B: ";
          std::cin>>numB66;
          std::cout<<"Enter seventh element of Matrix B: ";
          std::cin>>numB77;
          std::cout<<"Enter eight element of Matrix B: ";
          std::cin>>numB88;
          std::cout<<"Enter ninth element of Matrix B: ";
          std::cin>>numB99;
          std::cout<<"[ "<<numB11<<"  "<<numB22<<"  "<<numB33<<" ]\n";
          std::cout<<"[ "<<numB44<<"  "<<numB55<<"  "<<numB66<<" ]\n";
          std::cout<<"[ "<<numB77<<"  "<<numB88<<"  "<<numB99<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          double m;
          std::cin>>m;
          if(m==1){
              double ans;
              double C1R1=numA11+numB11;
              double C1R2=numA44+numB44;
              double C1R3=numA77+numB77;
              double C2R1=numA22+numB22;
              double C2R2=numA55+numB55;
              double C2R3=numA88+numB88;
              double C3R1=numA33+numB33;
              double C3R2=numA66+numB66;
              double C3R3=numA99+numB99;
              system("cls");
              std::cout<<"Answer = \n";
              std::cout<<"[ "<<C1R1<<"  "<<C2R1<<"  "<<C3R1<<" ]\n";
              std::cout<<"[ "<<C1R2<<"  "<<C2R2<<"  "<<C3R2<<" ]\n";
              std::cout<<"[ "<<C1R3<<"  "<<C2R3<<"  "<<C3R3<<" ]\n";
              Exit();
            }
          else if(m==2){
              system("cls");
              goto od;
            }
          break;
       }
        case 2:{
            system("cls");
            goto el;
            break;
        }
        default:
            std::cout<<"Invalid Entry"<<std::endl;
            break;
        }
        return 0;
     }
      double sub2x2M(){
          double numA1,numA2,numA3,numA4,numB1,numB2,numB3,numB4;
              le:
              std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
              std::cout<<"Enter first element of Matrix A: ";
              std::cin>>numA1;
              std::cout<<"Enter second element of Matrix A: ";
              std::cin>>numA2;
              std::cout<<"Enter third element of Matrix A: ";
              std::cin>>numA3;
              std::cout<<"Enter fourth element of Matrix A: ";
              std::cin>>numA4;
              std::cout<<"This is your Matrix A ?"<<std::endl;
              std::cout<<"[ "<<numA1<<"  "<<numA2<<" ]\n";
              std::cout<<"[ "<<numA3<<"  "<<numA4<<" ]\n";
              std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
              int q;
              std::cin>>q;
      switch(q){
          case 1:{
              ty:
              std::cout<<"Enter first element of Matrix B: ";
              std::cin>>numB1;
              std::cout<<"Enter second element of Matrix B: ";
              std::cin>>numB2;
              std::cout<<"Enter third element of Matrix B: ";
              std::cin>>numB3;
              std::cout<<"Enter fourth element of Matrix B: ";
              std::cin>>numB4;
              std::cout<<"This is your Matrix B ?"<<std::endl;
              std::cout<<"[ "<<numB1<<"  "<<numB2<<" ]\n";
              std::cout<<"[ "<<numB3<<"  "<<numB4<<" ]\n";
              std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
              double m;
              std::cin>>m;
              if(m==1){
                  double ans;
                    double C1R1=numA1-numB1;
                    double C1R2=numA3-numB3;
                    double C2R1=numA2-numB2;
                    double C2R2=numA4-numB4;
                    system("cls");
                    std::cout<<"Answer = \n";
                    std::cout<<"[ "<<C1R1<<"  "<<C2R1<<" ]\n";
                    std::cout<<"[ "<<C1R2<<"  "<<C2R2<<" ]\n";
                    Exit();
                }
                else if(m==2){
                    system("cls");
                    goto ty;
                }
                break;
          }
          case 2:{
              system("cls");
              goto le;
            }
          default:
              std::cout<<"Invalid Entry"<<std::endl;
              break;
        }
        return 0;  
      }

      double sub3x3M(){
          double numA11,numA22,numA33,numA44,numA55,numA66,numA77,numA88,numA99;
          double numB11,numB22,numB33,numB44,numB55,numB66,numB77,numB88,numB99;
          ol:
          std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
          std::cout<<"Enter first element of Matrix A: ";
          std::cin>>numA11;
          std::cout<<"Enter second element of Matrix A: ";
          std::cin>>numA22;
          std::cout<<"Enter third element of Matrix A: ";
          std::cin>>numA33;
          std::cout<<"Enter fourth element of Matrix A: ";
          std::cin>>numA44;
          std::cout<<"Enter fifth element of Matrix A: ";
          std::cin>>numA55;
          std::cout<<"Enter sixth element of Matrix A: ";
          std::cin>>numA66;
          std::cout<<"Enter seventh element of Matrix A: ";
          std::cin>>numA77;
          std::cout<<"Enter eight element of Matrix A: ";
          std::cin>>numA88;
          std::cout<<"Enter ninth element of Matrix A: ";
          std::cin>>numA99;
          std::cout<<"This is your Matrix A ?"<<std::endl;
          std::cout<<"[ "<<numA11<<"  "<<numA22<<"  "<<numA33<<" ]\n";
          std::cout<<"[ "<<numA44<<"  "<<numA55<<"  "<<numA66<<" ]\n";
          std::cout<<"[ "<<numA77<<"  "<<numA88<<"  "<<numA99<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          int qg;
          std::cin>>qg;
      switch(qg){
          case 1:{
          dod:
          std::cout<<"Enter first element of Matrix B: ";
          std::cin>>numB11;
          std::cout<<"Enter second element of Matrix B: ";
          std::cin>>numB22;
          std::cout<<"Enter third element of Matrix B: ";
          std::cin>>numB33;
          std::cout<<"Enter fourth element of Matrix B: ";
          std::cin>>numB44;
          std::cout<<"Enter fifth element of Matrix B: ";
          std::cin>>numB55;
          std::cout<<"Enter sixth element of Matrix B: ";
          std::cin>>numB66;
          std::cout<<"Enter seventh element of Matrix B: ";
          std::cin>>numB77;
          std::cout<<"Enter eight element of Matrix B: ";
          std::cin>>numB88;
          std::cout<<"Enter ninth element of Matrix B: ";
          std::cin>>numB99;
          std::cout<<"[ "<<numB11<<"  "<<numB22<<"  "<<numB33<<" ]\n";
          std::cout<<"[ "<<numB44<<"  "<<numB55<<"  "<<numB66<<" ]\n";
          std::cout<<"[ "<<numB77<<"  "<<numB88<<"  "<<numB99<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          double m;
          std::cin>>m;
          if(m==1){
             double ans;
                double C1R1=numA11-numB11;
                double C1R2=numA44-numB44;
                double C1R3=numA77-numB77;
                double C2R1=numA22-numB22;
                double C2R2=numA55-numB55;
                double C2R3=numA88-numB88;
                double C3R1=numA33-numB33;
                double C3R2=numA66-numB66;
                double C3R3=numA99-numB99;
                system("cls");
                std::cout<<"Answer = \n";
                std::cout<<"[ "<<C1R1<<"  "<<C2R1<<"  "<<C3R1<<" ]\n";
                std::cout<<"[ "<<C1R2<<"  "<<C2R2<<"  "<<C3R2<<" ]\n";
                std::cout<<"[ "<<C1R3<<"  "<<C2R3<<"  "<<C3R3<<" ]\n";
                Exit();
              }
          else if(m==2){
                system("cls");
                goto dod;
              }
                break;
              }
          case 2:{
                system("cls");
                goto ol;
                break;
              }
          default:
                std::cout<<"Invalid Entry"<<std::endl;
                break;
          }
          return 0;
        }

      double mult2x2M(){
         double numA1,numA2,numA3,numA4,numB1,numB2,numB3,numB4;
                ee:
                std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
                std::cout<<"Enter first element of Matrix A: ";
                std::cin>>numA1;
                std::cout<<"Enter second element of Matrix A: ";
                std::cin>>numA2;
                std::cout<<"Enter third element of Matrix A: ";
                std::cin>>numA3;
                std::cout<<"Enter fourth element of Matrix A: ";
                std::cin>>numA4;
                std::cout<<"This is your Matrix A ?"<<std::endl;
                std::cout<<"[ "<<numA1<<"  "<<numA2<<" ]\n";
                std::cout<<"[ "<<numA3<<"  "<<numA4<<" ]\n";
                std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                int q;
                std::cin>>q;
                switch(q){
                  case 1:{
                        f:
                        std::cout<<"Enter first element of Matrix B: ";
                        std::cin>>numB1;
                        std::cout<<"Enter second element of Matrix B: ";
                        std::cin>>numB2;
                        std::cout<<"Enter third element of Matrix B: ";
                        std::cin>>numB3;
                        std::cout<<"Enter fourth element of Matrix B: ";
                        std::cin>>numB4;
                        std::cout<<"This is your Matrix B ?"<<std::endl;
                        std::cout<<"[ "<<numB1<<"  "<<numB2<<" ]\n";
                        std::cout<<"[ "<<numB3<<"  "<<numB4<<" ]\n";
                        std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                        double m;
                        std::cin>>m;
                        if(m==1){
                            double ans;
                                double C1R1=(numA1*numB1) + (numA2*numB3);
                                double C1R2=(numA3*numB1) + (numA4*numB3);
                                double C2R1=(numA1*numB2) + (numA2*numB4);
                                double C2R2=(numA3*numB2) + (numA4*numB4);
                                system("cls");
                                std::cout<<"Answer = \n";
                                std::cout<<"[ "<<C1R1<<"  "<<C2R1<<" ]\n";
                                std::cout<<"[ "<<C1R2<<"  "<<C2R2<<" ]\n";
                                Exit();
                          }
                          else if(m==2){
                                system("cls");
                                goto f;
                           }
                                break;
                          }
                  case 2:{
                        system("cls");
                        goto ee;
                      }
                  default:
                      std::cout<<"Invalid Entry"<<std::endl;
                      break;
      }
      return 0;
  }

        double mult3x3M(){
              double numA11,numA22,numA33,numA44,numA55,numA66,numA77,numA88,numA99;
              double numB11,numB22,numB33,numB44,numB55,numB66,numB77,numB88,numB99;
                  lee:
                  std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
                  std::cout<<"Enter first element of Matrix A: ";
                  std::cin>>numA11;
                  std::cout<<"Enter second element of Matrix A: ";
                  std::cin>>numA22;
                  std::cout<<"Enter third element of Matrix A: ";
                  std::cin>>numA33;
                  std::cout<<"Enter fourth element of Matrix A: ";
                  std::cin>>numA44;
                  std::cout<<"Enter fifth element of Matrix A: ";
                  std::cin>>numA55;
                  std::cout<<"Enter sixth element of Matrix A: ";
                  std::cin>>numA66;
                  std::cout<<"Enter seventh element of Matrix A: ";
                  std::cin>>numA77;
                  std::cout<<"Enter eight element of Matrix A: ";
                  std::cin>>numA88;
                  std::cout<<"Enter ninth element of Matrix A: ";
                  std::cin>>numA99;
                  std::cout<<"This is your Matrix A ?"<<std::endl;
                  std::cout<<"[ "<<numA11<<"  "<<numA22<<"  "<<numA33<<" ]\n";
                  std::cout<<"[ "<<numA44<<"  "<<numA55<<"  "<<numA66<<" ]\n";
                  std::cout<<"[ "<<numA77<<"  "<<numA88<<"  "<<numA99<<" ]\n";
                  std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                  int qg;
                  std::cin>>qg;
                  switch(qg){
                    case 1:{
                      Odo:
                  std::cout<<"Enter first element of Matrix B: ";
                  std::cin>>numB11;
                  std::cout<<"Enter second element of Matrix B: ";
                  std::cin>>numB22;
                  std::cout<<"Enter third element of Matrix B: ";
                  std::cin>>numB33;
                  std::cout<<"Enter fourth element of Matrix B: ";
                  std::cin>>numB44;
                  std::cout<<"Enter fifth element of Matrix B: ";
                  std::cin>>numB55;
                  std::cout<<"Enter sixth element of Matrix B: ";
                  std::cin>>numB66;
                  std::cout<<"Enter seventh element of Matrix B: ";
                  std::cin>>numB77;
                  std::cout<<"Enter eight element of Matrix B: ";
                  std::cin>>numB88;
                  std::cout<<"Enter ninth element of Matrix B: ";
                  std::cin>>numB99;
                  std::cout<<"[ "<<numB11<<"  "<<numB22<<"  "<<numB33<<" ]\n";
                  std::cout<<"[ "<<numB44<<"  "<<numB55<<"  "<<numB66<<" ]\n";
                  std::cout<<"[ "<<numB77<<"  "<<numB88<<"  "<<numB99<<" ]\n";
                  std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                  double m;
                  std::cin>>m;
                  if(m==1){
                    double ans;
                        double C1R1=(numA11*numB11) + (numA22*numB44) + (numA33*numB77);
                        double C1R2=(numA44*numB11) + (numA55*numB44) + (numA66*numB77);
                        double C1R3=(numA77*numB11) + (numA88*numB44) + (numA99*numB77);
                        double C2R1=(numA11*numB22) + (numA22*numB55) + (numA33*numB88);
                        double C2R2=(numA44*numB22) + (numA55*numB55) + (numA66*numB88);
                        double C2R3=(numA77*numB22) + (numA88*numB55) + (numA99*numB88);
                        double C3R1=(numA11*numB33) + (numA22*numB66) + (numA33*numB99);
                        double C3R2=(numA44*numB33) + (numA55*numB66) + (numA66*numB99);
                        double C3R3=(numA77*numB33) + (numA88*numB66) + (numA99*numB99);
                        system("cls");
                        std::cout<<"Answer = \n";
                        std::cout<<"[ "<<C1R1<<"  "<<C2R1<<"  "<<C3R1<<" ]\n";
                        std::cout<<"[ "<<C1R2<<"  "<<C2R2<<"  "<<C3R2<<" ]\n";
                        std::cout<<"[ "<<C1R3<<"  "<<C2R3<<"  "<<C3R3<<" ]\n";
                        Exit();
                    }
                  else if(m==2){
                        system("cls");
                        goto Odo;
                      }
                     break;
                  }
              case 2:{
                  system("cls");
                  goto lee;
                  break;
                }
              default:
                  std::cout<<"Invalid Entry"<<std::endl;
                  break;

      }
    return 0;
  }

        double mult_2x3_and_3x2(){
           int choice;
           system("cls");
           std::cout<<"Choose Exact order!\n1.[3X2] X [2X3] or\n2.[2X3] X [3X2] \n::";
           std::cin>>choice;
        switch(choice){
            case 1:{
                 double numA1,numA2,numA3,numA4,numA5,numA6,numB1,numB2,numB3,numB4,numB5,numB6;
                    Q:
                    std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
                    std::cout<<"Enter first element of Matrix A: ";
                    std::cin>>numA1;
                    std::cout<<"Enter second element of Matrix A: ";
                    std::cin>>numA2;
                    std::cout<<"Enter third element of Matrix A: ";
                    std::cin>>numA3;
                    std::cout<<"Enter fourth element of Matrix A: ";
                    std::cin>>numA4;
                    std::cout<<"Enter fifth element of Matrix A: ";
                    std::cin>>numA5;
                    std::cout<<"Enter sixth element of Matrix A: ";
                    std::cin>>numA6;
                    std::cout<<"This is your Matrix A ?"<<std::endl;
                    std::cout<<"[ "<<numA1<<"  "<<numA2<<"  ]\n";
                    std::cout<<"[ "<<numA3<<"  "<<numA4<<"  ]\n";
                    std::cout<<"[ "<<numA5<<"  "<<numA6<<"  ]\n";
                    std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                    int q;
                    std::cin>>q;
                    switch(q){
                      case 1:{
                        fish:
                    std::cout<<"Enter first element of Matrix B: ";
                    std::cin>>numB1;
                    std::cout<<"Enter second element of Matrix B: ";
                    std::cin>>numB2;
                    std::cout<<"Enter third element of Matrix B: ";
                    std::cin>>numB3;
                    std::cout<<"Enter fourth element of Matrix B: ";
                    std::cin>>numB4;
                    std::cout<<"Enter fifth element of Matrix B: ";
                    std::cin>>numB5;
                    std::cout<<"Enter sixth element of Matrix B: ";
                    std::cin>>numB6;
                    std::cout<<"This is your Matrix B ?"<<std::endl;
                    std::cout<<"[ "<<numB1<<"  "<<numB2<<" "<<numB3<<" ]\n";
                    std::cout<<"[ "<<numB4<<"  "<<numB5<<" "<<numB6<<" ]\n";
                    std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                    double m;
                    std::cin>>m;
                    if(m==1){
                      double ans;
                          double C1R1=(numA1*numB1) + (numA2*numB4);
                          double C1R2=(numA3*numB1) + (numA4*numB4);
                          double C1R3=(numA5*numB1) + (numA6*numB4);
                          double C2R1=(numA1*numB2) + (numA2*numB5);
                          double C2R2=(numA3*numB2) + (numA4*numB5);
                          double C2R3=(numA5*numB2) + (numA6*numB5);
                          double C3R1=(numA1*numB3) + (numA2*numB6);
                          double C3R2=(numA3*numB3) + (numA4*numB6);
                          double C3R3=(numA5*numB3) + (numA6*numB6);
                          system("cls");
                          std::cout<<"Answer = \n";
                      std::cout<<"[ "<<C1R1<<"  "<<C2R1<<"  "<<C3R1<<" ]\n";
                      std::cout<<"[ "<<C1R2<<"  "<<C2R2<<"  "<<C3R2<<" ]\n";
                      std::cout<<"[ "<<C1R3<<"  "<<C2R3<<"  "<<C3R3<<" ]\n";
                      Exit();
                    }
                    else if(m==2){
                      system("cls");
                      goto fish;
                    }
                    break;
                      }
                      case 2:{
                        system("cls");
                        goto Q;
                      }
                      default:
                      std::cout<<"Invalid Entry"<<std::endl;
                      break;
                    }
                            break;
                          }
                          case 2:{
                              double numA1,numA2,numA3,numA4,numA5,numA6,numB1,numB2,numB3,numB4,numB5,numB6;
                    Queen:
                    std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
                    std::cout<<"Enter first element of Matrix A: ";
                    std::cin>>numA1;
                    std::cout<<"Enter second element of Matrix A: ";
                    std::cin>>numA2;
                    std::cout<<"Enter third element of Matrix A: ";
                    std::cin>>numA3;
                    std::cout<<"Enter fourth element of Matrix A: ";
                    std::cin>>numA4;
                    std::cout<<"Enter fifth element of Matrix A: ";
                    std::cin>>numA5;
                    std::cout<<"Enter sixth element of Matrix A: ";
                    std::cin>>numA6;
                    std::cout<<"This is your Matrix A ?"<<std::endl;
                    std::cout<<"[ "<<numA1<<"  "<<numA2<<" "<<numA3<<" ]\n";
                    std::cout<<"[ "<<numA4<<"  "<<numA5<<" "<<numA6<<" ]\n";
                    std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                    int q;
                    std::cin>>q;
                    switch(q){
                      case 1:{
                        Bro:
                    std::cout<<"Enter first element of Matrix B: ";
                    std::cin>>numB1;
                    std::cout<<"Enter second element of Matrix B: ";
                    std::cin>>numB2;
                    std::cout<<"Enter third element of Matrix B: ";
                    std::cin>>numB3;
                    std::cout<<"Enter fourth element of Matrix B: ";
                    std::cin>>numB4;
                    std::cout<<"Enter fifth element of Matrix B: ";
                    std::cin>>numB5;
                    std::cout<<"Enter sixth element of Matrix B: ";
                    std::cin>>numB6;
                    std::cout<<"This is your Matrix B ?"<<std::endl;
                    std::cout<<"[ "<<numB1<<"  "<<numB2<<"  ]\n";
                    std::cout<<"[ "<<numB3<<"  "<<numB4<<"  ]\n";
                    std::cout<<"[ "<<numB5<<"  "<<numB6<<"  ]\n";
                    std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
                    double m;
                    std::cin>>m;
                    if(m==1){
                      double ans;
                          double C1R1=(numA1*numB1) + (numA2*numB3) + (numA3*numB5);
                          double C1R2=(numA4*numB1) + (numA5*numB3) + (numA6*numB5);
                          double C2R1=(numA1*numB2) + (numA2*numB4) + (numA3*numB6);
                          double C2R2=(numA4*numB2) + (numA5*numB4) + (numA6*numB6);
                          system("cls");
                          std::cout<<"Answer = \n";
                      std::cout<<"[ "<<C1R1<<"  "<<C2R1<<" ]\n";
                      std::cout<<"[ "<<C1R2<<"  "<<C2R2<<" ]\n";
                      Exit();
                    }
                    else if(m==2){
                      system("cls");
                      goto Bro;
                    }
                    break;
                      }
                      case 2:{
                        system("cls");
                        goto Queen;
                      }
                      default:
                      std::cout<<"Invalid Entry"<<std::endl;
                      break;
                          }
                        }
                        default:
                      std::cout<<"Invalid Entry"<<std::endl;
                      break;
                    }
                    return 0;
                  }

      void Tran2x2M(){
          double numA1,numA2,numA3,numA4;
          egg:
          std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
          std::cout<<"Enter first element of Matrix A: ";
          std::cin>>numA1;
          std::cout<<"Enter second element of Matrix A: ";
          std::cin>>numA2;
          std::cout<<"Enter third element of Matrix A: ";
          std::cin>>numA3;
          std::cout<<"Enter fourth element of Matrix A: ";
          std::cin>>numA4;
          std::cout<<"This is your Matrix A ?"<<std::endl;
          std::cout<<"[ "<<numA1<<"  "<<numA2<<" ]\n";
          std::cout<<"[ "<<numA3<<"  "<<numA4<<" ]\n";
          std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
          int rr;
          std::cin>>rr;
            if(rr==1){
              std::cout<<"Transpose of A ="<<std::endl;
              std::cout<<"[ "<<numA1<<"  "<<numA3<<" ]\n";
              std::cout<<"[ "<<numA2<<"  "<<numA4<<" ]\n";
              Exit();
            }
            else if(rr==2){
              system("cls");
              goto egg;
            }
        }
      void Tran3x3M(){
          double numA11,numA22,numA33,numA44,numA55,numA66,numA77,numA88,numA99;   
              vw:
              std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
              std::cout<<"Enter first element of Matrix A: ";
              std::cin>>numA11;
              std::cout<<"Enter second element of Matrix A: ";
              std::cin>>numA22;
              std::cout<<"Enter third element of Matrix A: ";
              std::cin>>numA33;
              std::cout<<"Enter fourth element of Matrix A: ";
              std::cin>>numA44;
              std::cout<<"Enter fifth element of Matrix A: ";
              std::cin>>numA55;
              std::cout<<"Enter sixth element of Matrix A: ";
              std::cin>>numA66;
              std::cout<<"Enter seventh element of Matrix A: ";
              std::cin>>numA77;
              std::cout<<"Enter eight element of Matrix A: ";
              std::cin>>numA88;
              std::cout<<"Enter ninth element of Matrix A: ";
              std::cin>>numA99;
              std::cout<<"This is your Matrix A ?"<<std::endl;
              std::cout<<"[ "<<numA11<<"  "<<numA22<<"  "<<numA33<<" ]\n";
              std::cout<<"[ "<<numA44<<"  "<<numA55<<"  "<<numA66<<" ]\n";
              std::cout<<"[ "<<numA77<<"  "<<numA88<<"  "<<numA99<<" ]\n";
              std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
              int free;
              std::cin>>free;
              if(free==1){
                std::cout<<"Transpose of A ="<<std::endl;
                std::cout<<"[ "<<numA11<<"  "<<numA44<<"  "<<numA77<<" ]\n";
                std::cout<<"[ "<<numA22<<"  "<<numA55<<"  "<<numA88<<" ]\n";
                std::cout<<"[ "<<numA33<<"  "<<numA66<<"  "<<numA99<<" ]\n";
                Exit();
              }
              else if(free==2){
                system("cls");
                goto vw;
              }
          }

      double Delta2x2M(){
          double ans;
          double numA1,numA2,numA3,numA4;
            legit:
            std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
            std::cout<<"Enter first element of Matrix A: ";
            std::cin>>numA1;
            std::cout<<"Enter second element of Matrix A: ";
            std::cin>>numA2;
            std::cout<<"Enter third element of Matrix A: ";
            std::cin>>numA3;
            std::cout<<"Enter fourth element of Matrix A: ";
            std::cin>>numA4;
            std::cout<<"This is your Matrix A ?"<<std::endl;
            std::cout<<"[ "<<numA1<<"  "<<numA2<<" ]\n";
            std::cout<<"[ "<<numA3<<"  "<<numA4<<" ]\n";
            std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
            int d;
            std::cin>>d;
            if(d==1){
              ans=(numA1*numA4)-(numA3*numA2);
              std::cout<<"Delta A = "<<ans<<std::endl;
              Exit();
            }
            else if(d==2){
              system("cls");
              goto legit;
            }
            return ans;
            }

      double Delta3x3M(){
          double numA1,numA2,numA3,numA4,numA5,numA6,numA7,numA8,numA9;
              Ella:
              std::cout<<"Enter Element Row by Row (i.e in order of rows) "<<std::endl;
              std::cout<<"Enter first element of Matrix A: ";
              std::cin>>numA1;
              std::cout<<"Enter second element of Matrix A: ";
              std::cin>>numA2;
              std::cout<<"Enter third element of Matrix A: ";
              std::cin>>numA3;
              std::cout<<"Enter fourth element of Matrix A: ";
              std::cin>>numA4;
              std::cout<<"Enter fifth element of Matrix A: ";
              std::cin>>numA5;
              std::cout<<"Enter sixth element of Matrix A: ";
              std::cin>>numA6;
              std::cout<<"Enter seventh element of Matrix A: ";
              std::cin>>numA7;
              std::cout<<"Enter eight element of Matrix A: ";
              std::cin>>numA8;
              std::cout<<"Enter ninth element of Matrix A: ";
              std::cin>>numA9;
              std::cout<<"This is your Matrix A ?"<<std::endl;
              std::cout<<"[ "<<numA1<<"  "<<numA2<<"  "<<numA3<<" ]\n";
              std::cout<<"[ "<<numA4<<"  "<<numA5<<"  "<<numA6<<" ]\n";
              std::cout<<"[ "<<numA7<<"  "<<numA8<<"  "<<numA9<<" ]\n";
              std::cout<<"1.YES Proceed>>\n2.NO Change xx\n::";
              int win;
              std::cin>>win;
              if(win==1){
                double WISans;
                  WISans=+numA1*((numA5*numA9)-(numA8*numA6)) -numA2*((numA4*numA9)-(numA7*numA6)) +numA3*((numA4*numA8)-(numA7*numA5));
                std::cout<<"Delta A = "<<WISans<<std::endl;
                Exit();
              }
              else if(win==2){
                system("cls");
                goto Ella;
              }
         return 0;     
        }
              
};

int main(){  
  system("cls");
     Matrix option;
    option.list();
  
    int Opt;
    Jude:
    std::cout<<"\t\t\t\t\tCHIOCE:: ";
    std::cin>>Opt;
  switch(Opt){
      case 1: {
          //ADDITION//
          m:
          int order1;
          std::cout<<"Select Order of Matrix\n\t1.2x2 \n\t2.3x3 \n >>";
          std::cin>>order1;
          system("cls");
          switch(order1){
              case 1:{
                  option.add2x2M();
              break;
            }
              case 2:{
                option.add3x3M();
                
              break;
            }
              default:
                std::cout<<"Enter a valid choice!"<<std::endl; 
                goto m;
            };
        break;
        }
      case 2:{
          //SUBTRACTION//
          int order2;
           n:
          std::cout<<"Select Order of Matrix\n\t1.2x2 \n\t2.3x3 \n   >>";
          std::cin>>order2;
          system("cls");
      switch(order2){
          case 1:{
              option.sub2x2M();
              
            break;
          }
          case 2:{
              option.sub3x3M();
              
            break;
          }
          default:
            std::cout<<"Enter a valid choice!"<<std::endl; 
            goto n;



        };
        break;
    }
      case 3:{
          //MULTIPLICATION//
          int order3;
          o:
          std::cout<<"Select Order of Matrix\n\t1.2x2 \n\t2.3x3 \n\t3.2x3 and 3x2  \n   >>";
          std::cin>>order3;
          system("cls");
              switch(order3){
                  case 1:{
                      option.mult2x2M();
                      
                      break;
                    }
                  case 2:{
                      option.mult3x3M();
                      
                      break;
                      }
                  case 3:{
                      option.mult_2x3_and_3x2();
                      
                      break;
                    }
                  default:
                    std::cout<<"Enter a valid choice!"<<std::endl; 
                    goto o;
        };
        break;
    }
        case 4:{
            //INVERSE//
            int order4;
            j:
            std::cout<<"Select Order of Matrix\n\t1.2x2 \n\t2.3x3  >>";
            std::cin>>order4;
            system("cls");
            switch(order4){
                case 1:{

            break;
            }
          case 2:{

            break;
          }        
          default:
            std::cout<<"Enter a valid choice!"<<std::endl; 
            goto j;
        };
        break;
    }
        case 5:{
            //TRANSPOSE//
            int order5;
            i:
            std::cout<<"Select Order of Matrix\n\t1.2x2 \n\t2.3x3 \n >>";
            std::cin>>order5;
            system("cls");
            switch(order5){
                case 1:{
                    option.Tran2x2M();
                    
                break;
                }
                case 2:{
                    option.Tran3x3M();
                    
                break;
                }
                default:
                std::cout<<"Enter a valid choice!"<<std::endl; 
                goto i;
        };
        break;
    }
        case 6:{
            //DETERMINANT//
            int order6;
            k:
            std::cout<<"Select Order of Matrix\n\t1.2x2 \n\t2.3x3 \n >>";
            std::cin>>order6;
            system("cls");
            switch(order6){
                case 1:{
                option.Delta2x2M();
                
                break;
                }
                case 2:{
                option.Delta3x3M();
                
                break;
                }
                default:
                    std::cout<<"Enter a valid choice!"<<std::endl; 
                    goto k;
        };
        break;
    }
        default:{
            system("cls");
            std::cout<<"Invalid Selection!!!!"<<std::endl;
            option.list();
            goto Jude; 
        }

    };
    
return 0;
}
