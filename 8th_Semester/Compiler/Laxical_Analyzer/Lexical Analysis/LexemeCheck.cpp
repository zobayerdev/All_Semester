/******************************************LEXICAL ANALYSIS UPDATE VERSION********************************************/
#include<iostream>
#include<string>
#include<fstream>
#include<string.h>
using namespace std;
/* Function for Tokenize expression  */
void exponential();
void float_number();
void power();
void integer();
void identifier();
/* Exponential number */
void stt0();
void stt1();
void stt2();
void stt3();
void stt4();
void stt5();
void stt6();
void stt7();
void stt8();
void stt9();
/* Float number */
void s0();
void s1();
void s2();
void s3();
/* Power number */
void st0();
void st1();
void st2();
void st3();
/* Integer number */
void state0();
void state1();
/* Identifier */
void stte0();
void stte1();

int i=0,j,k,a=0,b=0,c=0,d=0,e=0,f=0,g=0, stringlength, strlength, parentheses=0, SingleQuote, DoubleQuote, PersentSymbol;
int Comma, Semicolon, AddressSymbol, Colon, line_Count=0, error_Count=0;
char expression[1000], token[1000], new_expression[1000], other_token[100];
std::string str,file_line;

int main()
{
    ifstream file_("program.txt");
    if(file_.is_open())
    {
        while(getline(file_,file_line))
        {
            ++line_Count;
            k=0;
            for(i=0; i<file_line.size(); i++)
            {
                if(file_line.at(i)!='\n')
                {
                    new_expression[k]=file_line.at(i);
                    k++;
                }
            }
            new_expression[k]='\0';
            stringlength=strlen(new_expression);
            i=0;
            while(new_expression[i]!='\0')
            {
                j=0;
                a=0,b=0,c=0,d=0,e=0,f=0,g=0;
                SingleQuote=0, DoubleQuote=0, PersentSymbol=0, Comma=0, Semicolon=0, AddressSymbol=0, Colon=0;
                while(new_expression[i]!=' '&& i< stringlength && new_expression[i]!='\0')
                {
                    token[j]=new_expression[i];
                    str += token[j];
                    if(token[j]=='('||token[j]==')')
                    {
                        parentheses=1;
                        other_token[j]=token[j];
                        strlength=strlen(token);
                        if(str.size()>1)
                        {
                            if(new_expression[i]=='.')
                                b=1;
                            else if(new_expression[i]=='E')
                                c=1;
                            else if(new_expression[i]=='^')
                                d=1;
                            else if(new_expression[i]=='+'||new_expression[i]=='-'||new_expression[i]=='*'||new_expression[i]=='/'||new_expression[i]=='=')
                                e=1;
                            else if(new_expression[i]>=48&&new_expression[i]<=57)
                                f=1;
                            else
                                g=1;
                            break;
                        }
                        else
                        {
label_1:
                            if(other_token[j]=='(')
                                printf("");
                            else
                                printf("");
                            parentheses=0;
                            goto label_2;
                        }

                    }
                    else if(token[j]=='{'||token[j]=='}')
                    {
                        other_token[j]=token[j];
                        if(other_token[j]=='{')
                            printf("");
                        else
                            printf("");
                        goto label_2;
                    }
                    else if(new_expression[i]=='"')
                        DoubleQuote=1;
                    else if(new_expression[i]=='`')
                        SingleQuote=1;
                    else if(new_expression[i]==',')
                        Comma=1;
                    else if(new_expression[i]==';')
                        Semicolon=1;
                    else if(new_expression[i]==':')
                        Colon=1;
                    else if(new_expression[i]=='%')
                        PersentSymbol=1;
                    else if(new_expression[i]=='&')
                        AddressSymbol=1;
                    else if(new_expression[i]=='.')
                        b=1;
                    else if(new_expression[i]=='E')
                        c=1;
                    else if(new_expression[i]=='^')
                        d=1;
                    else if(new_expression[i]=='+'||new_expression[i]=='-'||new_expression[i]=='*'||new_expression[i]=='/'||new_expression[i]=='=')
                        e=1;
                    else if(new_expression[i]>=48&&new_expression[i]<=57)
                        f=1;
                    else
                        g=1;
                    j++;
                    i++;
                }
                token[j]='\0';
                j=0;
                if(d==1&&c==1)
                {
                    while(a!=-1 && a!=-3)
                        exponential();
                    if(a==-1)
                    {
                        ++error_Count;
                        cout<<"\nLexical Error at Line:"<<line_Count<<" Invalid input token "<<'"'<<token<<'"'<<" Exponential number";
                    }
                    else
                        printf("");
                }
                else if(b==1 && d!=1)
                {
                    while(a!=-1 && a!=-3)
                        float_number();
                    if(a==-1)
                    {
                        ++error_Count;
                        cout<<"\nLexical Error at Line:"<<line_Count<<" Invalid input token "<<'"'<<token<<'"'<<" Float number";
                    }
                    else
                        printf("");
                }
                else if(f==1&&d==1)
                {
                    while(a!=-1 && a!=-3)
                        power();
                    if(a==-1)
                    {
                        ++error_Count;
                        cout<<"\nLexical Error at Line:"<<line_Count<<" Invalid input token "<<'"'<<token<<'"'<<" Power number";
                    }
                    else
                        printf("");
                }

                else if(f==1&&g!=1)
                {
                    while(a!=-1 && a!=-3)
                        integer();
                    if(a==-1)
                    {
                        ++error_Count;
                        cout<<"\nLexical Error at Line:"<<line_Count<<" Invalid input token "<<'"'<<token<<'"'<<" Integer number";
                    }
                    else
                        printf("");
                }

                else if(e==1)
                {
                    printf("");
                }
                else if(Semicolon==1)
                {
                    printf("");
                }
                else if(Colon==1)
                {
                    printf("");
                }
                else if(Comma==1)
                {
                    printf("");
                }
                else if(DoubleQuote==1)
                {
                    printf("");
                }
                else if(SingleQuote==1)
                {
                    printf("");
                }
                else if(PersentSymbol==1)
                {
                    printf("");
                }
                else if(AddressSymbol==1)
                {
                    printf("");
                }
                else if(g==1)
                {
                    while(a!=-1 && a!=-3)
                        identifier();
                    if(a==-1)
                    {
                        ++error_Count;
                        cout<<"\nLexical Error at Line:"<<line_Count<<" Invalid input token "<<'"'<<token<<'"'<<" Identifier";
                    }
                    else
                        printf("");
                    if(parentheses==1)
                        goto label_1;
                }
label_2:
                i++;
                if(i==stringlength)
                {
                    for(k=0; k<file_line.size(); k++)
                        new_expression[k]='\0';
                }
                str.clear();
            }
        }
        if(error_Count==0)
        {
            cout<<"\nThere is no Lexical Error";
            cout<<"\nTotal number of error: "<<error_Count;
        }
        else
        {
            cout<<"\nTotal number of error: "<<error_Count;
        }
        file_.close();
    }
    else
        cout<<"File is not Open";
    return 0;
}

void exponential()
{
    switch(a)
    {
    case 0:
        stt0();
        break;
    case 1:
        stt1();
        break;
    case 2:
        stt2();
        break;
    case 3:
        stt3();
        break;
    case 4:
        stt4();
        break;
    case 5:
        stt5();
        break;
    case 6:
        stt6();
        break;
    case 7:
        stt7();
        break;
    case 8:
        stt8();
        break;
    case 9:
        stt9();
        break;
    }
}

void stt0()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]=='.')
    {
        a=2;
        j++;
    }
    else if(token[j]=='E')
    {
        a=4;
        j++;
    }
    else
        a=-1;
}

void stt1()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]=='.')
    {
        a=2;
        j++;
    }
    else if(token[j]=='E')
    {
        a=4;
        j++;
    }
    else
        a=-1;
}

void stt2()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=3;
        j++;
    }
    else
        a=-1;
}


void stt3()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=3;
        j++;
    }
    else if(token[j]=='E')
    {
        a=4;
        j++;
    }
    else
        a=-1;
}

void stt4()
{
    if(token[j]=='^')
    {
        a=5;
        j++;
    }
    else
        a=-1;
}

void stt5()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=7;
        j++;
    }
    else if(token[j]=='+'||token[j]=='-')
    {
        a=6;
        j++;
    }
    else if(token[j]=='.')
    {
        a=8;
        j++;
    }
    else
        a=-1;
}

void stt6()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=7;
        j++;
    }
    else
        a=-1;
}

void stt7()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=7;
        j++;
    }
    else if(token[j]=='.')
    {
        a=8;
        j++;
    }
    else if(token[j]==' '||token[j]=='\0')
    {
        a=-3;
    }
    else
        a=-1;
}

void stt8()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=9;
        j++;
    }
    else
        a=-1;
}

void stt9()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=9;
        j++;
    }
    else if(token[j]==' '||token[j]=='\0')
    {
        a=-3;

    }
    else
        a=-1;
}

void float_number()
{
    switch(a)
    {
    case 0:
        s0();
        break;
    case 1:
        s1();
        break;
    case 2:
        s2();
        break;
    case 3:
        s3();
        break;
    }
}

void s0()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]=='.')
    {
        a=2;
        j++;
    }
    else
        a=-1;
}

void s1()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]=='.')
    {
        a=2;
        j++;
    }
    else
        a=-1;
}

void s2()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=3;
        j++;
    }
    else
        a=-1;
}

void s3()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=3;
        j++;
    }
    else if(token[j]==' '||token[j]=='\0')
    {
        a=-3;

    }
    else
        a=-1;
}

void power()
{
    switch(a)
    {
    case 0:
        st0();
        break;
    case 1:
        st1();
        break;
    case 2:
        st2();
        break;
    case 3:
        st3();
        break;
    }
}

void st0()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else
        a=-1;
}

void st1()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]=='^')
    {
        a=2;
        j++;
    }

    else
        a=-1;

}

void st2()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=3;
        j++;
    }
    else
        a=-1;
}

void st3()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=3;
        j++;
    }
    else if(token[j]==' '||token[j]=='\0')
    {
        a=-3;
    }
    else
        a=-1;
}

void integer()
{
    switch(a)
    {
    case 0:
        state0();
        break;
    case 1:
        state1();
        break;
    }
}


void state0()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else
        a=-1;
}

void state1()
{
    if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]==' '||token[j]=='\0')
    {
        a=-3;
        j++;
    }
    else
        a=-1;
}

void identifier()
{
    switch(a)
    {
    case 0:
        stte0();
        break;
    case 1:
        stte1();
        break;
    }
}

void stte0()
{
    if((token[j]>=65&&token[j]<=90)||(token[j]>=97 && token[j]<=122))
    {
        a=1;
        j++;
    }
    else if(token[j]=='_')
    {
        a=1;
        j++;
    }
    else
        a=-1;
}

void stte1()
{
    if((token[j]>=65&&token[j]<=90)||(token[j]>=97&&token[j]<=122))
    {
        a=1;
        j++;
    }
    else if(token[j]>=48&&token[j]<=57)
    {
        a=1;
        j++;
    }
    else if(token[j]=='_')
    {
        a=1;
        j++;
    }
    else if(token[j]==' '||token[j]=='\0')
    {
        a=-3;
    }
    else
        a=-1;
}
