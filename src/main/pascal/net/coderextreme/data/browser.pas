unit browser;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createbrowser: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Script8: TScriptNode;
Script9: TScriptNode;

procedure InitbrowserPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'browser.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \"';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;;
Script8 := TScriptNode.Create;;

Script8.SetSourceCode('''ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }''');
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Script8);
Script9 := TScriptNode.Create;;

Script9.SetSourceCode('''ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\\n'	Transform		\\n'+\\n'    ' + '               	\\n';\n"+
"\n"+
"}''');
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Script9);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createbrowser: TX3DRootNode;
begin
InitbrowserPart0;
Result := X3D0;
end;

begin
end.
