// #include<iostream>
// #include<filesystem>
// #include<fstream>
// using namespace std;
// /*
// enum class file_type {
//     not_found = -1,
//     none,
//     regular,
//     directory,
//     symlink,
//     block,
//     character,
//     fifo,
//     socket,
//     unknown
// };
// */
// void demo_status(filesystem::file_status object)
// {
// 	switch (object.type())
// 	{
//     case filesystem::file_type::regular:
//             cout << "�����ļ�" << endl;
//             break;
//     case filesystem::file_type::directory:
//         cout << "Ŀ¼" << endl;
//         break;
//     case filesystem::file_type::not_found:
//         cout << "û��" << endl;
//         break;
//     //........

// 	}
// }
// int main()
// {
//     filesystem::create_directory("box1");
//     demo_status(filesystem::status("box1"));
//     fstream files("box1\\1", ios::out | ios::trunc);
//     if (!files.is_open())
//     {
//         cout << "��ʧ��!" << endl;
//     }
//     demo_status(filesystem::status("box1\\1"));
// 	return 0;
// }