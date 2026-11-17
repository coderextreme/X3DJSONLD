unit abox;

interface

uses X3DNodes;

function Createabox: TX3DRootNode;

implementation

uses CastleVectors;

function Createabox: TX3DRootNode;
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
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
X3DField19: TX3DField;
Shape20: TShapeNode;
Cylinder21: TCylinderNode;
X3DPrototype22: TX3DPrototype;
Transform23: TTransformNode;
X3DPrototype24: TX3DPrototypeNode;
IS25: TIS;
connect26: Tconnect;
X3DPrototype27: TX3DPrototypeNode;
MFNode28: TMFNode;
Shape29: TShapeNode;
Box30: TBoxNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'abox.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d';
X3D0.Meta['description'] := 'a box';
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
X3DPrototype17 := TX3DPrototype.Create;
X3DPrototype17.NameField := 'one';
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'myShape';
X3DField19.AccessType := 'inputOutput';
X3DField19.Type := 'MFNode';
Shape20 := TShapeNode.Create;
Cylinder21 := TCylinderNode.Create;
{ .SetGeometry }
Shape20.Geometry := Cylinder21;
{ .SetShape }
X3DField19.Shape := Shape20;
{ .SetX3DField }
X3DInterfaceDeclaration18.X3DField := X3DField19;
{ .SetX3DInterfaceDeclaration }
X3DPrototype17.X3DInterfaceDeclaration := X3DInterfaceDeclaration18;
X3DPrototype22 := TX3DPrototype.Create;
Transform23 := TTransformNode.Create;
X3DPrototype24 := TX3DPrototypeNode.Create;
X3DPrototype24.NameField := 'anyShape';
IS25 := TIS.Create;
connect26 := Tconnect.Create;
connect26.NodeField := 'myShape';
connect26.ProtoField := 'myShape';
{ .AddConnect }
IS25.Connect := connect26;
{ .SetIS }
X3DPrototype24.IS := IS25;
{ .SetX3DPrototype }
Transform23.X3DPrototype := X3DPrototype24;
{ .SetTransform }
X3DPrototype22.Transform := Transform23;
{ .AddX3DPrototype }
X3DPrototype17.X3DPrototype := X3DPrototype22;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype17;
X3DPrototype27 := TX3DPrototypeNode.Create;
X3DPrototype27.NameField := 'one';
MFNode28 := TMFNode.Create;
MFNode28.NameField := 'myShape';
Shape29 := TShapeNode.Create;
Box30 := TBoxNode.Create;
Box30.Size := Vector3(140,140,140);
{ .SetGeometry }
Shape29.Geometry := Box30;
{ .SetShape }
MFNode28.Shape := Shape29;
{ .SetMFNode }
X3DPrototype27.MFNode := MFNode28;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype27;
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
