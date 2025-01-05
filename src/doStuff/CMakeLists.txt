
# -------------------- Set up the executable
add_library (DoStuff STATIC "")

# --- Add source files to the exe
target_sources (DoStuff
	PRIVATE
		do.cpp      do.h
	)
