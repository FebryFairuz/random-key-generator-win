RKG 1.0
=============

Char random key generator.


Features 
---------

- Automatically copied generated key into clipboard.
- Automatically copied generated key into file.

Building
--------

Dependencies

- boost.random from http://www.boost.org/


Compile
-------

To compile using msbuild use this command
```
	c:\> msbuild /property:Configuration=Release <this_directory>/RandomKeyGenerator.sln
```
or import directly to MS Visual Studio 2010


Deployment
----------

This application need MS Visual C++ Runtime. Folder structure and files like below

NeverFear +
		  - NeverFear.exe
		  - NF.dll
		  - msvcp100.dll
		  - msvcr100.dll
		  - readme.txt
		  - license.txt

Easy compilation and packaging by run the build batch file
```
	build.bat
```


