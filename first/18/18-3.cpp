#include<iostream>
#include<fstream>
using namespace std;
//��ascii���д
void test()
{
    fstream myFile;
    myFile.open("myFile.txt", ios::in | ios::out | ios::trunc);
    if(!myFile)
    {
        cout << "l" << endl;
    }
    // if(!myFile.is_open())
    // {
    //     cout << "l" << endl;
    // }
    myFile.close();
}

void ReadWriteFile(const char* readFileName,const char* writeFileName)//���Կո���
{
    fstream read(readFileName, ios::in);
    fstream write(writeFileName, ios::out);
    while(1)
    {
        char temp;
        read >> temp;
        if(read.eof())
        {
            break;
        }
        write << temp;
    }
    read.close();
    write.close();
}
void ReadWriteFile2(const char* readFileName,const char* writeFileName)//�����ո�ͻ���
{
    fstream read(readFileName, ios::in);
    fstream write(writeFileName, ios::out);
    while(1)
    {
        char temp;
        read.get(temp);
        if(read.eof())
        {
            break;
        }
        write.put(temp);
    }
    read.close();
    write.close();
}
// void ReadWriteFile1(const char* readFileName,const char* writeFileName)
// {
//     fstream read(readFileName, ios::in);
//     fstream write(writeFileName, ios::out);
//     while(1)
//     {
//         int temp;
//         read >> temp;
//         if(read.eof())
//         {
//             break;
//         }
//         write << temp;
//     }
//     read.close();
//     write.close();
// }
//�Զ����ƶ�д
void ReadWriteFile3(const char* readFileName,const char* writeFileName)
{
    fstream readFile(readFileName, ios::in | ios::binary);
    fstream writeFile(writeFileName, ios::out | ios::binary | ios::trunc);
    if(!readFile)
    {
        cout << "" << endl;
    }
    if(writeFile)
    {
        cout << "" << endl;
    }
    while(!readFile.eof())
    {
        char temp[1024]="";
        readFile.read(temp, 1024);
        writeFile.write(temp, 1024);
    }
    readFile.close();
    writeFile.close();
}
//�ļ�ָ��
void ReadFile3(const char* readFile)//�����
{
    fstream readf(readFile, ios::in);
    // char temp[1024] = "";
    readf.seekg(6);//��λ
    char key;
    readf.get(key);//���
    cout << key << endl;
    readf.seekg(0, ios::beg);
    cout << (char)readf.get() << endl;
    readf.close();
}
void writeFile(const char* writefile)//����д
{
    fstream writef(writefile, ios::out | ios::trunc);
    writef.seekp(1, ios::beg);
    writef.put('a');
    writef.seekp(3, ios::beg);
    writef.put('b');
    writef.seekp(5, ios::beg);
    writef.put('c');
    writef.seekp(7, ios::beg);
    writef.put('d');
    writef.close();
}
int main()
{
    test();
    ReadWriteFile("1.txt", "2.txt");
    ReadWriteFile3("1.txt", "3.txt");
    ReadFile3("1.txt");
    writeFile("4.txt");
    // ReadWriteFile1("1.xlsx", "2.xlsx");
    system("pause");
    return 0;
}