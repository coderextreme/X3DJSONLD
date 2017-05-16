@ECHO OFF

REM	Batch file:  X3dToHtml.bat
REM	Author:      Don Brutzman
REM	Created:     21 October  2000
REM	Revised:     25 December 2004

REM -------------------------------------------------------------------------

REM	Edit the following directories as needed to match your installation.

SET  SAXON_LOCATION=c:/xml/saxon

SET    X3D-EDIT-DIR=c:\www.web3d.org\x3d\content

SET   X3D-EDIT-SITE=http://www.web3d.org/x3d/content

    SET	  STYLESHEET=%X3D-EDIT-DIR%\X3dToHtml.xslt
REM SET	  STYLESHEET=%X3D-EDIT-DIR%\xml2html.xsl

SET XMLINT_LOCATION=c:\xml\microsoft

REM Saxon:   http://saxon.sourceforge.net

	SET SAXON_TIMING=no
REM	SET SAXON_TIMING=-t

REM -------------------------------------------------------------------------

if NOT EXIST %1.x3d	GOTO STARTUP_ERROR

REM further safety tests require DOS command extensions?  bleah

if -%2 == -		GOTO START
if -%2 == -same 	GOTO START
if -%2 == --same	GOTO START
if -%2 == -SAME 	GOTO START
if -%2 == --SAME	GOTO START

:STARTUP_ERROR
echo [Error] X3dToHtml.bat invocation problem.
echo =======
echo Usage:    X3dToHtml fileName    (without .x3d extension!)
echo Output:   fileNameStyled.html
echo =======
echo or        X3dToHtml fileName  -same
echo Output:   fileName.html
echo =======
exit

REM -------------------------------------------------------------------------

:START
@echo Syntax check the XML input:

@ECHO	%XMLINT_LOCATION%\xmlint.exe %1.x3d
	%XMLINT_LOCATION%\xmlint.exe %1.x3d

@ECHO - - - - -

@ECHO Pretty print %1.x3d
@ECHO   XML tags as readable HTML:

IF %SAXON_TIMING% == no	  @ECHO	java -jar %SAXON_LOCATION%/saxon.jar    -o %1Styled.html %1.x3d %STYLESHEET%
IF %SAXON_TIMING% == no	  	java -jar %SAXON_LOCATION%/saxon.jar    -o %1Styled.html %1.x3d %STYLESHEET%

IF %SAXON_TIMING% == -t	  @ECHO	java -jar %SAXON_LOCATION%/saxon.jar -t -o %1Styled.html %1.x3d %STYLESHEET%
IF %SAXON_TIMING% == -t	  	java -jar %SAXON_LOCATION%/saxon.jar -t -o %1Styled.html %1.x3d %STYLESHEET%

if -%2 == -same 	GOTO SAME_NAME
if -%2 == --same	GOTO SAME_NAME
if -%2 == -SAME 	GOTO SAME_NAME
if -%2 == --SAME	GOTO SAME_NAME

REM -------------------------------------------------------------------------

:DEFAULT_NAME

GOTO DONE

REM -------------------------------------------------------------------------

:SAME_NAME

REM RENAME command not used since second filename cannot include path

COPY %1Styled.html %1.html
DEL  %1Styled.html

REM -------------------------------------------------------------------------

:DONE

DIR /n %1*.html

@ECHO - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

