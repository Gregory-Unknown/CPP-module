#include <iostream>
#include <stdint.h>

typedef struct Data
{
	int s_number;
	std::string s_str;
} t_data;
uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
int main()
{
	Data *data = new Data();
	data->s_str = "Kolobok !";
	data->s_number = 2021;
	std::cout << "Data : " << data << std::endl;
	std::cout << "Data string : " << data->s_str << std::endl;
	std::cout << "Data number : " << data->s_number << std::endl;
	uintptr_t raw = serialize(data);
	std::cout << "Raw : " << raw << std::endl;
	Data *tmp = deserialize(raw);
	std::cout << "Tmp: " << tmp << std::endl;
	std::cout << "Tmp string : " << tmp->s_str << std::endl;
	std::cout << "Tmp number : " << tmp->s_number << std::endl;
	delete data;
	return (0);
}
