#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu() //���ܱ�
    {
        printf("*****************��ӭ����ѧ������ϵͳ!******************\n"
                " <1>���ѧ������    <2>�޸�ѧ������    <3>ɾ��ѧ����Ϣ\n"
                " <4>��ѯѧ���ɼ�    <5>ѧ���ɼ�����    <6>��ʾ����ѧ��\n"
                " <7>ˢ��ϵͳҳ��    <8>����ļ�����    <9>�˳�����ϵͳ\n"
                "********************************************************\n");
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
            scanf("%s", p1->stn);
            getchar();
            printf("\n����������:");
            gets(p1->name);
            printf("\n�������Ա�(m/f):");
            scanf("%c", &p1->gender);
            printf("\n����������,��ѧ,����ɼ�:");
            scanf("%d %d %d", &p1->grade[0], &p1->grade[1], &p1->grade[2]);
            if(head == NULL){
                head = p1;
                p2 = p1;
            }
            else{
                p2->next = p1;
                p2 = p1;
            }


            printf("\n�Ƿ��������(1/0):");
            int jd;
            scanf("%d", &jd);
            if(jd == 0){
                
                p2->next = NULL;
                break;
                
            }            
        }

        /*test
        //stu *p = NULL;
        p = head;
        while(p != NULL){
            printf("%s\n", p->name);
            p = p->next;
        }
        */
        
        
        //printf("\n%p", head);
        return (head);
        free(p1);
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
            if(strcmp(p->name, inf) == 0 || strcmp(p->stn, inf) == 0){ //�ȶ���Ϣ
                printf("\n*******��ѡ����Ҫ�޸ĵĲ���********" //ѡ�����
                        "\n a.ѧ�� b.���� c.�Ա� d.�ɼ� e.ȫ��"
                        "\n��ѡ���Ӧ�����ֱ��"
                        "\n*********************************\n");
                printf("�����Ӧ����ĸ���ѡ���Ӧ����:");
                    char n = 'e';
                    scanf("%c", &n);
                    switch (n)
                    {
                    case 'a': printf("\n��ѧ���޸�Ϊ:"); getchar(); gets(p->stn); break;
                    case 'b': printf("\n�������޸�Ϊ:"); getchar(); gets(p->name); break;
                    case 'c': printf("\n���Ա��޸�Ϊ:"); getchar(); scanf("%c", &p->gender); break;
                    case 'd': 
                            while(1){
                                printf("\nҪ�޸�����ѧ�Ƶĳɼ�?1.���� 2.��ѧ 3.���� 4.ȫ��");
                                int x = 0;
                                scanf("%d", &x);
                                if(x == 4){
                                    printf("\n�������µ�����,��ѧ������ɼ�:"); 
                                    scanf("%d %d %d", &p->grade[0], &p->grade[1], &p->grade[2]);
                                    break;
                                }
                                else if(x == 1){
                                    printf("\n�������µ����ĳɼ�:");
                                    scanf("%d", &p->grade[0]);
                                    printf("\n�Ƿ�����޸ĳɼ�?(y/n)");
                                    getchar();
                                    if(getchar() == 'n'){
                                        break;
                                    }
                                }
                                else if(x == 2){
                                    printf("�������µ���ѧ�ɼ�:");
                                    scanf("%d", &p->grade[1]);
                                    printf("\n�Ƿ�����޸ĳɼ�?(y/n)");
                                    getchar();
                                    if(getchar() == 'n'){
                                        break;
                                    }
                                }
                                else if(x == 3){
                                    printf("\n�������µ�����ɼ�:");
                                    scanf("%d", &p->grade[2]);
                                    printf("\n�Ƿ�����޸ĳɼ�?(y/n)");
                                    getchar();
                                    if(getchar() == 'n'){
                                        break;
                                    }
                                }
                                //else printf("\n����Ƿ�!����������!");
                            }
                            break;
                    case 'e': 
                        printf("\n��ѧ���޸�Ϊ:"); getchar(); gets(p->stn);
                        printf("\n�������޸�Ϊ:"); getchar(); gets(p->name);
                        printf("\n���Ա��޸�Ϊ:"); getchar(); scanf("%c", &p->gender);
                        printf("\nҪ�޸�����ѧ�Ƶĳɼ�?1.���� 2.��ѧ 3.���� 4.ȫ��");
                            while(1){
                                int x = 0;
                                scanf("%d", &x);
                                if(x == 4){
                                    printf("\n�������µ�����,��ѧ������ɼ�:"); 
                                    scanf("%d %d %d", &p->grade[0], &p->grade[1], &p->grade[2]);
                                    break;
                                }
                                else if(x == 1){
                                    printf("\n�������µ����ĳɼ�:");
                                    scanf("%d", &p->grade[0]);
                                    printf("\n�Ƿ���Ҫ�����޸ĳɼ�?(y/n)");
                                    getchar();
                                    if(getchar() == 'n'){
                                        break;
                                    }
                                }
                                else if(x == 2){
                                    printf("�������µ���ѧ�ɼ�:");
                                    scanf("%d", &p->grade[1]);
                                    printf("\n�Ƿ�����޸ĳɼ�?(y/n)");
                                    getchar();
                                    if(getchar() == 'n'){
                                        break;
                                    }
                                }
                                else if(x == 3){
                                    printf("\n�������µ�����ɼ�:");
                                    scanf("%d", &p->grade[2]);
                                    printf("\n�Ƿ�����޸ĳɼ�?(y/n)");
                                    getchar();
                                    if(getchar() == 'n'){
                                        break;
                                    }
                                }
                                //else printf("\n����Ƿ�!����������!");
                            }
                            break;//����switch
                    }
                    break;//����whileѭ��
                }
            p = p->next;
        }
        
        /*test
        //stu *p = NULL;
        stu *new = NULL;
        new = aim;
        while(new != NULL){
            printf("%s\n", new->name);
            new = new->next;
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
            if(strcmp(p->name, tar) == 0 || strcmp(p->stn, tar) == 0){
                printf("\nȷ��Ҫɾ��%s��%s��������?(1/0)", p->stn, p->name);
                int cf;
                scanf("%d", &cf);
                if(cf == 1){
                    p1->next = p->next; //����ɾ���ڵ��ǰ�ڵ�ͽڵ�
                    free(p); //�ͷŽڵ�
                }
                break;
            }
            p1 = p;
            p = p->next;
        }

/*
        //test
        //stu *p = NULL;
        printf("\n////start test////\n");
        stu *new = NULL;
        new = aim;
        while(new != NULL){
            printf("%s %s\n", new->stn, new->name);
            new = new->next;
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
            if(strcmp(p->name, tar) == 0 || strcmp(p->stn, tar) == 0){
                cf = 1;
                break;
            }
            p = p->next;
        }
        if(cf == 1){
            printf("\n%s��%s�ĳɼ�Ϊ:����:%d, ��ѧ:%d, ����:%d", p->stn, p->name,
            p->grade[0], p->grade[1], p->grade[2]);            
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
            strcpy(ss[n].nm, p->name);
            for(int i = 0; i < 3; ++i){
                ss[n].gd[i] = p->grade[i];
                }
            n++;
            p = p->next;
        }
        //int sum[500] = {0};
/*
        printf("\n//////start test///////");
        for(int i = 0; i < n; ++i){
            printf("\n%d", ss[i].gd[2]);
        }
*/
        printf("\nѡ��ѧ������(a.����, b.��ѧ, c.����, d.�ܳɼ�):");
        char cf;
        getchar();
        cf = getchar();
        switch (cf)
        {
            case 'a':
                for(int i = 0; i < n - 1; ++i){ //ð������
                    for(int ii = 0; ii < n - 1 - i; ++ii){
                        if(ss[ii].gd[0] < ss[ii + 1].gd[0]){
                            //��������
                            int temp = ss[ii].gd[1];
                            ss[ii].gd[0] = ss[ii + 1].gd[0];
                            ss[ii + 1].gd[0] = temp;

                            //��������
                            char t[50];
                            strcpy(t, ss[ii].nm);
                            strcpy(ss[ii].nm, ss[ii + 1].nm);
                            strcpy(ss[ii + 1].nm, t);
                        }
                    }
                }
                //��ӡ����
                for(int i = 0; i < n; ++i){
                    printf("\n��%d��%s����:%d", i + 1, ss[i].nm, ss[i].gd[0]);
                }
                break;
            case 'b':
                for(int i = 0; i < n - 1; ++i){ //ð������
                    for(int ii = 0; ii < n - 1 - i; ++ii){
                        if(ss[ii].gd[1] < ss[ii + 1].gd[1]){
                            //��������
                            int temp = ss[ii].gd[1];
                            ss[ii].gd[1] = ss[ii + 1].gd[1];
                            ss[ii + 1].gd[1] = temp;

                            //��������
                            char t[50];
                            strcpy(t, ss[ii].nm);
                            strcpy(ss[ii].nm, ss[ii + 1].nm);
                            strcpy(ss[ii + 1].nm, t);
                        }
                    }
                }
                //��ӡ����
                for(int i = 0; i < n; ++i){
                    printf("\n��%d��%s����:%d", i + 1, ss[i].nm, ss[i].gd[1]);
                }
                break;

            case 'c':
                for(int i = 0; i < n - 1; ++i){ //ð������
                    for(int ii = 0; ii < n - 1 - i; ++ii){
                        if(ss[ii].gd[2] < ss[ii + 1].gd[2]){
                            //��������
                            int temp = ss[ii].gd[2];
                            ss[ii].gd[2] = ss[ii + 1].gd[2];
                            ss[ii + 1].gd[2] = temp;

                            //��������
                            char t[50];
                            strcpy(t, ss[ii].nm);
                            strcpy(ss[ii].nm, ss[ii + 1].nm);
                            strcpy(ss[ii + 1].nm, t);
                        }
                    }
                }
                //��ӡ����
                for(int i = 0; i < n; ++i){
                    printf("\n��%d��%s����:%d", i + 1, ss[i].nm, ss[i].gd[2]);
                }
                break;

            case 'd':{
                int sum[500] = {0};
                for(int i = 0; i < n; ++i){
                    sum[i] = ss[i].gd[0] + ss[i].gd[1] + ss[i].gd[2];
                }
                for(int i = 0; i < n - 1; ++i){ //ð������
                    for(int ii = 0; ii < n - 1 - i; ++ii){
                        if(sum[ii] < sum[ii + 1]){
                            //��������
                            int temp = sum[ii];
                            sum[ii] = sum[ii + 1];
                            sum[ii + 1] = temp;

                            //��������
                            char t[50];
                            strcpy(t, ss[ii].nm);
                            strcpy(ss[ii].nm, ss[ii + 1].nm);
                            strcpy(ss[ii + 1].nm, t);
                        }
                    }
                }
                //��ӡ����
                for(int i = 0; i < n; ++i){
                    printf("\n��%d��%s����:%d", i + 1, ss[i].nm, sum[i]);
                }
                break;}
        }
    }




display(stu *aim)//<6>��ʾ����ѧ��
    {
        stu *p = NULL;
        p = aim;
        while(p != NULL){
            printf("\n%s��%s��Ϣ: ", p->stn, p->name);
            if(p->gender == 'm'){
                printf("�Ա�: �� ");
            }
            else if(p->gender == 'f'){
                printf("�Ա�: Ů ");
            }
            printf("�ɼ�: ����: %d, ��ѧ: %d, ����: %d", 
            p->grade[0], p->grade[1], p->grade[2]);
            p = p->next;
        }
    }






void clr()//<7>ˢ��ϵͳҳ��
    {
        system("CLS");
        menu();
    }





int main()
    {
        system("color 9F");// ����cmd ����Ϊ����ɫ�� ����Ϊ����ɫ
        
        FILE *fp = NULL;
        fp = fopen("stu.txt", "at+"); //�Զ�/д��ʽ��һ���ı��ļ�������������ı�ĩ׷�����ݣ����ļ������ڣ���Ὠ�����ļ���
        
        menu();
        stu *aim = NULL;
        //printf("\n%d\n", choose()); test choose
        int num = 9;
        while(1){
        //menu();
        printf("\n�����Ӧ�����ֱ��ѡ���Ӧ����:");
        scanf("%d", &num);
        if(num == 9){
            //д���ļ�
            stu *tar = NULL;
            tar = aim;
            while(tar != NULL){
                fprintf(fp, "%s %s %c %d %d %d", 
                tar->stn, tar->name, tar->gender,
                tar->grade[0], tar->grade[1], tar->grade[2]);
                if(tar->next != NULL){
                    fprintf(fp, "\n");
                }
                tar = tar->next;
            }
            fclose(fp);

            break;
        }
        
            switch (num) //ѡ����
            {
            case 1: aim = creat();/*getchar();/* printf("\n%p", aim)*/; break;
            case 2: fix(aim); getchar(); break;
            case 3: delete(aim); getchar(); break;
            case 4: search(aim); getchar(); break;
            case 5: sort(aim); getchar(); break;
            case 6: display(aim); getchar(); break;
            case 7: clr(); getchar(); break;
            case 8:getchar();break;
            default: getchar(); printf("\n��Ч����!"); break;
            }



        }
        free(aim);
        return 0;
    }


read(FILE *p, stu *head)
    {
        FILE *fp = NULL;
        fp = p;
        stu *tar = NULL;
        tar = head;
    }
