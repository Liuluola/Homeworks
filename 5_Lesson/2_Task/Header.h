#pragma once

class Counter {

public:
	int value;

	Counter();

	Counter(int c_value);

	int value_up();

	int value_down();

	void getValue();

	void get(Counter& count, std::string& command);
};