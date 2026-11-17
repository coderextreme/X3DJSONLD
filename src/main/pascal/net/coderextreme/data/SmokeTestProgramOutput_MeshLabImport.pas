unit SmokeTestProgramOutput_MeshLabImport;

interface

uses X3DNodes;

function CreateSmokeTestProgramOutput_MeshLabImport: TX3DRootNode;

implementation

uses CastleVectors;

function CreateSmokeTestProgramOutput_MeshLabImport: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group6: TGroupNode;
Shape7: TShapeNode;
IndexedFaceSet8: TIndexedFaceSetNode;
Coordinate9: TCoordinateNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 1;
X3D0.Meta['title'] := 'CleatClamp.MeshLab.x3d';
X3D0.Meta['description'] := 'Generated from Meshlab X3D Exported';
X3D0.Meta['created'] := '9 June 2021';
X3D0.Meta['generator'] := 'Meshlab X3D Exported, http://meshlab.sourceforge.net';
Group6 := TGroupNode.Create;
Shape7 := TShapeNode.Create;
IndexedFaceSet8 := TIndexedFaceSetNode.Create;
IndexedFaceSet8.Solid := False;
Coordinate9 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet8.Coord := Coordinate9;
{ .SetGeometry }
Shape7.Geometry := IndexedFaceSet8;
{ .AddChildren }
Group6.AddChildren([Shape7]);
{ .AddGroup }
X3D0.AddChildren([Group6]);
Result := X3D0;
end;

begin
end.
