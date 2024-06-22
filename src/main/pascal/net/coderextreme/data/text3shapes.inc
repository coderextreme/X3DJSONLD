function text3shapes: TX3DRootNode;
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
field26: TfieldNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['title'] := 'text3shapes.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d';
X3D0.Meta['description'] := '3 text shapes';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group8 := TGroupNode.Create;
Transform9 := TTransformNode.Create;
Shape10 := TShapeNode.Create;
Text11 := TTextNode.Create;
Text11.SetText(['Node\"\"\"']);
FontStyle12 := TFontStyleNode.Create;
{ .SetFontStyle }
Text11.FontStyle := FontStyle12;
{ .SetGeometry }
Shape10.Geometry := Text11;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape10.Appearance := Appearance13;
{ .AddChild }
Transform9.AddChildren([Shape10]);
Shape15 := TShapeNode.Create;
Text16 := TTextNode.Create;
Text16.SetText(['Node2','\\\\','\\\\\\\\','Node2']);
FontStyle17 := TFontStyleNode.Create;
{ .SetFontStyle }
Text16.FontStyle := FontStyle17;
{ .SetGeometry }
Shape15.Geometry := Text16;
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
{ .SetMaterial }
Appearance18.Material := Material19;
{ .SetAppearance }
Shape15.Appearance := Appearance18;
{ .AddChild }
Transform9.AddChildren([Shape15]);
Shape20 := TShapeNode.Create;
Text21 := TTextNode.Create;
Text21.SetText(['Node3 \\\\\\\\ \\\\ ','Node3\"\"\"']);
FontStyle22 := TFontStyleNode.Create;
{ .SetFontStyle }
Text21.FontStyle := FontStyle22;
{ .SetGeometry }
Shape20.Geometry := Text21;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
{ .SetMaterial }
Appearance23.Material := Material24;
{ .SetAppearance }
Shape20.Appearance := Appearance23;
{ .AddChild }
Transform9.AddChildren([Shape20]);
Script25 := TScriptNode.Create;
field26 := TfieldNode.Create;
field26.NameField := 'frontUrls';
field26.Type := 'MFString';
field26.AccessType := 'initializeOnly';
field26.Value := '\"rnl_front.png\" \"uffizi_front.png\"';
{ .AddField }
Script25.Field := field26;

Script25.SetSourceCode('''ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';''');
{ .AddChildren }
Transform9.AddChildren([Script25]);
{ .AddChildren }
Group8.AddChildren([Transform9]);
{ .AddGroup }
X3D0.AddChildren([Group8]);
Result := X3D0;
end;
