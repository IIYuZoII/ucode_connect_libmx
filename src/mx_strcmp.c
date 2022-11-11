int mx_strcmp(const char *s1, const char *s2) {
	int res = 0;
	for (int i = 0; ; i++) {
		if (s1[i] == '\0' || s2[i] == '\0') break;
		if (s1[i] != s2[i]) {
			res = s1[i] - s2[i];
			break;
		} 
	}
	return res;
}







