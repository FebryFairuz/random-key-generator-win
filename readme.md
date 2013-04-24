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

MS Visual Studio C++ 2010

Import project directly from MS Visual Studio C++ 2010 or double click RandomKeyGenerator.sln tou launch MS Visual Studio C++.

MSBuild

To compile using msbuild use this command
```
	c:\> msbuild /property:Configuration=Release <project_directory>/RandomKeyGenerator.sln
```

Deployment
----------

This application need MS Visual C++ Runtime. 

Easy compilation and packaging by run the build batch file
```
	build.bat
```


