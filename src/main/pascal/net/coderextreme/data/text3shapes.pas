unit text3shapes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createtext3shapes: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group8: TGroupNode;
Transform9: TTransformNode;
Shape10: TShapeNode;
Text11: TTextNode;
FontStyle12: TFontStyleNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
Shape15: TShapeNode;
Text16: TTextNode;
FontStyle17: TFontStyleNode;
Appearance18: TAppearanceNode;
Material19: TMaterialNode;
Shape20: TShapeNode;
Text21: TTextNode;
FontStyle22: TFontStyleNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
Script25: TScriptNode;
MFString26: TMFString;

procedure Inittext3shapesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'December 13 2015';
{ METHOD .Meta }
X3D0.Meta['title'] := 'text3shapes.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 text shapes';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group8 := TGroupNode.Create;;
Transform9 := TTransformNode.Create;;
Shape10 := TShapeNode.Create;;
Text11 := TTextNode.Create;;
Text11.SetText(['Node\"\""']);
FontStyle12 := TFontStyleNode.Create;;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text11.FontStyle := FontStyle12;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape10.Geometry := Text11;
Appearance13 := TAppearanceNode.Create;;
Material14 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance13.Material := Material14;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape10.Appearance := Appearance13;
{ METHOD .FdChildren.Add }
Transform9.FdChildren.Add(Shape10);
Shape15 := TShapeNode.Create;;
Text16 := TTextNode.Create;;
Text16.SetText(['Node2','\\\\\\\\\\\\Node2']);
FontStyle17 := TFontStyleNode.Create;;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text16.FontStyle := FontStyle17;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape15.Geometry := Text16;
Appearance18 := TAppearanceNode.Create;
end;

procedure Inittext3shapesPart1;
begin
;
Material19 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance18.Material := Material19;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape15.Appearance := Appearance18;
{ METHOD .FdChildren.Add }
Transform9.FdChildren.Add(Shape15);
Shape20 := TShapeNode.Create;;
Text21 := TTextNode.Create;;
Text21.SetText(['Node3 \\\\\\\\ \\\\ Node3\"\""']);
FontStyle22 := TFontStyleNode.Create;;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text21.FontStyle := FontStyle22;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Text21;
Appearance23 := TAppearanceNode.Create;;
Material24 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance23;
{ METHOD .FdChildren.Add }
Transform9.FdChildren.Add(Shape20);
Script25 := TScriptNode.Create;;
MFString26 := TMFString.CreateUndefined(Script25, false, 'frontUrls');
MFString26.Value := '\"rnl_front.png\" \"uffizi_front.png\"';
{ METHOD .Fd.AddCustomField }
Script25.AddCustomField(MFString26);

Script25.SetSourceCode('''ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';''');
{ METHOD .FdChildren.Add }
Transform9.FdChildren.Add(Script25);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Transform9);
{ METHOD .AddGroup }
X3D0.AddChildren([Group8]);
end;

function Createtext3shapes: TX3DRootNode;
begin
Inittext3shapesPart0;
Inittext3shapesPart1;
Result := X3D0;
end;

begin
end.
