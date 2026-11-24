unit ifscubeworks;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createifscubeworks: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group9: TGroupNode;
WorldInfo10: TWorldInfoNode;
Group11: TGroupNode;
Shape12: TShapeNode;
IndexedFaceSet13: TIndexedFaceSetNode;
Coordinate14: TCoordinateNode;
Normal15: TNormalNode;
Color16: TColorNode;

procedure InitifscubeworksPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ifscubeworks.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Template for an Indexed Face Set';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '4 April 2017';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group9 := TGroupNode.Create;;
WorldInfo10 := TWorldInfoNode.Create;;
WorldInfo10.Title := 'ifscubeworks.x3d';
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(WorldInfo10);
Group11 := TGroupNode.Create;;
Shape12 := TShapeNode.Create;;
IndexedFaceSet13 := TIndexedFaceSetNode.Create;;
IndexedFaceSet13.SetCoordIndex([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet13.SetNormalIndex([0,0,1,2,3,4,5]);
IndexedFaceSet13.NormalPerVertex := False;
IndexedFaceSet13.SetColorIndex([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
Coordinate14 := TCoordinateNode.Create;;
Coordinate14.SetPoint([Vector3(0,0,1),Vector3(0,1,1),Vector3(1,1,1),Vector3(1,0,1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet13.Coord := Coordinate14;
Normal15 := TNormalNode.Create;;
Normal15.SetVector([Vector3(1,0,0),Vector3(-1,0,0),Vector3(0,1,0),Vector3(0,0,-1),Vector3(0,-1,0),Vector3(0,0,1)]);
{ METHOD .Normal }
{ METHOD.SET .Normal }
IndexedFaceSet13.Normal := Normal15;
Color16 := TColorNode.Create;;
Color16.SetColor([Vector3(0,1,0)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet13.Color := Color16;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape12.Geometry := IndexedFaceSet13;
end;

procedure InitifscubeworksPart1;
begin

{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Group11);
{ METHOD .AddGroup }
X3D0.AddChildren([Group9]);
end;

function Createifscubeworks: TX3DRootNode;
begin
InitifscubeworksPart0;
InitifscubeworksPart1;
Result := X3D0;
end;

begin
end.
