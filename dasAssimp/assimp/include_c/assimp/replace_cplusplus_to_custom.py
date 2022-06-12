#Script for replace __cplusplus text to some other build directive (__CUSTOM_CPP_DEFINE)

import os

HEADERS_PATH = "."

for fname in os.listdir(HEADERS_PATH):
	if os.path.isfile(os.path.join(HEADERS_PATH, fname)) and os.path.splitext(fname)[1] != ".py":
		print("Proccessing", fname)
		with open(fname, "rt") as f:
			lines = f.readlines()
		newlines = []
		for line in lines:
			newlines.append(line.replace("__cplusplus", "__CUSTOM_CPP_DEFINE"))
		with open(fname, "wt") as f:
			f.writelines(newlines)