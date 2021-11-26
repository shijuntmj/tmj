// #include<iostream>
// #include<filesystem>
// #include<string>
// #include<set>
// using namespace std;
// /*
// direcory_entry
// directory_iterator
// C:\Users\86198\Desktop\VIP课程
// */
// void traver()//遍历文件目录
// {
// 	filesystem::path url("C:\\Users\\86198\\Desktop\\VIP课程");
// 	if (!filesystem::exists(url))
// 	{
// 		cout << "文件不存在" << endl;
// 	}
// 	filesystem::directory_entry direin(url);
// 	if (direin.status().type() == filesystem::file_type::directory)
// 	{
// 		cout << "目录文件" << endl;
// 	}
// 	filesystem::directory_iterator list(url);
// 	for (auto v : list)
// 	{
// 		cout << v.path().filename() << endl;
// 	}
// }
// void traver1()//遍历当前文件夹中文件
// {
// 	filesystem::path dir("C:\\Users\\86198\\Desktop\\VIP课程");
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
// void traver2()//所以文件，保留文件夹
// {
// 	filesystem::path dir("C:\\Users\\86198\\Desktop\\VIP课程");
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

// 	//上面获取当前目录的所有文件
// 	for (auto v : dirset)
// 	{
// 		//cout << v << endl;
// 		if (v != "delete.exe")//不把自己给删了
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