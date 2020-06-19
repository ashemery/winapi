#include <Windows.h>

int main()
{
	FreeConsole();
	MessageBoxW(NULL, L"No Console?", L"Testing:", MB_YESNO);
	return 0;
}
