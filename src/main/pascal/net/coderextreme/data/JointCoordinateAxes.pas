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

procedure InitJointCoordinateAxesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['converter'] := 'x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy';
{ METHOD .Meta }
X3D0.Meta['converted'] := 'Mon, 31 Jul 2023 03:48:04 GMT';
{ METHOD .Meta }
{ METHOD .Head }
Group4 := TGroupNode.Create;;
NavigationInfo5 := TNavigationInfoNode.Create;;
NavigationInfo5.Headlight := False;
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(NavigationInfo5);
Group6 := TGroupNode.Create;;
Group7 := TGroupNode.Create;;
Shape8 := TShapeNode.Create;;
Appearance9 := TAppearanceNode.Create;;
Material10 := TMaterialNode.Create;;
Material10.DiffuseColor := Vector3(0.3,0.3,1);
Material10.EmissiveColor := Vector3(0.3,0.3,0.33);
{ METHOD .SetMaterial }
Appearance9.Material := Material10;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape8.Appearance := Appearance9;
Cylinder11 := TCylinderNode.Create;;
Cylinder11.Top := False;
Cylinder11.Bottom := False;
Cylinder11.Radius := 0.025;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape8.Geometry := Cylinder11;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Shape8);
Transform12 := TTransformNode.Create;;
Transform12.Translation := Vector3(0,1,0);
Shape13 := TShapeNode.Create;;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape13.Appearance := Appearance9;
Cone15 := TConeNode.Create;
end;

procedure InitJointCoordinateAxesPart1;
begin
;
Cone15.Height := 0.1;
Cone15.BottomRadius := 0.05;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape13.Geometry := Cone15;
{ METHOD .FdChildren.Add }
Transform12.FdChildren.Add(Shape13);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform12);
Transform16 := TTransformNode.Create;;
Transform16.Translation := Vector3(0,-1,0);
Transform16.Rotation := Vector4(1,0,0,3.1416);
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape13);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform16);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Group7);
Transform18 := TTransformNode.Create;;
Transform18.Translation := Vector3(0,1.08,0);
Billboard19 := TBillboardNode.Create;;
Shape20 := TShapeNode.Create;;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(1,1,0.3);
Material22.EmissiveColor := Vector3(0.33,0.33,0.1);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance21;
Text23 := TTextNode.Create;;
Text23.SetText(['Y']);
FontStyle24 := TFontStyleNode.Create;;
FontStyle24.Family := ffSANS;
FontStyle24.Size := 0.2;
FontStyle24.Justify := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text23.FontStyle := FontStyle24;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Text23;
{ METHOD .FdChildren.Add }
Billboard19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Billboard19);
end;

procedure InitJointCoordinateAxesPart2;
begin

{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform18);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Group6);
Transform25 := TTransformNode.Create;;
Transform25.Rotation := Vector4(0,0,1,-1.5708);
Group26 := TGroupNode.Create;;
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Group7);
Transform28 := TTransformNode.Create;;
Transform28.Translation := Vector3(0.072,1.1,0);
Transform28.Rotation := Vector4(0,0,1,1.5708);
Billboard29 := TBillboardNode.Create;;
Shape30 := TShapeNode.Create;;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape30.Appearance := Appearance21;
Text32 := TTextNode.Create;;
Text32.SetText(['X']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text32.FontStyle := FontStyle24;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape30.Geometry := Text32;
{ METHOD .FdChildren.Add }
Billboard29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Transform28.FdChildren.Add(Billboard29);
{ METHOD .FdChildren.Add }
Group26.FdChildren.Add(Transform28);
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(Group26);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Transform25);
Transform34 := TTransformNode.Create;;
Transform34.Rotation := Vector4(1,0,0,1.5708);
Group35 := TGroupNode.Create;;
{ METHOD .FdChildren.Add }
Group35.FdChildren.Add(Group7);
Transform37 := TTransformNode.Create;;
Transform37.Translation := Vector3(0,1.1,0.072);
Transform37.Rotation := Vector4(1,0,0,-1.5708);
Billboard38 := TBillboardNode.Create;;
Shape39 := TShapeNode.Create;
end;

procedure InitJointCoordinateAxesPart3;
begin
;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape39.Appearance := Appearance21;
Text41 := TTextNode.Create;;
Text41.SetText(['Z']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text41.FontStyle := FontStyle24;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape39.Geometry := Text41;
{ METHOD .FdChildren.Add }
Billboard38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(Billboard38);
{ METHOD .FdChildren.Add }
Group35.FdChildren.Add(Transform37);
{ METHOD .FdChildren.Add }
Transform34.FdChildren.Add(Group35);
{ METHOD .FdChildren.Add }
Group4.FdChildren.Add(Transform34);
{ METHOD .AddGroup }
X3D0.AddChildren([Group4]);
end;

function CreateJointCoordinateAxes: TX3DRootNode;
begin
InitJointCoordinateAxesPart0;
InitJointCoordinateAxesPart1;
InitJointCoordinateAxesPart2;
InitJointCoordinateAxesPart3;
Result := X3D0;
end;

begin
end.
