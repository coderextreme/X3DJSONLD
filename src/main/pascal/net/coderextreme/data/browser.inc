function browser: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Script8: TScriptNode;
Script9: TScriptNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'browser.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d';
X3D0.Meta['description'] := 'a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \"';
Group7 := TGroupNode.Create;
Script8 := TScriptNode.Create;

Script8.SetSourceCode('''ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }''');
{ .AddChildren }
Group7.AddChildren([Script8]);
Script9 := TScriptNode.Create;

Script9.SetSourceCode('''ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\n"+
"'	Transform		\\n'+\n"+
"'    ' + '               	\\n';\n"+
"\n"+
"}''');
{ .AddChildren }
Group7.AddChildren([Script9]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
