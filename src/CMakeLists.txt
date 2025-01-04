

# -------------------- Set up the executable
add_executable (HelloExe "")

# --- Add source files to the exe
target_sources (HelloExe
	PRIVATE
		main.cpp
		main.h
	)

#target_sources (HelloExe
#	PRIVATE
#		util.cpp
#	)

# -------------------- Add Fortran subdirectory
#add_subdirectory(myFortran_lib)


# -------------------- Link the Fortran lib to the exe
#target_link_libraries(HelloExe myFortran)
#set_target_properties(HelloExe PROPERTIES LINKER_LANGUAGE Fortran)