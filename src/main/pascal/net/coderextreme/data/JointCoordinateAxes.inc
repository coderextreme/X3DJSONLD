function JointCoordinateAxes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group4: TGroupNode;
NavigationInfo5: TNavigationInfoNode;
Group6: TGroupNode;
Group7: TGroupNode;
Shape8: TShapeNode;
Appearance9: TAppearanceNode;
Material10: TMaterialNode;
Cylinder11: TCylinderNode;
Transform12: TTransformNode;
Shape13: TShapeNode;
Appearance14: TAppearanceNode;
Cone15: TConeNode;
Transform16: TTransformNode;
Shape17: TShapeNode;
Transform18: TTransformNode;
Billboard19: TBillboardNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Text23: TTextNode;
FontStyle24: TFontStyleNode;
Transform25: TTransformNode;
Group26: TGroupNode;
Group27: TGroupNode;
Transform28: TTransformNode;
Billboard29: TBillboardNode;
Shape30: TShapeNode;
Appearance31: TAppearanceNode;
Text32: TTextNode;
FontStyle33: TFontStyleNode;
Transform34: TTransformNode;
Group35: TGroupNode;
Group36: TGroupNode;
Transform37: TTransformNode;
Billboard38: TBillboardNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Text41: TTextNode;
FontStyle42: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['converter'] := 'x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy';
X3D0.Meta['converted'] := 'Mon, 31 Jul 2023 03:48:04 GMT';
Group4 := TGroupNode.Create;
NavigationInfo5 := TNavigationInfoNode.Create;
NavigationInfo5.Headlight := False;
{ .AddChildren }
Group4.AddChildren([NavigationInfo5]);
Group6 := TGroupNode.Create;
Group7 := TGroupNode.Create;
Shape8 := TShapeNode.Create;
Appearance9 := TAppearanceNode.Create;
Material10 := TMaterialNode.Create;
Material10.DiffuseColor := Vector3(0.3,0.3,1);
Material10.EmissiveColor := Vector3(0.3,0.3,0.33);
{ .SetMaterial }
Appearance9.Material := Material10;
{ .SetAppearance }
Shape8.Appearance := Appearance9;
Cylinder11 := TCylinderNode.Create;
Cylinder11.Top := False;
Cylinder11.Bottom := False;
Cylinder11.Radius := 0.025;
{ .SetGeometry }
Shape8.Geometry := Cylinder11;
{ .AddChildren }
Group7.AddChildren([Shape8]);
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0,1,0);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
Appearance14 := Appearance9;
{ .SetAppearance }
Shape13.Appearance := Appearance14;
Cone15 := TConeNode.Create;
Cone15.Height := 0.1;
Cone15.BottomRadius := 0.05;
{ .SetGeometry }
Shape13.Geometry := Cone15;
{ .AddChild }
Transform12.AddChildren([Shape13]);
{ .AddChildren }
Group7.AddChildren([Transform12]);
Transform16 := TTransformNode.Create;
Transform16.Translation := Vector3(0,-1,0);
Transform16.Rotation := Vector4(1,0,0,3.1416);
Shape17 := TShapeNode.Create;
Shape17 := Shape13;
{ .AddChild }
Transform16.AddChildren([Shape17]);
{ .AddChildren }
Group7.AddChildren([Transform16]);
{ .AddChildren }
Group6.AddChildren([Group7]);
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0,1.08,0);
Billboard19 := TBillboardNode.Create;
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1,1,0.3);
Material22.EmissiveColor := Vector3(0.33,0.33,0.1);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape20.Appearance := Appearance21;
Text23 := TTextNode.Create;
Text23.SetText(['Y']);
FontStyle24 := TFontStyleNode.Create;
FontStyle24.Family := ffSans;
FontStyle24.Size := 0.2;
FontStyle24.Justify := fjMiddle;
{ .SetFontStyle }
Text23.FontStyle := FontStyle24;
{ .SetGeometry }
Shape20.Geometry := Text23;
{ .AddChildren }
Billboard19.AddChildren([Shape20]);
{ .AddChildren }
Transform18.AddChildren([Billboard19]);
{ .AddChildren }
Group6.AddChildren([Transform18]);
{ .AddChildren }
Group4.AddChildren([Group6]);
Transform25 := TTransformNode.Create;
Transform25.Rotation := Vector4(0,0,1,-1.5708);
Group26 := TGroupNode.Create;
Group27 := TGroupNode.Create;
Group27 := Group7;
{ .AddChildren }
Group26.AddChildren([Group27]);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(0.072,1.1,0);
Transform28.Rotation := Vector4(0,0,1,1.5708);
Billboard29 := TBillboardNode.Create;
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Appearance31 := Appearance21;
{ .SetAppearance }
Shape30.Appearance := Appearance31;
Text32 := TTextNode.Create;
Text32.SetText(['X']);
FontStyle33 := TFontStyleNode.Create;
FontStyle33 := FontStyle24;
{ .SetFontStyle }
Text32.FontStyle := FontStyle33;
{ .SetGeometry }
Shape30.Geometry := Text32;
{ .AddChildren }
Billboard29.AddChildren([Shape30]);
{ .AddChildren }
Transform28.AddChildren([Billboard29]);
{ .AddChildren }
Group26.AddChildren([Transform28]);
{ .AddChildren }
Transform25.AddChildren([Group26]);
{ .AddChildren }
Group4.AddChildren([Transform25]);
Transform34 := TTransformNode.Create;
Transform34.Rotation := Vector4(1,0,0,1.5708);
Group35 := TGroupNode.Create;
Group36 := TGroupNode.Create;
Group36 := Group7;
{ .AddChildren }
Group35.AddChildren([Group36]);
Transform37 := TTransformNode.Create;
Transform37.Translation := Vector3(0,1.1,0.072);
Transform37.Rotation := Vector4(1,0,0,-1.5708);
Billboard38 := TBillboardNode.Create;
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Appearance40 := Appearance21;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
Text41 := TTextNode.Create;
Text41.SetText(['Z']);
FontStyle42 := TFontStyleNode.Create;
FontStyle42 := FontStyle24;
{ .SetFontStyle }
Text41.FontStyle := FontStyle42;
{ .SetGeometry }
Shape39.Geometry := Text41;
{ .AddChildren }
Billboard38.AddChildren([Shape39]);
{ .AddChildren }
Transform37.AddChildren([Billboard38]);
{ .AddChildren }
Group35.AddChildren([Transform37]);
{ .AddChildren }
Transform34.AddChildren([Group35]);
{ .AddChildren }
Group4.AddChildren([Transform34]);
{ .AddGroup }
X3D0.AddChildren([Group4]);
Result := X3D0;
end;
