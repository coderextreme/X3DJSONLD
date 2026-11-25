unit IFS;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateIFS: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group11: TGroupNode;
  Group12: TGroupNode;
  Transform13: TTransformNode;
  Shape14: TShapeNode;
  IndexedFaceSet15: TIndexedFaceSetNode;
  ColorRGBA16: TColorRGBANode;
  Coordinate17: TCoordinateNode;
  Appearance18: TAppearanceNode;
  Material19: TMaterialNode;
  NavigationInfo20: TNavigationInfoNode;
  Viewpoint21: TViewpointNode;

procedure InitIFSPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'IFS.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d';
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
X3D0.Meta['generator'] := 'h2.pl';
X3D0.Meta['modified'] := '18 Jan 2023';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '9 November 2020';
X3D0.Meta['license'] := '../license.html';
Group11 := TGroupNode.Create;
Group12 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform13 := TTransformNode.Create;
Transform13.Translation := Vector3(0, 2.1, 0);
Shape14 := TShapeNode.Create;
Shape14.X3DName := 'HAnimSiteShape';
IndexedFaceSet15 := TIndexedFaceSetNode.Create;
IndexedFaceSet15.X3DName := 'DiamondIFS';
IndexedFaceSet15.CreaseAngle := 0.5;
IndexedFaceSet15.Solid := False;
IndexedFaceSet15.SetCoordIndex([0, 1, 2, -1, 0, 2, 3, -1, 0, 3, 4, -1, 0, 4, 1, -1, 5, 2, 1, -1, 5, 3, 2, -1, 5, 4, 3, -1, 5, 1, 4, -1]);
ColorRGBA16 := TColorRGBANode.Create;
ColorRGBA16.X3DName := 'HAnimSiteColorRGBA';
ColorRGBA16.SetColor([Vector4(1, 1, 0, 1), Vector4(1, 1, 0, 0.1)]);
IndexedFaceSet15.Color := ColorRGBA16;
Coordinate17 := TCoordinateNode.Create;
Coordinate17.SetPoint([Vector3(0, 0.01, 0), Vector3(-0.01, 0, 0), Vector3(0, 0, 0.01), Vector3(0.01, 0, 0), Vector3(0, 0, -0.01), Vector3(0, -0.01, 0)]);
IndexedFaceSet15.Coord := Coordinate17;
Shape14.Geometry := IndexedFaceSet15;
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
Material19.DiffuseColor := Vector3(1, 1, 0);
Material19.Transparency := 0.3;
Appearance18.Material := Material19;
Shape14.Appearance := Appearance18;
Transform13.FdChildren.Add(Shape14);
end;

procedure InitIFSPart1;
begin
Group12.FdChildren.Add(Transform13);
Group11.FdChildren.Add(Group12);
NavigationInfo20 := TNavigationInfoNode.Create;
NavigationInfo20.Speed := 1.5;
Group11.FdChildren.Add(NavigationInfo20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'default';
Group11.FdChildren.Add(Viewpoint21);
X3D0.AddChildren([Group11]);
end;

function CreateIFS: TX3DRootNode;
begin
  InitIFSPart0;
  InitIFSPart1;
  Result := X3D0;
end;

begin
end.
