#include <fmt/format.h>
int main() {
	int j1 = 1, j2 = 1, j0 = 0;
	for (int i = 1; i < 10; i++) {
		j1 = j2;
		j2 = j0;
		j0 = j1 + j2;
		fmt::print("{} ,",j0);
	}
	return 0;
}
