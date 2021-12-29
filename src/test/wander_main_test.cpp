#include "test.hpp"
#include <assert.h>
#include <exception>

bool test_wander_lib()
{
	wander_lib* wl = new wander_lib();
	std::string greeting_msgs = "greetings from wander";
	wl->set_grt_msg(greeting_msgs);
	return (greeting_msgs == wl->get_grt_msg());
}

int main(int argc, char** argv)
{
	assert(test_wander_lib());


	// json format処理
	std::string file_path = "./test_resources/sample.json";
	std::string json_str = "";

	FILE* fp; 
	char c;
	if ((fp = fopen(file_path.c_str(), "r")) == NULL) {  /* ファイルのオープン */
		printf("file open error!!\n");
		return 1;
	}
	while ((c = fgetc(fp)) != EOF) {
		json_str += c;
		putchar(c);
	}
	fclose(fp);


	// json text読み込み
	Json::Value wander_json_root;
	Json::Reader json_reader;
	json_reader.parse(json_str, wander_json_root);

	// 表示
	Json::Value goodLine = wander_json_root["goodLine"];
	Json::Value badLine = wander_json_root["badLineWithNoComma"];
	Json::Value wwgh = wander_json_root["weWontGetHere"];
	std::cout << goodLine.asString() << std::endl;
	std::cout << badLine.asString() << std::endl;
	std::cout << wwgh.asString() << std::endl;


	return (0);
}