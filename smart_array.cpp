#include "smart_array.h"

smart_array::smart_array(const int size) {
	if (size > 0) {
		data_ = new int[size];
		size_ = size;
		count_ = 0;
	}
	else
		throw std::exception("���������� ��������� ������ 1");
}
void smart_array::add_element(const int num) {
	if (count_ < size_) {
		data_[count_] = num;
		++count_;
	}
	else
		throw std::exception("��� ���������� ��������� ���������� ��������� �������");
}
int smart_array::get_element(const int index) {
	if (index >= 0 && index < count_) {
		return data_[index];
	}
	else
		throw std::exception("������ ��� ��������� ��������� �������");
}
smart_array::~smart_array() {
	delete[] data_;
}