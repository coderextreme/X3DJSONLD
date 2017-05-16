@ECHO OFF > NUL

REM	Batch file:  X3dToVrml97.bat
REM	Author:      Don Brutzman
REM	Created:     21 October 2000
REM	Revised:     7 April 2005

REM	Warning:     now configured for .x3d extension, needs .xml capability restored

REM -------------------------------------------------------------------------

REM	Edit the following directories as needed to match your installation.

SET  SAXON_LOCATION=c:/xml/saxon

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
echo [Error] X3dToVrml97.bat invocation problem:
echo X3dToVrml97.bat %1 %2 %3 %4
echo =======
echo Usage:  X3dToVrml97 fileName        (fileName without .x3d extension!)
echo Output: fileNameTranslated.wrl
echo =======
echo or      X3dToVrml97 fileName  -same
echo Output: fileName.wrl
echo =======
exit

REM -------------------------------------------------------------------------

:START

SET CLASSPATH=%X3D-EDIT-DIR%;%CLASSPATH%;.
java X3dDtdChecker %1.x3d -setTransitionalDTD

@echo Syntax check the XML input:

@ECHO	%XMLINT_LOCATION%\xmlint.exe %1.x3d
	%XMLINT_LOCATION%\xmlint.exe %1.x3d

@ECHO - - - - -

@ECHO Translate %1.x3d
@ECHO from X3d to Vrml97, then syntax check the VRML output:

IF %SAXON_TIMING% == no	  @ECHO	java -jar %SAXON_LOCATION%/saxon.jar    -o %1Styled.wrl %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt
IF %SAXON_TIMING% == no	  	java -jar %SAXON_LOCATION%/saxon.jar    -o %1Styled.wrl %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt

IF %SAXON_TIMING% == -t	  @ECHO	java -jar %SAXON_LOCATION%/saxon.jar -t -o %1Styled.wrl %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt
IF %SAXON_TIMING% == -t	        java -jar %SAXON_LOCATION%/saxon.jar -t -o %1Styled.wrl %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt

REM Temporary addition:  also produce ClassicVRML output

			  @ECHO	java -jar %SAXON_LOCATION%/saxon.jar -o %1Styled.x3dv %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt fileEncoding=ClassicVRML outputDiagnostics=false
			        java -jar %SAXON_LOCATION%/saxon.jar -o %1Styled.x3dv %1.x3d %X3D-EDIT-DIR%\X3dToVrml97.xslt fileEncoding=ClassicVRML outputDiagnostics=false

REM IF EXIST %1Styled.wrl ECHO Syntax check the intermediate VRML translation:
REM IF EXIST %1Styled.wrl %VORLON_LOCATION%\vorlon         %1Styled.wrl -nowarnings

if -%2 == -same 	GOTO SAME_NAME
if -%2 == --same	GOTO SAME_NAME
if -%2 == -SAME 	GOTO SAME_NAME
if -%2 == --SAME	GOTO SAME_NAME

REM -------------------------------------------------------------------------

:DEFAULT_NAME

IF EXIST %1Styled.wrl	ECHO Pretty-print VRML output:
IF EXIST %1Styled.wrl	ECHO	%VPP_LOCATION%\vpp               %1Styled.wrl ">" %1Translated.wrl
IF EXIST %1Styled.wrl 		%VPP_LOCATION%\vpp               %1Styled.wrl  >  %1Translated.wrl

IF EXIST %1Styled.wrl	ECHO Pretty-print ClassicVRML output:
IF EXIST %1Styled.wrl	ECHO	%VPP_LOCATION%\vpp               %1Styled.x3dv ">" %1Translated.x3dv
IF EXIST %1Styled.wrl 		%VPP_LOCATION%\vpp               %1Styled.x3dv  >  %1Translated.x3dv

IF EXIST %1Translated.wrl ECHO	Syntax check the pretty-printed VRML output:
IF EXIST %1Translated.wrl ECHO	%VORLON_LOCATION%\vorlon     %1Translated.wrl -nowarnings
IF EXIST %1Translated.wrl 	%VORLON_LOCATION%\vorlon     %1Translated.wrl -nowarnings

GOTO DONE

REM -------------------------------------------------------------------------

:SAME_NAME

IF EXIST %1Styled.wrl	ECHO Pretty-print VRML output:
IF EXIST %1Styled.wrl	ECHO %VPP_LOCATION%\vpp               %1Styled.wrl ">" %1.wrl
IF EXIST %1Styled.wrl	     %VPP_LOCATION%\vpp               %1Styled.wrl  >  %1.wrl

IF EXIST %1Styled.wrl	ECHO Pretty-print VRML output:
IF EXIST %1Styled.wrl	ECHO %VPP_LOCATION%\vpp               %1Styled.x3dv ">" %1.x3dv
IF EXIST %1Styled.wrl	     %VPP_LOCATION%\vpp               %1Styled.x3dv  >  %1.x3dv

IF EXIST %1.wrl ECHO Syntax check the pretty-printed VRML output:
IF EXIST %1.wrl ECHO %VORLON_LOCATION%\vorlon     %1.wrl -nowarnings
IF EXIST %1.wrl      %VORLON_LOCATION%\vorlon     %1.wrl -nowarnings

REM -------------------------------------------------------------------------

:DONE

java X3dDtdChecker %1.x3d -setFinalDTD

DEL    %1Styled.wrl
DEL    %1Styled.x3dv

@ECHO - - - - -

DIR /n %1*.??l

@ECHO - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

