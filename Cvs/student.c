#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu() //���ܱ�
    {
        printf("*****************��ӭ����ѧ������ϵͳ!******************\n"
                " <1>���ѧ������    <2>�޸�ѧ������    <3>ɾ��ѧ����Ϣ\n"
                " <4>��ѯѧ���ɼ�    <5>ѧ���ɼ�����    <6>��ʾ����ѧ��\n"
                " <7>ˢ��ϵͳҳ��    <8>�˳�����ϵͳ������\n"
                "*********************************************************\n");
    }


typedef struct student
{
    char stn[20];
    char name[50];
    char gender;
    int grade[3];
    struct student *next;
}stu;

creat() //<1>���ѧ������
    {
        stu *head, *p1, *p2;
        //struct student *head, *p1, *p2;
        head = NULL; 
        while(1){
            p1 = (stu *)malloc(sizeof(stu)); //�����ڴ�ռ� 
            //p1 = (struct student *)malloc(sizeof(struct student));
            //��������
            printf("\n������ѧ��:");
            scanf("%s", (*p1).stn);
            getchar();
            printf("\n����������:");
            gets((*p1).name);
            printf("\n�������Ա�(m/f):");
            scanf("%c", &(*p1).gender);
            printf("\n����������,��ѧ,����ɼ�:");
            scanf("%d %d %d", &(*p1).grade[1], &(*p1).grade[2], &(*p1).grade[3]);
            if(head == NULL){
                head = p1;
                p2 = p1;
            }
            else{
                (*p2).next = p1;
                p2 = p1;
            }


            printf("\n�Ƿ��������(1/0):");
            int jd;
            scanf("%d", &jd);
            if(jd == 0){
                
                (*p2).next = NULL;
                break;
                
            }            
        }

        /*test
        //stu *p = NULL;
        p = head;
        while(p != NULL){
            printf("%s\n", (*p).name);
            p = (*p).next;
        }
        */
        
        
        //printf("\n%p", head);
        return (head);
        //free(p1);
    }




fix(stu *aim)//<2>�޸�ѧ������
    {
        stu *p = NULL;
        p = aim;
        char inf[50] = {0};
        printf("\n������ѧ��ѧ�Ż�����:");
        getchar();
        gets(inf);
        while(p != NULL){
            if(strcmp((*p).name, inf) == 0 || strcmp((*p).stn, inf) == 0){ //�ȶ���Ϣ
                printf("\n*******��ѡ����Ҫ�޸ĵĲ���********" //ѡ�����
                        "\n a.ѧ�� b.���� c.�Ա� d.�ɼ� e.ȫ��"
                        "\n��ѡ���Ӧ�����ֱ��"
                        "\n*********************************\n");
                printf("�����Ӧ����ĸ���ѡ���Ӧ����:");
                    char n = 'e';
                    scanf("%c", &n);
                    switch (n)
                    {
                    case 'a': printf("\n��ѧ���޸�Ϊ:"); getchar(); gets((*p).stn); break;
                    case 'b': printf("\n�������޸�Ϊ:"); getchar(); gets((*p).name); break;
                    case 'c': printf("\n���Ա��޸�Ϊ:"); getchar(); scanf("%c", &(*p).gender); break;
                    case 'd': printf("\nҪ�޸�����ѧ�Ƶĳɼ�?1.���� 2.��ѧ 3.���� 4.ȫ��");
                            while(1){
                                int x = 0;
                                scanf("%d", &x);
                                if(x == 4){
                                    printf("\n�������µ�����,��ѧ������ɼ�:"); 
                                    scanf("%d %d %d", &(*p).grade[1], &(*p).grade[2], &(*p).grade[3]);
                                    break;
                                }
                                else if(x == 1){
                                    printf("\n�������µ����ĳɼ�:");
                                    scanf("%d", &(*p).grade[1]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(1/0)");
                                    if(getchar() == 0){
                                        break;
                                    }
                                }
                                else if(x == 2){
                                    printf("�������µ���ѧ�ɼ�:");
                                    scanf("%d", &(*p).grade[2]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(1/0)");
                                    if(getchar() == 0){
                                        break;
                                    }
                                }
                                else if(x == 3){
                                    printf("\n�������µ�����ɼ�:");
                                    scanf("%d", &(*p).grade[3]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(1/0)");
                                    if(getchar() == 0){
                                        break;
                                    }
                                }
                                //else printf("\n����Ƿ�!����������!");
                            }
                            break;
                    case 'e': 
                        printf("\n��ѧ���޸�Ϊ:"); getchar(); gets((*p).stn);
                        printf("\n�������޸�Ϊ:"); getchar(); gets((*p).name);
                        printf("\n���Ա��޸�Ϊ:"); getchar(); scanf("%c", &(*p).gender);
                        printf("\nҪ�޸�����ѧ�Ƶĳɼ�?1.���� 2.��ѧ 3.���� 4.ȫ��");
                            while(1){
                                int x = 0;
                                scanf("%d", &x);
                                if(x == 4){
                                    printf("\n�������µ�����,��ѧ������ɼ�:"); 
                                    scanf("%d %d %d", &(*p).grade[1], &(*p).grade[2], &(*p).grade[3]);
                                    break;
                                }
                                else if(x == 1){
                                    printf("\n�������µ����ĳɼ�:");
                                    scanf("%d", &(*p).grade[1]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(1/0)");
                                    if(getchar() == 0){
                                        break;
                                    }
                                }
                                else if(x == 2){
                                    printf("�������µ���ѧ�ɼ�:");
                                    scanf("%d", &(*p).grade[2]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(1/0)");
                                    if(getchar() == 0){
                                        break;
                                    }
                                }
                                else if(x == 3){
                                    printf("\n�������µ�����ɼ�:");
                                    scanf("%d", &(*p).grade[3]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(1/0)");
                                    if(getchar() == 0){
                                        break;
                                    }
                                }
                                //else printf("\n����Ƿ�!����������!");
                            }
                            break;//����switch
                    }
                    break;//����whileѭ��
                }
            p = (*p).next;
        }
        
        /*test
        //stu *p = NULL;
        stu *new = NULL;
        new = aim;
        while(new != NULL){
            printf("%s\n", (*new).name);
            new = (*new).next;
        }
        */
    }



delete(stu *aim) //<3>ɾ��ѧ����Ϣ
    {

        stu *p = NULL, *p1 = NULL;
        p = aim;
        p1 = p;
        printf("\n������Ҫɾ����ѧ��ѧ�Ż�����:");
        char tar[50] = {0};
        getchar(); //���Ļس�
        gets(tar);
        while(p != NULL){
            if(strcmp((*p).name, tar) == 0 || strcmp((*p).stn, tar) == 0){
                printf("\nȷ��Ҫɾ��%s��%s��������?(1/0)", (*p).stn, (*p).name);
                int cf;
                scanf("%d", &cf);
                if(cf == 1){
                    (*p1).next = (*p).next; //����ɾ���ڵ��ǰ�ڵ�ͽڵ�
                    free(p); //�ͷŽڵ�
                    break; //����ѭ��
                }
            }
            p1 = p;
            p = (*p).next;
        }

/*
        //test
        //stu *p = NULL;
        printf("\n////start test////\n");
        stu *new = NULL;
        new = aim;
        while(new != NULL){
            printf("%s %s\n", (*new).stn, (*new).name);
            new = (*new).next;
        }
*/        
    }





search(stu *aim) //<4>��ѯѧ���ɼ�
    {
        stu *p = NULL;
        p = aim;
        printf("\n����ѧ��ѧ�Ż�����:");
        getchar();
        char tar[50] = {0};
        gets(tar);
        int cf = 0;
        while(p != NULL){
            if(strcmp((*p).name, tar) == 0 || strcmp((*p).stn, tar) == 0){
                cf = 1;
                break;
            }
            p = (*p).next;
        }
        if(cf == 1){
            printf("\n%s��%s�ĳɼ�Ϊ:����:%d, ��ѧ:%d, ����:%d", (*p).stn, (*p).name,
            (*p).grade[1], (*p).grade[2], (*p).grade[3]);            
        }
        else{
            printf("\n�޸�����Ϣ!");
        }
    }

typedef struct 
{
    char nm[50];
    int gd[3];
}sortstu;


sort(stu *aim)//<5>ѧ���ɼ�����
    {
        int n = 0, n1 = 0, n2 = 0, n3 = 0;
        sortstu ss[500];
        stu *p =NULL;
        p = aim;
        while(p != NULL){
            strcpy(ss[n].nm, (*p).name);
            for(int i = 1; i < 4; ++i){
                ss[n].gd[i] = (*p).grade[i];
                }
            n++;
            p = (*p).next;
        }

        printf("\nѡ��ѧ������(a.����, b.��ѧ, c.����, d.�ܳɼ�):");
        char cf;
        cf = getchar();
        switch (cf)
        {
            case 'a':
                for(int i = 0; i < n - 1; ++i){ //ð������
                    for(int ii = 0; ii < n - 1 - i; ++ii){
                        if(ss[ii].gd[1] < ss[ii + 1].gd[1]){
                            //��������
                            int temp = ss[ii].gd[1];
                            ss[ii].gd[1] = ss[ii + 1].gd[1];
                            ss[ii + 1].gd[1] = temp;

                            //��������
                            char temp[50];
                            strcpy(temp, ss[ii].nm);
                            strcpy(ss[ii].nm, ss[ii + 1].nm);
                            strcpy(ss[ii + 1].nm, temp);
                        }
                    }
                }
                //��ӡ����
                for(int i = 0; i < n; ++i){
                    printf("\n��%d��%s����:%d", i + 1, ss[i].nm, ss[i].gd[1]);
                }
                break;
        }
    }

int main()
    {
        system("color 9F");// ����cmd ����Ϊ����ɫ�� ����Ϊ����ɫ
        menu();
        stu *aim = NULL;
        //printf("\n%d\n", choose()); test choose
        int num = 8;
        while(1){
        //menu();
        printf("\n�����Ӧ�����ֱ��ѡ���Ӧ����:");
        scanf("%d", &num);
        if(num == 8){
            break;
        }
        
            switch (num) //ѡ����
            {
            case 1: aim = creat(); getchar();/* printf("\n%p", aim)*/; break;
            case 2: fix(aim); getchar(); break;
            case 3: delete(aim); getchar(); break;
            case 4: search(aim); getchar(); break;
            case 5: break;
            case 6: break;
            case 7: break;
            default: getchar(); printf("\n��Ч����!"); break;
            }
            
        }
        
        return 0;
    }