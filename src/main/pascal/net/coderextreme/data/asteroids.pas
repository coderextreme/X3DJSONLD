unit asteroids;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createasteroids: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
X3DPrototype8: TX3DPrototype;
X3DInterfaceDeclaration9: TX3DInterfaceDeclaration;
MFNode10: TMFNode;
Shape11: TShapeNode;
Sphere12: TSphereNode;
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
IS15: TIS;
connect16: Tconnect;
X3DPrototype17: TX3DPrototypeNode;

procedure InitasteroidsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'asteroids.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'asteroids';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
X3DPrototype8 := TX3DPrototype.Create;
X3DInterfaceDeclaration9 := TX3DInterfaceDeclaration.Create(nil);
MFNode10 := TMFNode.CreateUndefined(X3DInterfaceDeclaration9, false, 'myShape');
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
{ METHOD .Geometry }
Shape11.Geometry := Sphere12;
{ METHOD .AddShape }
MFNode10.AddShape([Shape11]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration9.AddMFNode([MFNode10]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype8.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration9]);
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'children';
connect16.ProtoField := 'myShape';
{ METHOD .Connect }
IS15.Connect := connect16;
{ METHOD .IS }
Transform14.IS := IS15;
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype8.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype8]);
X3DPrototype17 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype17]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createasteroids: TX3DRootNode;
begin
InitasteroidsPart0;
Result := X3D0;
end;

begin
end.
