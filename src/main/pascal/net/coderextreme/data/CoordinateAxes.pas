unit CoordinateAxes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateCoordinateAxes: TX3DRootNode;

implementation

uses CastleVectors;

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

procedure InitCoordinateAxesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'CoordinateAxes.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman, Byounghyun Yoo';
{ METHOD .Meta }
X3D0.Meta['created'] := '14 July 2000';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['description'] := 'X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame.';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;;
WorldInfo15 := TWorldInfoNode.Create;;
WorldInfo15.Title := 'CoordinateAxes.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
Collision16 := TCollisionNode.Create;;
{ Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. }
{ This NavigationInfo allows examine mode and will be overridden by any parent scene. }
{ Each arrow goes from +1m to -1m to allow linear scaling to fit a scene }
{ Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user }
Group17 := TGroupNode.Create;;
{ Vertical Y arrow and label }
Group18 := TGroupNode.Create;;
Shape19 := TShapeNode.Create;;
Cylinder20 := TCylinderNode.Create;;
Cylinder20.Radius := 0.025;
Cylinder20.Top := False;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape19.Geometry := Cylinder20;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(0.1,0.6,0.1);
end;

procedure InitCoordinateAxesPart1;
begin

Material22.EmissiveColor := Vector3(0.05,0.2,0.05);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape19.Appearance := Appearance21;
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Shape19);
Transform23 := TTransformNode.Create;;
Transform23.Translation := Vector3(0,1,0);
Shape24 := TShapeNode.Create;;
Cone25 := TConeNode.Create;;
Cone25.BottomRadius := 0.05;
Cone25.Height := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape24.Geometry := Cone25;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape24.Appearance := Appearance21;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Group18.FdChildren.Add(Transform23);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Group18);
Transform27 := TTransformNode.Create;;
Transform27.Translation := Vector3(0,1.08,0);
Billboard28 := TBillboardNode.Create;;
Shape29 := TShapeNode.Create;;
Appearance30 := TAppearanceNode.Create;;
Material31 := TMaterialNode.Create;;
Material31.DiffuseColor := Vector3(1,1,0.3);
Material31.EmissiveColor := Vector3(0.33,0.33,0.1);
{ METHOD .SetMaterial }
Appearance30.Material := Material31;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape29.Appearance := Appearance30;
Text32 := TTextNode.Create;;
Text32.SetText(['Y']);
FontStyle33 := TFontStyleNode.Create;;
FontStyle33.Family := ffSANS;
FontStyle33.Justify := fjMIDDLE;
end;

procedure InitCoordinateAxesPart2;
begin

FontStyle33.JustifyMinor := fjMIDDLE;
FontStyle33.Size := 0.2;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text32.FontStyle := FontStyle33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape29.Geometry := Text32;
{ METHOD .FdChildren.Add }
Billboard28.FdChildren.Add(Shape29);
{ METHOD .FdChildren.Add }
Transform27.FdChildren.Add(Billboard28);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Transform27);
{ METHOD .Proxy }
{ METHOD.SET .Proxy }
Collision16.Proxy := Group17;
Transform34 := TTransformNode.Create;;
Transform34.Rotation := Vector4(0,0,1,-1.57079);
{ Horizontal X arrow and label }
Group35 := TGroupNode.Create;;
Group36 := TGroupNode.Create;;
Shape37 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape37.Geometry := Cylinder20;
Appearance39 := TAppearanceNode.Create;;
Material40 := TMaterialNode.Create;;
Material40.DiffuseColor := Vector3(0.7,0.1,0.1);
Material40.EmissiveColor := Vector3(0.33,0,0);
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape37.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Shape37);
Transform41 := TTransformNode.Create;;
Transform41.Translation := Vector3(0,1,0);
Shape42 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape42.Geometry := Cone25;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape42.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Shape42);
{ METHOD .FdChildren.Add }
Group36.FdChildren.Add(Transform41);
{ METHOD .FdChildren.Add }
Group35.FdChildren.Add(Group36);
Transform45 := TTransformNode.Create;;
Transform45.Rotation := Vector4(0,0,1,1.57079);
end;

procedure InitCoordinateAxesPart3;
begin

Transform45.Translation := Vector3(0.072,1.1,0);
{ note label rotated back to original coordinate frame }
Billboard46 := TBillboardNode.Create;;
Shape47 := TShapeNode.Create;;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape47.Appearance := Appearance30;
Text49 := TTextNode.Create;;
Text49.SetText(['X']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text49.FontStyle := FontStyle33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape47.Geometry := Text49;
{ METHOD .FdChildren.Add }
Billboard46.FdChildren.Add(Shape47);
{ METHOD .FdChildren.Add }
Transform45.FdChildren.Add(Billboard46);
{ METHOD .FdChildren.Add }
Group35.FdChildren.Add(Transform45);
{ METHOD .FdChildren.Add }
Transform34.FdChildren.Add(Group35);
{ METHOD .Proxy }
{ METHOD.SET .Proxy }
Collision16.Proxy := Transform34;
Transform51 := TTransformNode.Create;;
Transform51.Rotation := Vector4(1,0,0,1.57079);
{ Perpendicular Z arrow and label, note right-hand rule }
Group52 := TGroupNode.Create;;
Group53 := TGroupNode.Create;;
Shape54 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape54.Geometry := Cylinder20;
Appearance56 := TAppearanceNode.Create;;
Material57 := TMaterialNode.Create;;
Material57.DiffuseColor := Vector3(0.3,0.3,1);
Material57.EmissiveColor := Vector3(0.1,0.1,0.33);
{ METHOD .SetMaterial }
Appearance56.Material := Material57;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape54.Appearance := Appearance56;
{ METHOD .FdChildren.Add }
Group53.FdChildren.Add(Shape54);
Transform58 := TTransformNode.Create;;
Transform58.Translation := Vector3(0,1,0);
Shape59 := TShapeNode.Create;;
end;

procedure InitCoordinateAxesPart4;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape59.Geometry := Cone25;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape59.Appearance := Appearance56;
{ METHOD .FdChildren.Add }
Transform58.FdChildren.Add(Shape59);
{ METHOD .FdChildren.Add }
Group53.FdChildren.Add(Transform58);
{ METHOD .FdChildren.Add }
Group52.FdChildren.Add(Group53);
Transform62 := TTransformNode.Create;;
Transform62.Rotation := Vector4(1,0,0,-1.57079);
Transform62.Translation := Vector3(0,1.1,0.072);
{ note label rotated back to original coordinate frame }
Billboard63 := TBillboardNode.Create;;
Shape64 := TShapeNode.Create;;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape64.Appearance := Appearance30;
Text66 := TTextNode.Create;;
Text66.SetText(['Z']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text66.FontStyle := FontStyle33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape64.Geometry := Text66;
{ METHOD .FdChildren.Add }
Billboard63.FdChildren.Add(Shape64);
{ METHOD .FdChildren.Add }
Transform62.FdChildren.Add(Billboard63);
{ METHOD .FdChildren.Add }
Group52.FdChildren.Add(Transform62);
{ METHOD .FdChildren.Add }
Transform51.FdChildren.Add(Group52);
{ METHOD .Proxy }
{ METHOD.SET .Proxy }
Collision16.Proxy := Transform51;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Collision16);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function CreateCoordinateAxes: TX3DRootNode;
begin
InitCoordinateAxesPart0;
InitCoordinateAxesPart1;
InitCoordinateAxesPart2;
InitCoordinateAxesPart3;
InitCoordinateAxesPart4;
Result := X3D0;
end;

begin
end.
