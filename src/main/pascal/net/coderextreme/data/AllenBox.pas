unit AllenBox;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateAllenBox: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group6: TGroupNode;
  WorldInfo7: TWorldInfoNode;
  NavigationInfo8: TNavigationInfoNode;
  Transform9: TTransformNode;
  Shape10: TShapeNode;
  Box11: TBoxNode;
  Appearance12: TAppearanceNode;
  Material13: TMaterialNode;

procedure InitAllenBoxPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'AllenBox.x3d';
X3D0.Meta['creator'] := 'Allen Box';
X3D0.Meta['created'] := '8 July 2025';
X3D0.Meta['license'] := '../license.html';
Group6 := TGroupNode.Create;
WorldInfo7 := TWorldInfoNode.Create;
WorldInfo7.Title := 'AllenBox.x3d';
Group6.FdChildren.Add(WorldInfo7);
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetAvatarSize([0.15, 1.53, 0.75]);
NavigationInfo8.Speed := 0.5;
NavigationInfo8.SetType(['EXAMINE']);
Group6.FdChildren.Add(NavigationInfo8);
Transform9 := TTransformNode.Create;
Transform9.X3DName := 'Floor';
Transform9.Scale := Vector3(1, 0.0125, 1);
Transform9.Translation := Vector3(0, -0.0125, 0);
Shape10 := TShapeNode.Create;
Box11 := TBoxNode.Create;
Shape10.Geometry := Box11;
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
Appearance12.Material := Material13;
Shape10.Appearance := Appearance12;
Transform9.FdChildren.Add(Shape10);
Group6.FdChildren.Add(Transform9);
X3D0.AddChildren([Group6]);
end;

function CreateAllenBox: TX3DRootNode;
begin
  InitAllenBoxPart0;
  Result := X3D0;
end;

begin
end.
