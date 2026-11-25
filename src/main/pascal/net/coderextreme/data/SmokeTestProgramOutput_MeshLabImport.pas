unit SmokeTestProgramOutput_MeshLabImport;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateSmokeTestProgramOutput_MeshLabImport: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group6: TGroupNode;
  Shape7: TShapeNode;
  IndexedFaceSet8: TIndexedFaceSetNode;
  Coordinate9: TCoordinateNode;

procedure InitSmokeTestProgramOutput_MeshLabImportPart0;
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
IndexedFaceSet8.Coord := Coordinate9;
Shape7.Geometry := IndexedFaceSet8;
Group6.FdChildren.Add(Shape7);
X3D0.AddChildren([Group6]);
end;

function CreateSmokeTestProgramOutput_MeshLabImport: TX3DRootNode;
begin
  InitSmokeTestProgramOutput_MeshLabImportPart0;
  Result := X3D0;
end;

begin
end.
