@ECHO OFF > NUL

REM	Batch file:  X3dToX3dvClassicVrmlEncoding.bat
REM	Basis:       X3dToVrml97.bat
REM	Author:      Don Brutzman
REM	Created:      5 July    2004
REM	Revised:      5 July    2004

REM	Warning:     now configured for .x3d extension, needs .xml capability restored

REM -------------------------------------------------------------------------

REM	Edit the following directories as needed to match your installation.

SET  SAXON_LOCATION=c:\xml\saxon

SET    X3D-EDIT-DIR=c:\www.web3d.org\x3d\content

SET   X3D-EDIT-SITE=http://www.web3d.org/x3d/content

SET VORLON_LOCATION=c:\vrml\vorlon

SET XMLINT_LOCATION=c:\xml\microsoft

SET    VPP_LOCATION=%X3D-EDIT-DIR%

REM Saxon:   http://saxon.sourceforge.net

	SET SAXON_TIMING=no
REM	SET SAXON_TIMING=-t

REM Vorlon:  http://www.trapezium.com
REM vpp:     Bob Crispen's VRML Pages at hiwaay.net/~crispen/vrml
REM          edited copy included with bigger MAXBUFSIZE

REM -------------------------------------------------------------------------

IF     EXIST %1.x3d 	GOTO EXTENSION_OK
IF NOT EXIST %1.x3d 	GOTO STARTUP_ERROR

:EXTENSION_OK

REM further safety tests require DOS command extensions?  bleah

if -%2 == -		GOTO START
if -%2 == -same 	GOTO START
if -%2 == --same	GOTO START
if -%2 == -SAME 	GOTO START
if -%2 == --SAME	GOTO START

:STARTUP_ERROR
echo [Error] X3dToX3dvClassicVrmlEncoding.bat invocation problem.
echo =======
echo Usage:  X3dToX3dvClassicVrmlEncoding fileName        (fileName without .x3d extension!)
echo Output: fileNameTranslated.x3dv
echo =======
echo or      X3dToX3dvClassicVrmlEncoding fileName  -same
echo Output: fileName.x3dv
echo =======
exit

REM -------------------------------------------------------------------------

:START
@echo Syntax check the XML input:

@ECHO	%XMLINT_LOCATION%\xmlint.exe %1.x3d
	%XMLINT_LOCATION%\xmlint.exe %1.x3d

@ECHO - - - - -

@ECHO Translate %1.x3d
@ECHO from X3d to ClassicVRML, then syntax check the VRML output:

IF %SAXON_TIMING% == no	  @ECHO	%SAXON_LOCATION%\saxon.exe    -o %1Styled.x3dv %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt fileEncoding=ClassicVRML
IF %SAXON_TIMING% == no	  	%SAXON_LOCATION%\saxon.exe    -o %1Styled.x3dv %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt fileEncoding=ClassicVRML

IF %SAXON_TIMING% == -t	  @ECHO	%SAXON_LOCATION%\saxon.exe -t -o %1Styled.x3dv %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt fileEncoding=ClassicVRML
IF %SAXON_TIMING% == -t	        %SAXON_LOCATION%\saxon.exe -t -o %1Styled.x3dv %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt fileEncoding=ClassicVRML

REM IF EXIST %1Styled.x3dv ECHO Syntax check the intermediate ClassicVRML translation:
REM IF EXIST %1Styled.x3dv %VORLON_LOCATION%\vorlon         %1Styled.x3dv -nowarnings

if -%2 == -same 	GOTO SAME_NAME
if -%2 == --same	GOTO SAME_NAME
if -%2 == -SAME 	GOTO SAME_NAME
if -%2 == --SAME	GOTO SAME_NAME

REM -------------------------------------------------------------------------

:DEFAULT_NAME

IF EXIST %1Styled.x3dv	ECHO Pretty-print ClassicVRML output:
IF EXIST %1Styled.x3dv	ECHO	%VPP_LOCATION%\vpp               %1Styled.x3dv ">" %1Translated.x3dv
IF EXIST %1Styled.x3dv 		%VPP_LOCATION%\vpp               %1Styled.x3dv  >  %1Translated.x3dv

REM IF EXIST %1Translated.x3dv ECHO	Syntax check the pretty-printed ClassicVRML output:
REM IF EXIST %1Translated.x3dv ECHO	%VORLON_LOCATION%\vorlon     %1Translated.x3dv -nowarnings
REM IF EXIST %1Translated.x3dv 	%VORLON_LOCATION%\vorlon     %1Translated.x3dv -nowarnings

GOTO DONE

REM -------------------------------------------------------------------------

:SAME_NAME

IF EXIST %1Styled.x3dv	ECHO Pretty-print VRML output:
IF EXIST %1Styled.x3dv	ECHO %VPP_LOCATION%\vpp               %1Styled.x3dv ">" %1.x3dv
IF EXIST %1Styled.x3dv	     %VPP_LOCATION%\vpp               %1Styled.x3dv  >  %1.x3dv

REM IF EXIST %1.x3dv ECHO Syntax check the pretty-printed ClassicVRML output:
REM IF EXIST %1.x3dv ECHO %VORLON_LOCATION%\vorlon     %1.x3dv -nowarnings
REM IF EXIST %1.x3dv      %VORLON_LOCATION%\vorlon     %1.x3dv -nowarnings

REM -------------------------------------------------------------------------

:DONE

DEL    %1Styled.x3dv

@ECHO - - - - -

DIR /N %1*.x3dv

@ECHO - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

