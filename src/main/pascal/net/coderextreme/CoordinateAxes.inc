function CoordinateAxes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
Collision16: TCollisionNode;
Group17: TGroupNode;
Group18: TGroupNode;
Shape19: TShapeNode;
Cylinder20: TCylinderNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Cone25: TConeNode;
Appearance26: TAppearanceNode;
Transform27: TTransformNode;
Billboard28: TBillboardNode;
Shape29: TShapeNode;
Appearance30: TAppearanceNode;
Material31: TMaterialNode;
Text32: TTextNode;
FontStyle33: TFontStyleNode;
Transform34: TTransformNode;
Group35: TGroupNode;
Group36: TGroupNode;
Shape37: TShapeNode;
Cylinder38: TCylinderNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Cone43: TConeNode;
Appearance44: TAppearanceNode;
Transform45: TTransformNode;
Billboard46: TBillboardNode;
Shape47: TShapeNode;
Appearance48: TAppearanceNode;
Text49: TTextNode;
FontStyle50: TFontStyleNode;
Transform51: TTransformNode;
Group52: TGroupNode;
Group53: TGroupNode;
Shape54: TShapeNode;
Cylinder55: TCylinderNode;
Appearance56: TAppearanceNode;
Material57: TMaterialNode;
Transform58: TTransformNode;
Shape59: TShapeNode;
Cone60: TConeNode;
Appearance61: TAppearanceNode;
Transform62: TTransformNode;
Billboard63: TBillboardNode;
Shape64: TShapeNode;
Appearance65: TAppearanceNode;
Text66: TTextNode;
FontStyle67: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'CoordinateAxes.x3d';
X3D0.Meta['creator'] := 'Don Brutzman, Byounghyun Yoo';
X3D0.Meta['created'] := '14 July 2000';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['description'] := 'X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.';
X3D0.Meta['reference'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d';
X3D0.Meta['reference'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d';
X3D0.Meta['reference'] := 'https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d';
X3D0.Meta['reference'] := 'https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d';
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'CoordinateAxes.x3d';
{ .AddChildren }
Group14.AddChildren([WorldInfo15]);
Collision16 := TCollisionNode.Create;
{ Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. }
{ This NavigationInfo allows examine mode and will be overridden by any parent scene. }
{ Each arrow goes from +1m to -1m to allow linear scaling to fit a scene }
{ Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user }
Group17 := TGroupNode.Create;
{ Vertical Y arrow and label }
Group18 := TGroupNode.Create;
Shape19 := TShapeNode.Create;
Cylinder20 := TCylinderNode.Create;
Cylinder20.Radius := 0.025;
Cylinder20.Top := False;
{ .SetGeometry }
Shape19.Geometry := Cylinder20;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.1,0.6,0.1);
Material22.EmissiveColor := Vector3(0.05,0.2,0.05);
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChildren }
Group18.AddChildren([Shape19]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0,1,0);
Shape24 := TShapeNode.Create;
Cone25 := TConeNode.Create;
Cone25.BottomRadius := 0.05;
Cone25.Height := 0.1;
{ .SetGeometry }
Shape24.Geometry := Cone25;
Appearance26 := TAppearanceNode.Create;
Appearance26 := Appearance21;
{ .SetAppearance }
Shape24.Appearance := Appearance26;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Group18.AddChildren([Transform23]);
{ .AddChildren }
Group17.AddChildren([Group18]);
Transform27 := TTransformNode.Create;
Transform27.Translation := Vector3(0,1.08,0);
Billboard28 := TBillboardNode.Create;
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Material31.DiffuseColor := Vector3(1,1,0.3);
Material31.EmissiveColor := Vector3(0.33,0.33,0.1);
{ .SetMaterial }
Appearance30.Material := Material31;
{ .SetAppearance }
Shape29.Appearance := Appearance30;
Text32 := TTextNode.Create;
Text32.SetText(['Y']);
FontStyle33 := TFontStyleNode.Create;
FontStyle33.Family := ffSans;
FontStyle33.Justify := fjMiddle;
FontStyle33.JustifyMinor := fjMiddle;
FontStyle33.Size := 0.2;
{ .SetFontStyle }
Text32.FontStyle := FontStyle33;
{ .SetGeometry }
Shape29.Geometry := Text32;
{ .AddChildren }
Billboard28.AddChildren([Shape29]);
{ .AddChildren }
Transform27.AddChildren([Billboard28]);
{ .AddChildren }
Group17.AddChildren([Transform27]);
{ .SetProxy }
Collision16.Proxy := Group17;
Transform34 := TTransformNode.Create;
Transform34.Rotation := Vector4(0,0,1,-1.57079);
{ Horizontal X arrow and label }
Group35 := TGroupNode.Create;
Group36 := TGroupNode.Create;
Shape37 := TShapeNode.Create;
Cylinder38 := TCylinderNode.Create;
Cylinder38 := Cylinder20;
{ .SetGeometry }
Shape37.Geometry := Cylinder38;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40.DiffuseColor := Vector3(0.7,0.1,0.1);
Material40.EmissiveColor := Vector3(0.33,0,0);
{ .SetMaterial }
Appearance39.Material := Material40;
{ .SetAppearance }
Shape37.Appearance := Appearance39;
{ .AddChildren }
Group36.AddChildren([Shape37]);
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(0,1,0);
Shape42 := TShapeNode.Create;
Cone43 := TConeNode.Create;
Cone43 := Cone25;
{ .SetGeometry }
Shape42.Geometry := Cone43;
Appearance44 := TAppearanceNode.Create;
Appearance44 := Appearance39;
{ .SetAppearance }
Shape42.Appearance := Appearance44;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
Group36.AddChildren([Transform41]);
{ .AddChildren }
Group35.AddChildren([Group36]);
Transform45 := TTransformNode.Create;
Transform45.Rotation := Vector4(0,0,1,1.57079);
Transform45.Translation := Vector3(0.072,1.1,0);
{ note label rotated back to original coordinate frame }
Billboard46 := TBillboardNode.Create;
Shape47 := TShapeNode.Create;
Appearance48 := TAppearanceNode.Create;
Appearance48 := Appearance30;
{ .SetAppearance }
Shape47.Appearance := Appearance48;
Text49 := TTextNode.Create;
Text49.SetText(['X']);
FontStyle50 := TFontStyleNode.Create;
FontStyle50 := FontStyle33;
{ .SetFontStyle }
Text49.FontStyle := FontStyle50;
{ .SetGeometry }
Shape47.Geometry := Text49;
{ .AddChildren }
Billboard46.AddChildren([Shape47]);
{ .AddChildren }
Transform45.AddChildren([Billboard46]);
{ .AddChildren }
Group35.AddChildren([Transform45]);
{ .AddChildren }
Transform34.AddChildren([Group35]);
{ .SetProxy }
Collision16.Proxy := Transform34;
Transform51 := TTransformNode.Create;
Transform51.Rotation := Vector4(1,0,0,1.57079);
{ Perpendicular Z arrow and label, note right-hand rule }
Group52 := TGroupNode.Create;
Group53 := TGroupNode.Create;
Shape54 := TShapeNode.Create;
Cylinder55 := TCylinderNode.Create;
Cylinder55 := Cylinder20;
{ .SetGeometry }
Shape54.Geometry := Cylinder55;
Appearance56 := TAppearanceNode.Create;
Material57 := TMaterialNode.Create;
Material57.DiffuseColor := Vector3(0.3,0.3,1);
Material57.EmissiveColor := Vector3(0.1,0.1,0.33);
{ .SetMaterial }
Appearance56.Material := Material57;
{ .SetAppearance }
Shape54.Appearance := Appearance56;
{ .AddChildren }
Group53.AddChildren([Shape54]);
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0,1,0);
Shape59 := TShapeNode.Create;
Cone60 := TConeNode.Create;
Cone60 := Cone25;
{ .SetGeometry }
Shape59.Geometry := Cone60;
Appearance61 := TAppearanceNode.Create;
Appearance61 := Appearance56;
{ .SetAppearance }
Shape59.Appearance := Appearance61;
{ .AddChild }
Transform58.AddChildren([Shape59]);
{ .AddChildren }
Group53.AddChildren([Transform58]);
{ .AddChildren }
Group52.AddChildren([Group53]);
Transform62 := TTransformNode.Create;
Transform62.Rotation := Vector4(1,0,0,-1.57079);
Transform62.Translation := Vector3(0,1.1,0.072);
{ note label rotated back to original coordinate frame }
Billboard63 := TBillboardNode.Create;
Shape64 := TShapeNode.Create;
Appearance65 := TAppearanceNode.Create;
Appearance65 := Appearance30;
{ .SetAppearance }
Shape64.Appearance := Appearance65;
Text66 := TTextNode.Create;
Text66.SetText(['Z']);
FontStyle67 := TFontStyleNode.Create;
FontStyle67 := FontStyle33;
{ .SetFontStyle }
Text66.FontStyle := FontStyle67;
{ .SetGeometry }
Shape64.Geometry := Text66;
{ .AddChildren }
Billboard63.AddChildren([Shape64]);
{ .AddChildren }
Transform62.AddChildren([Billboard63]);
{ .AddChildren }
Group52.AddChildren([Transform62]);
{ .AddChildren }
Transform51.AddChildren([Group52]);
{ .SetProxy }
Collision16.Proxy := Transform51;
{ .AddChildren }
Group14.AddChildren([Collision16]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;
