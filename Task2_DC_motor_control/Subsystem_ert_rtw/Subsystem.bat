
set MATLAB=O:\01. Programs\MathWorks2022


call  "\\DESKTOP-L9MDI4A\O$\01. Programs\MathWorks2022\bin\win64\checkMATLABRootForDriveMap.exe" "\\DESKTOP-L9MDI4A\O$\01. Programs\MathWorks2022"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
cd .

if "%1"=="" ("O:\01. Programs\MathWorks2022\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f Subsystem.mk all) else ("O:\01. Programs\MathWorks2022\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f Subsystem.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1