int dec,dec1,dec2;
char choice,data[500];
FILE* f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8;
void main_menu(){
    do{
        printf("\n\t\t#---------- LIST OF ALL THE ACTIONS ---------#\n");
        printf("\n\t\t1. SHOW THE LIST OF METRO STATION\n");
        printf("\t\t2. GET SHORTEST PATH (ECONOMICALLY) TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION\n");
        printf("\t\t3. GET SHORTEST PATH (DISTANCE WISE) TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION\n");
        printf("\t\t4. GET THE COST OF TRAVELLING\n");
        printf("\t\t5. EXIT\n");

        printf("\n\t\tENTER CHOICE : ");
        scanf("%d",&dec1);
        switch (dec1)
        {
        case 1:
           do{
                printf("\n\t\t#----------CHOOSE COLOUR OF LINE FOR METRO STATION----------#\n");
                printf("\n\t\t1. BlueLine Metro Stations:\n");
                printf("\t\t2. RedLine Metro Stations:\n");
                printf("\t\t3. GreenLine Metro Stations:\n");
                printf("\t\t4. VioletLine Metro Stations:\n");
                printf("\t\t5. YellowLine Metro Stations:\n");
                printf("\t\t6. BlueExt Metro Stations:\n");
                printf("\t\t7. OrangeLine Metro Stations:\n");
                printf("\t\t8. EXIT\n");

                printf("\n\t\tENTER CHOICE : ");
                scanf("%d",&dec2);
                printf("\n");
                switch (dec2)
                {
                case 1:
                    f1 = fopen("blueline.txt", "r");
                    if (f1 == NULL) {
                        printf("\t\t!! UNABLE TO OPEN 1st FILE !!\n");
                    }
                    while (fgets(data, 50, f1) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f1);    
                break;
                case 2:
                    f2 = fopen("redline.txt", "r");
                    if (f2 == NULL) {
                        printf("\t\t!! UNABLE TO OPEN 2nd FILE !!\n");
                    }
                    while (fgets(data, 50, f2) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f2);    
                break;
                case 3:
                    f3= fopen("greenline.txt", "r");
                    if (f3 == NULL) {
                        printf("\t\t!! UNABLE TO OPEN 3rd FILE !!\n");
                    }
                    while (fgets(data, 50, f3) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f3);    
                break;
                case 4:
                    f4 = fopen("violetline.txt", "r");
                    if (f4 == NULL) {
                        printf("\t\t!! UNABLE TO OPEN 4th FILE !!\n");
                    }
                    while (fgets(data, 50, f4) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f4);    
                break;
                case 5:
                    f5 = fopen("yellowline.txt", "r");
                    if (f5 == NULL) {
                        printf("\t\t!! UNABLE TO OPEN 5th FILE !!\n");
                    }
                    while (fgets(data, 50, f5) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f5);    
                break;
                case 6:
                    f6= fopen("bluext.txt", "r");
                    if (f6== NULL) {
                        printf("\t\t!! UNABLE TO OPEN 6th FILE !!\n");
                    }
                    while (fgets(data, 50, f6) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f6);    
                break;
                case 7:
                    f7 = fopen("orangeline.txt", "r");
                    if (f7 == NULL) {
                        printf("\t\t!! UNABLE TO OPEN 7th FILE !!\n");
                    }
                    while (fgets(data, 50, f7) != NULL){
                        printf("\t%s", data);
                    }
                    fclose(f7);    
                break;
                case 8:
                    printf("\n\t\tExiting...\n\n");
                    on_exit();
                    exit(1);

                break;
                default:
                break;
                }
                printf("\n\n\t\t!! DO YOU WISH TO CHECK ANY OTHER LIST OF STATION (y/n)!!");
                scanf("%s", &choice);
           }while(choice=='y'||choice=='Y');
        break;
        case 2:
            printf("\n\t\tcoming soon\n");
        break;
        case 3:
            printf("\n\t\tcoming soon\n");
        break;
        case 4:
             printf("\n\t\tcoming soon\n");
        break;
        case 5:
            printf("\n\t\tExiting...\n\n");
            on_exit();
            exit(1);
        break;

        default:
            break;
        }
        printf("\n\t\t!! DO YOU WISH TO GO BACK TO MAIN MENU (y/n)!!");
        scanf("%s", &choice);
    }while(choice=='y'||choice=='Y');
}