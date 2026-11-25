unit GridXZ_20x20Fixed;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateGridXZ_20x20Fixed: TX3DRootNode;

implementation

uses CastleVectors;

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
  Transform36: TTransformNode;
  Billboard37: TBillboardNode;
  Shape38: TShapeNode;
  Text39: TTextNode;
  Transform42: TTransformNode;
  Billboard43: TBillboardNode;
  Shape44: TShapeNode;
  Text45: TTextNode;
  Transform48: TTransformNode;
  Billboard49: TBillboardNode;
  Shape50: TShapeNode;
  Text51: TTextNode;

procedure InitGridXZ_20x20FixedPart0;
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
Group12.FdChildren.Add(WorldInfo13);
Viewpoint14 := TViewpointNode.Create;
Viewpoint14.Description := 'XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)';
Viewpoint14.Orientation := Vector4(1, 0, 0, -0.4);
Viewpoint14.Position := Vector3(0, 10, 25);
Group12.FdChildren.Add(Viewpoint14);
Transform15 := TTransformNode.Create;
Transform15.X3DName := 'GridLocation';
Group16 := TGroupNode.Create;
Shape17 := TShapeNode.Create;
Shape17.X3DName := 'LinesAlignedAlongZ';
IndexedLineSet18 := TIndexedLineSetNode.Create;
IndexedLineSet18.SetColorIndex([1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1]);
IndexedLineSet18.ColorPerVertex := False;
IndexedLineSet18.SetCoordIndex([1, 22, -1, 2, 23, -1, 3, 24, -1, 4, 25, -1, 5, 26, -1, 6, 27, -1, 7, 28, -1, 8, 29, -1, 9, 30, -1, 10, 31, -1, 11, 32, -1, 12, 33, -1, 13, 34, -1, 14, 35, -1, 15, 36, -1, 16, 37, -1, 17, 38, -1, 18, 39, -1, 19, 40, -1, 20, 41, -1, 21, 42, -1]);
Coordinate19 := TCoordinateNode.Create;
Coordinate19.X3DName := 'EndPoints';
Coordinate19.SetPoint([Vector3(0, 0, 0), Vector3(-10, 0, 10), Vector3(-9, 0, 10), Vector3(-8, 0, 10), Vector3(-7, 0, 10), Vector3(-6, 0, 10), Vector3(-5, 0, 10), Vector3(-4, 0, 10), Vector3(-3, 0, 10), Vector3(-2, 0, 10), Vector3(-1, 0, 10), Vector3(0, 0, 10), Vector3(1, 0, 10), Vector3(2, 0, 10), Vector3(3, 0, 10), Vector3(4, 0, 10), Vector3(5, 0, 10), Vector3(6, 0, 10), Vector3(7, 0, 10), Vector3(8, 0, 10), Vector3(9, 0, 10), Vector3(10, 0, 10), Vector3(-10, 0, -10), Vector3(-9, 0, -10), Vector3(-8, 0, -10), Vector3(-7, 0, -10), Vector3(-6, 0, -10), Vector3(-5, 0, -10), Vector3(-4, 0, -10), Vector3(-3, 0, -10), Vector3(-2, 0, -10), Vector3(-1, 0, -10), Vector3(0, 0, -10), Vector3(1, 0, -10), Vector3(2, 0, -10), Vector3(3, 0, -10), Vector3(4, 0, -10), Vector3(5, 0, -10), Vector3(6, 0, -10), Vector3(7, 0, -10), Vector3(8, 0, -10), Vector3(9, 0, -10), Vector3(10, 0, -10)]);
IndexedLineSet18.Coord := Coordinate19;
Color20 := TColorNode.Create;
Color20.SetColor([Vector3(0.4, 0.4, 0.4), Vector3(0.8, 0.2, 0), Vector3(0.4, 0.1, 0.05)]);
IndexedLineSet18.Color := Color20;
Shape17.Geometry := IndexedLineSet18;
end;

procedure InitGridXZ_20x20FixedPart1;
begin
Group16.FdChildren.Add(Shape17);
Transform21 := TTransformNode.Create;
Transform21.X3DName := 'LinesAlignedAlongX';
Transform21.Rotation := Vector4(0, 1, 0, 1.57079);
Transform21.FdChildren.Add(Shape17);
Group16.FdChildren.Add(Transform21);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0, -0.5, 0);
Billboard24 := TBillboardNode.Create;
Shape25 := TShapeNode.Create;
Text26 := TTextNode.Create;
Text26.X3DName := 'CenterTextNode';
Text26.SetText(['origin']);
FontStyle27 := TFontStyleNode.Create;
FontStyle27.X3DName := 'FS4';
FontStyle27.Justify := fjMiddle;
FontStyle27.JustifyMinor := fjMiddle;
FontStyle27.Size := 0.4;
Text26.FontStyle := FontStyle27;
Shape25.Geometry := Text26;
Appearance28 := TAppearanceNode.Create;
Appearance28.X3DName := 'DefaultAppearance';
Material29 := TMaterialNode.Create;
Appearance28.Material := Material29;
Shape25.Appearance := Appearance28;
Billboard24.FdChildren.Add(Shape25);
Transform23.FdChildren.Add(Billboard24);
Group16.FdChildren.Add(Transform23);
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(10, -0.5, 10);
Billboard31 := TBillboardNode.Create;
Shape32 := TShapeNode.Create;
Text33 := TTextNode.Create;
Text33.SetText(['10 0 10']);
Text33.FontStyle := FontStyle27;
Shape32.Geometry := Text33;
Shape32.Appearance := Appearance28;
Billboard31.FdChildren.Add(Shape32);
Transform30.FdChildren.Add(Billboard31);
Group16.FdChildren.Add(Transform30);
end;

procedure InitGridXZ_20x20FixedPart2;
begin
Transform36 := TTransformNode.Create;
Transform36.Translation := Vector3(10, -0.5, -10);
Billboard37 := TBillboardNode.Create;
Shape38 := TShapeNode.Create;
Text39 := TTextNode.Create;
Text39.SetText(['10 0 -10']);
Text39.FontStyle := FontStyle27;
Shape38.Geometry := Text39;
Shape38.Appearance := Appearance28;
Billboard37.FdChildren.Add(Shape38);
Transform36.FdChildren.Add(Billboard37);
Group16.FdChildren.Add(Transform36);
Transform42 := TTransformNode.Create;
Transform42.Translation := Vector3(-10, -0.5, 10);
Billboard43 := TBillboardNode.Create;
Shape44 := TShapeNode.Create;
Text45 := TTextNode.Create;
Text45.SetText(['-10 0 10']);
Text45.FontStyle := FontStyle27;
Shape44.Geometry := Text45;
Shape44.Appearance := Appearance28;
Billboard43.FdChildren.Add(Shape44);
Transform42.FdChildren.Add(Billboard43);
Group16.FdChildren.Add(Transform42);
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(-10, -0.5, -10);
Billboard49 := TBillboardNode.Create;
Shape50 := TShapeNode.Create;
Text51 := TTextNode.Create;
Text51.SetText(['-10 0 -10']);
Text51.FontStyle := FontStyle27;
Shape50.Geometry := Text51;
Shape50.Appearance := Appearance28;
Billboard49.FdChildren.Add(Shape50);
Transform48.FdChildren.Add(Billboard49);
Group16.FdChildren.Add(Transform48);
Transform15.FdChildren.Add(Group16);
Group12.FdChildren.Add(Transform15);
X3D0.AddChildren([Group12]);
end;

function CreateGridXZ_20x20Fixed: TX3DRootNode;
begin
  InitGridXZ_20x20FixedPart0;
  InitGridXZ_20x20FixedPart1;
  InitGridXZ_20x20FixedPart2;
  Result := X3D0;
end;

begin
end.
