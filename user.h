void greetings()
{
  printf("\n\t\t\t\n");
  printf("\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
  printf("\t\t\t     *                                                 *\n");
  printf("\t\t\t     *                                                 *\n");
  printf("\t\t\t    *      --------------------------------------       *\n");
  printf("\t\t\t   *            WELCOME TO DELHI METRO                   *\n");
  printf("\t\t\t    *      --------------------------------------       *\n");
  printf("\t\t\t     *                                                 *\n");
  printf("\t\t\t     *                            Created By - Vijay   *\n");
  printf("\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
  

}

void on_exit()
{
  printf("\n\t\t\t\n");
  printf("\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
  printf("\t\t\t     *                                                 *\n");
  printf("\t\t\t     *                                                 *\n");
  printf("\t\t\t    *      --------------------------------------       *\n");
  printf("\t\t\t   *              THANKS FOR VISITING                    *\n");
  printf("\t\t\t    *      --------------------------------------       *\n");
  printf("\t\t\t     *                                                 *\n");
  printf("\t\t\t     *                               - HAVE A NICE DAY *\n");
  printf("\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
  printf("\n");
}



typedef struct {
    char username[50];
    char password[50];
} User;
typedef struct Node {
    User data;
    struct Node* next;
} Node;

 struct Node* userList;
  char filename[50] = "userdata.txt",username[50],password[50];

Node* createNode(User user) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = user;
    newNode->next = NULL;
    return newNode;
}


void insertNode(Node** head, User user) {
    Node* newNode = createNode(user);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayUsers(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("Username: %s, Password: %s\n", temp->data.username, temp->data.password);
        temp = temp->next;
    }
}


int usernameExists(Node* head, char* username) {
    Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->data.username, username) == 0) {
            return 1; 
        }
        temp = temp->next;
    }
    return 0; 
}


void registerUser(Node** head, char* filename) {
    User newUser;
    printf("\n\t\tENTER USERNAME : ");
    scanf("%s", newUser.username);

    
    if (usernameExists(*head, newUser.username)) {
        printf("\n!! USERNAME ALREADY EXISTS. REGISTRATION FAILED !!\n");
        return;
    }

    printf("\t\tENTER PASSWORD : ");
    scanf("%s", newUser.password);

    
    insertNode(head, newUser);

    
    FILE* file = fopen(filename, "a");
    if (file == NULL) {
        printf("\n\t\t!! ERROR OPENING FILE FOR WRITE !!\n");
        return;
    }

    fprintf(file, "%s %s\n", newUser.username, newUser.password);

    fclose(file);

    printf("\n\t\t!! REGISTRATION SUCCESSFUL !!\n");
}



int loginUser(Node* head, char* username, char* password) {
    Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->data.username, username) == 0 && strcmp(temp->data.password, password) == 0) {
            return 1; 
        }
        temp = temp->next;
    }
    return 0; 
}











