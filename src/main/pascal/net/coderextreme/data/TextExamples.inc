function TextExamples: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
Transform13: TTransformNode;
Shape14: TShapeNode;
Text15: TTextNode;
FontStyle16: TFontStyleNode;
Appearance17: TAppearanceNode;
Material18: TMaterialNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Text21: TTextNode;
FontStyle22: TFontStyleNode;
Appearance23: TAppearanceNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Text26: TTextNode;
FontStyle27: TFontStyleNode;
Appearance28: TAppearanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'TextExamples.x3d';
X3D0.Meta['description'] := 'Show different escape-character text examples for embedded quotation marks.';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['created'] := '7 April 2001';
X3D0.Meta['modified'] := '26 April 2016';
X3D0.Meta['warning'] := 'Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.';
X3D0.Meta['warning'] := 'Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group12 := TGroupNode.Create;
Transform13 := TTransformNode.Create;
Transform13.Translation := Vector3(0,2,0);
Shape14 := TShapeNode.Create;
Text15 := TTextNode.Create;
Text15.SetText(['Compare special character escaping']);
FontStyle16 := TFontStyleNode.Create;
FontStyle16.Justify := fjMiddle;
FontStyle16.JustifyMinor := fjMiddle;
FontStyle16.Size := 0.8;
{ .SetFontStyle }
Text15.FontStyle := FontStyle16;
{ .SetGeometry }
Shape14.Geometry := Text15;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(0.1,0.7,0.7);
{ .SetMaterial }
Appearance17.Material := Material18;
{ .SetAppearance }
Shape14.Appearance := Appearance17;
{ .AddChild }
Transform13.AddChildren([Shape14]);
{ .AddChildren }
Group12.AddChildren([Transform13]);
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(-3,0,0);
Shape20 := TShapeNode.Create;
Text21 := TTextNode.Create;
Text21.SetText(['I don't think so','','he said \"Hi\"']);
FontStyle22 := TFontStyleNode.Create;
FontStyle22 := FontStyle16;
{ .SetFontStyle }
Text21.FontStyle := FontStyle22;
{ .SetGeometry }
Shape20.Geometry := Text21;
Appearance23 := TAppearanceNode.Create;
Appearance23 := Appearance17;
{ .SetAppearance }
Shape20.Appearance := Appearance23;
{ .AddChild }
Transform19.AddChildren([Shape20]);
{ .AddChildren }
Group12.AddChildren([Transform19]);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(3,0,0);
Shape25 := TShapeNode.Create;
Text26 := TTextNode.Create;
Text26.SetText(['I don't think so','','he said \"Hi\"']);
FontStyle27 := TFontStyleNode.Create;
FontStyle27 := FontStyle16;
{ .SetFontStyle }
Text26.FontStyle := FontStyle27;
{ .SetGeometry }
Shape25.Geometry := Text26;
Appearance28 := TAppearanceNode.Create;
Appearance28 := Appearance17;
{ .SetAppearance }
Shape25.Appearance := Appearance28;
{ .AddChild }
Transform24.AddChildren([Shape25]);
{ .AddChildren }
Group12.AddChildren([Transform24]);
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
