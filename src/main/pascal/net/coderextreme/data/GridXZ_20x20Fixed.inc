function GridXZ_20x20Fixed: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
WorldInfo13: TWorldInfoNode;
Viewpoint14: TViewpointNode;
Transform15: TTransformNode;
Group16: TGroupNode;
Shape17: TShapeNode;
IndexedLineSet18: TIndexedLineSetNode;
Coordinate19: TCoordinateNode;
Color20: TColorNode;
Transform21: TTransformNode;
Shape22: TShapeNode;
Transform23: TTransformNode;
Billboard24: TBillboardNode;
Shape25: TShapeNode;
Text26: TTextNode;
FontStyle27: TFontStyleNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Transform30: TTransformNode;
Billboard31: TBillboardNode;
Shape32: TShapeNode;
Text33: TTextNode;
FontStyle34: TFontStyleNode;
Appearance35: TAppearanceNode;
Transform36: TTransformNode;
Billboard37: TBillboardNode;
Shape38: TShapeNode;
Text39: TTextNode;
FontStyle40: TFontStyleNode;
Appearance41: TAppearanceNode;
Transform42: TTransformNode;
Billboard43: TBillboardNode;
Shape44: TShapeNode;
Text45: TTextNode;
FontStyle46: TFontStyleNode;
Appearance47: TAppearanceNode;
Transform48: TTransformNode;
Billboard49: TBillboardNode;
Shape50: TShapeNode;
Text51: TTextNode;
FontStyle52: TFontStyleNode;
Appearance53: TAppearanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'GridXZ_20x20Fixed.x3d';
X3D0.Meta['creator'] := 'MV4204 class';
X3D0.Meta['created'] := '3 September 2000';
X3D0.Meta['modified'] := '28 November 2019';
X3D0.Meta['reference'] := 'GridXY_20x20Fixed.x3d';
X3D0.Meta['reference'] := 'GridYZ_20x20Fixed.x3d';
X3D0.Meta['description'] := 'Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../../license.html';
Group12 := TGroupNode.Create;
WorldInfo13 := TWorldInfoNode.Create;
WorldInfo13.Title := 'GridXZ_20x20Fixed.x3d';
{ .AddChildren }
Group12.AddChildren([WorldInfo13]);
Viewpoint14 := TViewpointNode.Create;
Viewpoint14.Description := 'XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)';
Viewpoint14.Orientation := Vector4(1,0,0,-0.4);
Viewpoint14.Position := Vector3(0,10,25);
{ .AddChildren }
Group12.AddChildren([Viewpoint14]);
Transform15 := TTransformNode.Create;
Group16 := TGroupNode.Create;
Shape17 := TShapeNode.Create;
IndexedLineSet18 := TIndexedLineSetNode.Create;
IndexedLineSet18.SetColorIndex([1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1]);
IndexedLineSet18.ColorPerVertex := False;
IndexedLineSet18.SetCoordIndex([1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1]);
Coordinate19 := TCoordinateNode.Create;
Coordinate19.SetPoint([Vector3(0,0,0),Vector3(-10,0,10),Vector3(-9,0,10),Vector3(-8,0,10),Vector3(-7,0,10),Vector3(-6,0,10),Vector3(-5,0,10),Vector3(-4,0,10),Vector3(-3,0,10),Vector3(-2,0,10),Vector3(-1,0,10),Vector3(0,0,10),Vector3(1,0,10),Vector3(2,0,10),Vector3(3,0,10),Vector3(4,0,10),Vector3(5,0,10),Vector3(6,0,10),Vector3(7,0,10),Vector3(8,0,10),Vector3(9,0,10),Vector3(10,0,10),Vector3(-10,0,-10),Vector3(-9,0,-10),Vector3(-8,0,-10),Vector3(-7,0,-10),Vector3(-6,0,-10),Vector3(-5,0,-10),Vector3(-4,0,-10),Vector3(-3,0,-10),Vector3(-2,0,-10),Vector3(-1,0,-10),Vector3(0,0,-10),Vector3(1,0,-10),Vector3(2,0,-10),Vector3(3,0,-10),Vector3(4,0,-10),Vector3(5,0,-10),Vector3(6,0,-10),Vector3(7,0,-10),Vector3(8,0,-10),Vector3(9,0,-10),Vector3(10,0,-10)]);
{ .SetCoord }
IndexedLineSet18.Coord := Coordinate19;
Color20 := TColorNode.Create;
Color20.SetColor([Vector3(0.4,0.4,0.4),Vector3(0.8,0.2,0),Vector3(0.4,0.1,0.05)]);
{ .SetColor }
IndexedLineSet18.Color := Color20;
{ .SetGeometry }
Shape17.Geometry := IndexedLineSet18;
{ .AddChildren }
Group16.AddChildren([Shape17]);
Transform21 := TTransformNode.Create;
Transform21.Rotation := Vector4(0,1,0,1.57079);
Shape22 := TShapeNode.Create;
Shape22 := Shape17;
{ .AddChild }
Transform21.AddChildren([Shape22]);
{ .AddChildren }
Group16.AddChildren([Transform21]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0,-0.5,0);
Billboard24 := TBillboardNode.Create;
Shape25 := TShapeNode.Create;
Text26 := TTextNode.Create;
Text26.SetText(['origin']);
FontStyle27 := TFontStyleNode.Create;
FontStyle27.Justify := fjMiddle;
FontStyle27.JustifyMinor := fjMiddle;
FontStyle27.Size := 0.4;
{ .SetFontStyle }
Text26.FontStyle := FontStyle27;
{ .SetGeometry }
Shape25.Geometry := Text26;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
{ .SetMaterial }
Appearance28.Material := Material29;
{ .SetAppearance }
Shape25.Appearance := Appearance28;
{ .AddChildren }
Billboard24.AddChildren([Shape25]);
{ .AddChildren }
Transform23.AddChildren([Billboard24]);
{ .AddChildren }
Group16.AddChildren([Transform23]);
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(10,-0.5,10);
Billboard31 := TBillboardNode.Create;
Shape32 := TShapeNode.Create;
Text33 := TTextNode.Create;
Text33.SetText(['10 0 10']);
FontStyle34 := TFontStyleNode.Create;
FontStyle34 := FontStyle27;
{ .SetFontStyle }
Text33.FontStyle := FontStyle34;
{ .SetGeometry }
Shape32.Geometry := Text33;
Appearance35 := TAppearanceNode.Create;
Appearance35 := Appearance28;
{ .SetAppearance }
Shape32.Appearance := Appearance35;
{ .AddChildren }
Billboard31.AddChildren([Shape32]);
{ .AddChildren }
Transform30.AddChildren([Billboard31]);
{ .AddChildren }
Group16.AddChildren([Transform30]);
Transform36 := TTransformNode.Create;
Transform36.Translation := Vector3(10,-0.5,-10);
Billboard37 := TBillboardNode.Create;
Shape38 := TShapeNode.Create;
Text39 := TTextNode.Create;
Text39.SetText(['10 0 -10']);
FontStyle40 := TFontStyleNode.Create;
FontStyle40 := FontStyle27;
{ .SetFontStyle }
Text39.FontStyle := FontStyle40;
{ .SetGeometry }
Shape38.Geometry := Text39;
Appearance41 := TAppearanceNode.Create;
Appearance41 := Appearance28;
{ .SetAppearance }
Shape38.Appearance := Appearance41;
{ .AddChildren }
Billboard37.AddChildren([Shape38]);
{ .AddChildren }
Transform36.AddChildren([Billboard37]);
{ .AddChildren }
Group16.AddChildren([Transform36]);
Transform42 := TTransformNode.Create;
Transform42.Translation := Vector3(-10,-0.5,10);
Billboard43 := TBillboardNode.Create;
Shape44 := TShapeNode.Create;
Text45 := TTextNode.Create;
Text45.SetText(['-10 0 10']);
FontStyle46 := TFontStyleNode.Create;
FontStyle46 := FontStyle27;
{ .SetFontStyle }
Text45.FontStyle := FontStyle46;
{ .SetGeometry }
Shape44.Geometry := Text45;
Appearance47 := TAppearanceNode.Create;
Appearance47 := Appearance28;
{ .SetAppearance }
Shape44.Appearance := Appearance47;
{ .AddChildren }
Billboard43.AddChildren([Shape44]);
{ .AddChildren }
Transform42.AddChildren([Billboard43]);
{ .AddChildren }
Group16.AddChildren([Transform42]);
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(-10,-0.5,-10);
Billboard49 := TBillboardNode.Create;
Shape50 := TShapeNode.Create;
Text51 := TTextNode.Create;
Text51.SetText(['-10 0 -10']);
FontStyle52 := TFontStyleNode.Create;
FontStyle52 := FontStyle27;
{ .SetFontStyle }
Text51.FontStyle := FontStyle52;
{ .SetGeometry }
Shape50.Geometry := Text51;
Appearance53 := TAppearanceNode.Create;
Appearance53 := Appearance28;
{ .SetAppearance }
Shape50.Appearance := Appearance53;
{ .AddChildren }
Billboard49.AddChildren([Shape50]);
{ .AddChildren }
Transform48.AddChildren([Billboard49]);
{ .AddChildren }
Group16.AddChildren([Transform48]);
{ .AddChildren }
Transform15.AddChildren([Group16]);
{ .AddChildren }
Group12.AddChildren([Transform15]);
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
