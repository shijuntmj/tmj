// #include<iostream>
// #include<filesystem>
// #include<string>
// #include<set>
// using namespace std;
// /*
// direcory_entry
// directory_iterator
// C:\Users\86198\Desktop\VIP�γ�
// */
// void traver()//�����ļ�Ŀ¼
// {
// 	filesystem::path url("C:\\Users\\86198\\Desktop\\VIP�γ�");
// 	if (!filesystem::exists(url))
// 	{
// 		cout << "�ļ�������" << endl;
// 	}
// 	filesystem::directory_entry direin(url);
// 	if (direin.status().type() == filesystem::file_type::directory)
// 	{
// 		cout << "Ŀ¼�ļ�" << endl;
// 	}
// 	filesystem::directory_iterator list(url);
// 	for (auto v : list)
// 	{
// 		cout << v.path().filename() << endl;
// 	}
// }
// void traver1()//������ǰ�ļ������ļ�
// {
// 	filesystem::path dir("C:\\Users\\86198\\Desktop\\VIP�γ�");
// 	set<string> dirset;
// 	for (filesystem::directory_iterator end, begin(dir); begin != end; ++begin)
// 	{
// 		if (!filesystem::is_directory(begin->path()))
// 		{
// 			dirset.insert(begin->path().filename().string());
// 		}
// 	}
// 	for (auto v : dirset)
// 	{
// 		cout << v << endl;
// 	}
// }
// void traver2()//�����ļ��������ļ���
// {
// 	filesystem::path dir("C:\\Users\\86198\\Desktop\\VIP�γ�");
// 	set<string> dirset;
// 	for (filesystem::recursive_directory_iterator end, begin(dir); begin != end; ++begin)
// 	{
// 		if (!filesystem::is_directory(begin->path()))
// 		{
// 			dirset.insert(begin->path().filename().string());
// 		}
// 	}
// 	for (auto v : dirset)
// 	{
// 		cout << v << endl;
// 	}
// }
// void deleteall()
// {
// 	filesystem::path root = filesystem::current_path();
// 	set<string> dirset;
// 	for (filesystem::recursive_directory_iterator end, begin(root); begin != end; ++begin)
// 	{
// 		if (!filesystem::is_directory(begin->path()))
// 		{
// 			dirset.insert(begin->path().filename().string());
// 		}
// 	}

// 	//�����ȡ��ǰĿ¼�������ļ�
// 	for (auto v : dirset)
// 	{
// 		//cout << v << endl;
// 		if (v != "delete.exe")//�����Լ���ɾ��
// 		{
// 			filesystem::remove_all(root / v);
// 		}
// 	}
// }
// int main()
// {
// 	//traver();
// 	//traver1();
// 	//traver2();
// 	deleteall();
// 	return 0;
// }