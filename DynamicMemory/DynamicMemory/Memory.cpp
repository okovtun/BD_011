template<typename T>T** Allocate(const int m, const int n)
{
	//1) ������� ������ ����������:
	T** arr = new T*[m];
	//2) �������� ������ ��� ����� ���������� ������������� �������:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n];
	}
	return arr;
}
template<typename T>void Clear(T** arr, const int m)
{
	//4) �������� ���������� ������������� �������:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}