unit ThreeInARow;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateThreeInARow: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  NavigationInfo8: TNavigationInfoNode;
  Viewpoint9: TViewpointNode;
  Transform10: TTransformNode;
  Shape11: TShapeNode;
  Sphere12: TSphereNode;
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  Transform15: TTransformNode;
  Transform17: TTransformNode;

procedure InitThreeInARowPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ThreeInARow.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d';
X3D0.Meta['description'] := '3 boxes';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Cubes';
Viewpoint9.Position := Vector3(0, 0, 12);
Group7.FdChildren.Add(Viewpoint9);
Transform10 := TTransformNode.Create;
Transform10.X3DName := 'first';
Transform10.Translation := Vector3(0, 2, 0);
Shape11 := TShapeNode.Create;
Shape11.X3DName := 'ball';
Sphere12 := TSphereNode.Create;
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1, 1, 1);
Appearance13.Material := Material14;
Shape11.Appearance := Appearance13;
Transform10.FdChildren.Add(Shape11);
Group7.FdChildren.Add(Transform10);
Transform15 := TTransformNode.Create;
Transform15.FdChildren.Add(Shape11);
Group7.FdChildren.Add(Transform15);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(0, -2, 0);
Transform17.FdChildren.Add(Shape11);
Group7.FdChildren.Add(Transform17);
X3D0.AddChildren([Group7]);
end;

function CreateThreeInARow: TX3DRootNode;
begin
  InitThreeInARowPart0;
  Result := X3D0;
end;

begin
end.
