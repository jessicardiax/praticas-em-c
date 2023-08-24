
#include <stdio.h>
#include <locale.h>
 int main(){
     setlocale(LC_ALL, "portuguese");
     int DDD;
    
     
     printf("Informe o DDD da seu estado!\n");
     scanf("%i",&DDD);
     
         switch(DDD){
         
          case 61:
              printf("O identificador digitado é do estado do Distrito federal!(\nREGIÃO DO CENTRO-OESTE\n) %d", DDD);
                break;
                
                case 65:
               printf("O DDD digitado é do estado do Mato Grosso! (\nREGIÃO DO CENTRO-OESTE\n) %i", DDD); 
                break;
                
                case 66:
                 printf("O DDD digitado é do estado do Mato Grosso! (\nREGIÃO DO CENTRO-OESTE\n) %i", DDD);
                 break;
                            
                            
              case 62:
              printf("O identificador digitado é do estado de Goiás! (\nREGIÃO DO CENTRO-OESTE\n) %d", DDD);
              break;
           
           case 64:
           printf("O identificador digitado é do estado de Goiás! (\nREGIÃO DO CENTRO-OESTE\n) %d", DDD);
            break;  
                                        
                case 67:
                printf("O DDD digitado é do estado do Mato Grosso do Sul! (\nREGIÃO DO CENTRO-OESTE\n) %i", DDD);
                   break;
        
              case 82:
            printf("O identificador digitado é do estado de Alagoas (\nREGIÃO DO NORDESTE\n %i", DDD);
            break;
            
                case 71:
            printf("O identificador informado é do estado da Bahia (\nREGIÃO DO NORDESTE\n) %i", DDD);
            break;
            
            case 73:
            printf("O identificador informado é do estado da Bahia (\nREGIÃO DO NORDESTE\n) %i", DDD);
            break;
             
             case 74:
             printf("O identificador informado é do estado da Bahia (\nREGIÃO DO NORDESTE\n) %i", DDD);
             break;
             
             case 75:
             printf("O identificador informado é do estado da Bahia (\nREGIÃO DO NORDESTE\n) %i", DDD);
             break;
             
             case 77:
             printf("O identificador informado é do estado da Bahia (\nREGIÃO DO NORDESTE\n) %i", DDD);
                  break;
                         
                         
             case 85:
            printf("O identificador informado é do estado do Ceará (\nREGIÃO NORDESTE\n)");
               break;
                     
            case 88:
            printf("O identificador informado é do estado do Ceará (\nREGIÃO NORDESTE\n)");
            break;                 
                     
             case 98:
             printf("O identificador informado é do estado do Maranhão (\nREGIÃO NORDESTE\n) %i", DDD);
            break;
            
                    case 99:
                     printf("O identificador informado é do estado do Maranhão (\nREGIÃO NORDESTE\n) %i", DDD);
                    break;
                                 
                 case 83:
                printf("O identificador informado é do estado da Paraíba (\nREGIÃO NORDESTE\n) %i", DDD);
                    break;
                              
                case 81:
                  printf("O identificador informado é do estado de Pernabuco (\nREGIÃO NORDESTE\n) %i ",DDD);
                  break;
                  
                case 87:
                    printf("O identificador informado é do estado de Pernabuco (\nREGIÃO NORDESTE\n) %i ",DDD);
                    break;
                                      
               case 86:
                printf("O identificador informado é do estado do Piauí (\nREGIÃO NORDESTE\n) %i", DDD);
                break;
                
               case 89:
                    printf("O identificador informado é do estado do Piauí (\nREGIÃO NORDESTE\n) %i", DDD);
                break;
                                      
                 case 84:
                    printf("O identificador informado é do estado do Rio Grande do Norte (\nREGIÃO NORDESTE\n %i", DDD);
                    break;
                
                if(DDD==79){
                    printf("O identificador informado é do estado de Sergipe (\nREGIÃO NORDESTE\n %i", DDD);
                           }
                    break;                
                
                
                case 68:
                printf("O identificador informado é do estado do Acre! (\nREGIÃO NORTE\n) %i", DDD);
                break;
                
                     case 96:
                       printf("O identificador informado é do estado do Amapá! (\nREGIÃO NORTE\n) %i",DDD);
                     break;
                              
                   case 92:
                   printf("O identificador informado é do estado do Amazonas! (\nREGIÃO NORTE\n) %i", DDD);
                   break;
                   
                   case 97:
                    printf("O identificador informado é do estado do Amazonas! (\nREGIÃO NORTE\n) %i", DDD);
                    break;
 
                    case 91:
                     printf("O identificador informado é do estado do Pará (\nREGIÃO NORTE\n) %i", DDD);
                     break;
                     
                    case 93:
                     printf("O identificador informado é do estado do Pará (\nREGIÃO NORTE\n) %i", DDD);
                     break;
                     
                    case 94:
                        printf("O identificador informado é do estado do Pará (\nREGIÃO NORTE\n) %i", DDD);
                            break;                          

                    case 69:
                        printf("O identificador informado é do estado de Rondônia (\nREGIÃO NORTE\n) %i", DDD);
                            break;

                    case 95:
                        printf("O identificador informado é do estado de Roraima (\nREGIÃO NORTE\n) %i", DDD);
                        break;
                                
                   case 63:
                        printf("O identificador informado é do estado de Tocantins (\nREGIÃO NORTE\n) %i", DDD);
                      break;
                   
                        
                     case 27:
                         printf("O identificador informado é do estado do Espírito Santo  (\nREGIÃO SUDESTE\n) %i", DDD);
                         break;
                  
                        case 28:
                     printf("O identificador informado é do estado do Espírito Santo  (\nREGIÃO SUDESTE\n) %i", DDD);
                             break;
                             
                          case 31:
                          printf("O identificador informado é do estado de Minas Gerais (\nREGIÃO SUDESTE\n) %i", DDD);
                          break;
                          
                          case 32:
                          printf("O identificador informado é do estado de Minas Gerais (\nREGIÃO SUDESTE\n) %i", DDD);
                          break;
                          
                         case 34:
                         printf("O identificador informado é do estado de Minas Gerais (\nREGIÃO SUDESTE\n) %i", DDD);
                         break;
                         
                        case 35:
                        printf("O identificador informado é do estado de Minas Gerais (\nREGIÃO SUDESTE\n) %i", DDD);
                        break;
                        
                        case 38:
                              printf("O identificador informado é do estado de Minas Gerais (\nREGIÃO SUDESTE\n) %i", DDD);
                               break;
                               
                        case 21:
                        printf("O identificador informado é do estado do Rio de Janeiro (\nREGIÃO SUDESTE\n) %i", DDD);
                          break;
                          
                        case 22:
                        printf("O identificador informado é do estado do Rio de Janeiro (\nREGIÃO SUDESTE\n) %i", DDD);
                        break;
                        
                        case 24:
                              printf("O identificador informado é do estado do Rio de Janeiro (\nREGIÃO SUDESTE\n) %i", DDD);
                        break;                                   
                          
                        case 11:
                         printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                         break;
                         
                      case 12:
                       printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                       break;
                       
                    case 13:
                     printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                     break;
                     
                  case 14:
                   printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                   break;
                   
                 case 15:
                  printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                  break;
                  
                 case 16:
                  printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                  break;
                  
               case 17:
                printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
                break;
                
              case 18:
               printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
               break;
               
            case 19:
             printf("O identificador informado é do estado de São Paulo (\nREGIÃO SUDESTE\n) %i", DDD);
          break;
               
        case 41:
       printf("O identificador informado é do estado do Paraná  (\nREGIÃO SUl\n) %i", DDD);
       break;
       
      
            case 42: 
                 printf("O identificador informado é do estado do Paraná (\nREGIÃO SUl\n) %i", DDD);
                 break;
  
                case 43:
                    printf("O identificador informado é do estado  do estado do Paraná  (\nREGIÃO SUl\n) %i", DDD);
                break;

            case 44:
                 printf("O identificador informado é do estado do estado do Paraná  (\nREGIÃO SUl\n) %i", DDD);
                 break;

                case 45:
                     printf("O identificador informado é do estado do estado do Paraná  (\nREGIÃO SUl\n) %i", DDD);
                 break; 
 
                case 46:
                    printf("O identificador informado é do estadodo estado do Paraná  (\nREGIÃO SUl\n) %i", DDD);
                    break;
                                    
                           case 51:
                           printf("O identificador informado é do estado do Rio Grande do Sul (\nREGIÃO SUl\n) %i", DDD);
                            break;
                        
                    
                     case 53:
                           printf("O identificador informado é do estado do Rio Grande do Sul (\nREGIÃO SUl\n) %i", DDD);
                            break;
                    
                    
                     case 54:
                           printf("O identificador informado é do estado do Rio Grande do Sul (\nREGIÃO SUl\n) %i", DDD);
                            break;
                    
                     case 55:
                           printf("O identificador informado é do estado do Rio Grande do Sul (\nREGIÃO SUl\n) %i", DDD);
                            break;
                    
                         case 47:
                             printf("O identificador informado é do estado de Santa Catarina (\nREGIÃO SUl\n) %i", DDD);
                           break;
                            
                          case 48:
                          printf("O identificador informado é do estado de Santa Catarina (\nREGIÃO SUl\n) %i", DDD);
                            break;
                            
                           case 49:
                                printf("O identificador informado é do estado de Santa Catarina \n(REGIÃO SUl\n) %i", DDD);
                            break;     
                        
                                    
                                  default:
                                     printf("DDD digitado esta errado! Tente novamente com outro DDD!\n");
                                 break;                                                                                               


     }
     return(0);
 }
 
