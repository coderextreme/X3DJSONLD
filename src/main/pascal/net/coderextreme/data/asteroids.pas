unit asteroids;

interface

uses X3DNodes;

function Createasteroids: TX3DRootNode;

implementation

uses CastleVectors;

function Createasteroids: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
X3DPrototype8: TX3DPrototype;
X3DInterfaceDeclaration9: TX3DInterfaceDeclaration;
X3DField10: TX3DField;
Shape11: TShapeNode;
Sphere12: TSphereNode;
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
IS15: TIS;
connect16: Tconnect;
X3DPrototype17: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'asteroids.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d';
X3D0.Meta['description'] := 'asteroids';
Group7 := TGroupNode.Create;
X3DPrototype8 := TX3DPrototype.Create;
X3DPrototype8.NameField := 'anyShape';
X3DInterfaceDeclaration9 := TX3DInterfaceDeclaration.Create(nil);
X3DField10 := TX3DField.Create;
X3DField10.NameField := 'myShape';
X3DField10.AccessType := 'inputOutput';
X3DField10.Type := 'MFNode';
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
{ .SetGeometry }
Shape11.Geometry := Sphere12;
{ .SetShape }
X3DField10.Shape := Shape11;
{ .SetX3DField }
X3DInterfaceDeclaration9.X3DField := X3DField10;
{ .SetX3DInterfaceDeclaration }
X3DPrototype8.X3DInterfaceDeclaration := X3DInterfaceDeclaration9;
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'children';
connect16.ProtoField := 'myShape';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
{ .SetTransform }
X3DPrototype13.Transform := Transform14;
{ .AddX3DPrototype }
X3DPrototype8.X3DPrototype := X3DPrototype13;
{ .SetX3DPrototype }
Group7.X3DPrototype := X3DPrototype8;
X3DPrototype17 := TX3DPrototypeNode.Create;
X3DPrototype17.NameField := 'anyShape';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype17;
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
