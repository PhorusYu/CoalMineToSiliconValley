////#include <stdio.h>
////int main(void)
////{
////	const char *fn, *ln, *all;
////	fn = "Phorus";
////	ln = "Yu";
////	all = printf("%s %s\n", fn, ln);   错误的，因为上文已经定义all类型为char*，而printf的返回值类型为int，类型不匹配，导致报错
////	printf("%s\n%s", fn, ln);
////	printf("%s", all);
////	return 0;
////}
//
////正确的示范
//#include <stdio.h>
//int main(void)
//{
//	const char* fn, * ln;
//	fn = "Phorus";
//	ln = "Yu";
//	printf("%s %s\n", fn, ln);
//	printf("%s\n%s\n", fn, ln);
//	printf("%s %s", fn, ln);
//	return 0;
//}