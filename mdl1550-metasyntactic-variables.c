#include <stdio.h>

int main(int argc, char **argv) {
	char *misty_foo[] = {"char", "misty_foo", "'0'"};
	char *chuck_baz[] = {"short", "chuck_baz", "0"};
	char *foo_barbarossa[] = {"int", "foo_barbarossa", "0"};
	char *rufi_qux[] = {"long", "rufi_qux", "0"};
	char *raph_quz[] = {"long long", "raph_quz", "0"};
	char *source_corge[] = {"float", "source_corge", "0.0f"};
	char *fin_grault[] = {"double", "fin_grault", "0.0"};
	char *ida_garply[] = {"long double", "ida_garply", "0.0"};

	printf(
		"<<<\n"
		"mdl1550 metasyntactic variables canon, demonstrated by C data types\n"
		">>>\n\n"
		"<<<\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		"%s %s = %s;\n"
		">>>\n",
		misty_foo[0], misty_foo[1], misty_foo[2],
		chuck_baz[0], chuck_baz[1], chuck_baz[2],
		foo_barbarossa[0], foo_barbarossa[1], foo_barbarossa[2],
		rufi_qux[0], rufi_qux[1], rufi_qux[2],
		raph_quz[0], raph_quz[1], raph_quz[2],
		source_corge[0], source_corge[1], source_corge[2],
		fin_grault[0], fin_grault[1], fin_grault[2],
		ida_garply[0], ida_garply[1], ida_garply[2]
	);

	return 0;
}
