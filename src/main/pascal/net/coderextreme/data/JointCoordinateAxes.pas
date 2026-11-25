unit JointCoordinateAxes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateJointCoordinateAxes: TX3DRootNode;

implementation

uses CastleVectors;

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
  Cone15: TConeNode;
  Transform16: TTransformNode;
  Transform18: TTransformNode;
  Billboard19: TBillboardNode;
  Shape20: TShapeNode;
  Appearance21: TAppearanceNode;
  Material22: TMaterialNode;
  Text23: TTextNode;
  FontStyle24: TFontStyleNode;
  Transform25: TTransformNode;
  Group26: TGroupNode;
  Transform28: TTransformNode;
  Billboard29: TBillboardNode;
  Shape30: TShapeNode;
  Text32: TTextNode;
  Transform34: TTransformNode;
  Group35: TGroupNode;
  Transform37: TTransformNode;
  Billboard38: TBillboardNode;
  Shape39: TShapeNode;
  Text41: TTextNode;

procedure InitJointCoordinateAxesPart0;
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
Group4.FdChildren.Add(NavigationInfo5);
Group6 := TGroupNode.Create;
Group7 := TGroupNode.Create;
Group7.X3DName := 'ARROW';
Shape8 := TShapeNode.Create;
Appearance9 := TAppearanceNode.Create;
Appearance9.X3DName := 'ARROW_APPEARANCE';
Material10 := TMaterialNode.Create;
Material10.DiffuseColor := Vector3(0.3, 0.3, 1);
Material10.EmissiveColor := Vector3(0.3, 0.3, 0.33);
Appearance9.Material := Material10;
Shape8.Appearance := Appearance9;
Cylinder11 := TCylinderNode.Create;
Cylinder11.Top := False;
Cylinder11.Bottom := False;
Cylinder11.Radius := 0.025;
Shape8.Geometry := Cylinder11;
Group7.FdChildren.Add(Shape8);
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0, 1, 0);
Shape13 := TShapeNode.Create;
Shape13.X3DName := 'ARROW_POINTER';
Shape13.Appearance := Appearance9;
Cone15 := TConeNode.Create;
Cone15.Height := 0.1;
Cone15.BottomRadius := 0.05;
Shape13.Geometry := Cone15;
Transform12.FdChildren.Add(Shape13);
Group7.FdChildren.Add(Transform12);
Transform16 := TTransformNode.Create;
Transform16.Translation := Vector3(0, -1, 0);
end;

procedure InitJointCoordinateAxesPart1;
begin
Transform16.Rotation := Vector4(1, 0, 0, 3.1416);
Transform16.FdChildren.Add(Shape13);
Group7.FdChildren.Add(Transform16);
Group6.FdChildren.Add(Group7);
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0, 1.08, 0);
Billboard19 := TBillboardNode.Create;
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Appearance21.X3DName := 'LABEL_APPEARANCE';
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(1, 1, 0.3);
Material22.EmissiveColor := Vector3(0.33, 0.33, 0.1);
Appearance21.Material := Material22;
Shape20.Appearance := Appearance21;
Text23 := TTextNode.Create;
Text23.SetText(['Y']);
FontStyle24 := TFontStyleNode.Create;
FontStyle24.X3DName := 'LABEL_FONT';
FontStyle24.Family := ffSans;
FontStyle24.Size := 0.2;
FontStyle24.Justify := fjMiddle;
Text23.FontStyle := FontStyle24;
Shape20.Geometry := Text23;
Billboard19.FdChildren.Add(Shape20);
Transform18.FdChildren.Add(Billboard19);
Group6.FdChildren.Add(Transform18);
Group4.FdChildren.Add(Group6);
Transform25 := TTransformNode.Create;
Transform25.Rotation := Vector4(0, 0, 1, -1.5708);
Group26 := TGroupNode.Create;
Group26.FdChildren.Add(Group7);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(0.072, 1.1, 0);
Transform28.Rotation := Vector4(0, 0, 1, 1.5708);
Billboard29 := TBillboardNode.Create;
Shape30 := TShapeNode.Create;
Shape30.Appearance := Appearance21;
Text32 := TTextNode.Create;
Text32.SetText(['X']);
end;

procedure InitJointCoordinateAxesPart2;
begin
Text32.FontStyle := FontStyle24;
Shape30.Geometry := Text32;
Billboard29.FdChildren.Add(Shape30);
Transform28.FdChildren.Add(Billboard29);
Group26.FdChildren.Add(Transform28);
Transform25.FdChildren.Add(Group26);
Group4.FdChildren.Add(Transform25);
Transform34 := TTransformNode.Create;
Transform34.Rotation := Vector4(1, 0, 0, 1.5708);
Group35 := TGroupNode.Create;
Group35.FdChildren.Add(Group7);
Transform37 := TTransformNode.Create;
Transform37.Translation := Vector3(0, 1.1, 0.072);
Transform37.Rotation := Vector4(1, 0, 0, -1.5708);
Billboard38 := TBillboardNode.Create;
Shape39 := TShapeNode.Create;
Shape39.Appearance := Appearance21;
Text41 := TTextNode.Create;
Text41.SetText(['Z']);
Text41.FontStyle := FontStyle24;
Shape39.Geometry := Text41;
Billboard38.FdChildren.Add(Shape39);
Transform37.FdChildren.Add(Billboard38);
Group35.FdChildren.Add(Transform37);
Transform34.FdChildren.Add(Group35);
Group4.FdChildren.Add(Transform34);
X3D0.AddChildren([Group4]);
end;

function CreateJointCoordinateAxes: TX3DRootNode;
begin
  InitJointCoordinateAxesPart0;
  InitJointCoordinateAxesPart1;
  InitJointCoordinateAxesPart2;
  Result := X3D0;
end;

begin
end.
