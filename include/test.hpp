#include "wander_lib/wander_lib.hpp"
#include <json/json.h>

class wander_test_class {
public:
	wander_test_class();

	void hello();
	void setdata(int data) { this->data = data; }
	int get_data() { return data; }

private:
	int data;
};