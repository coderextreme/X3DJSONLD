unit abox;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createabox: TX3DRootNode;

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
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
MFNode19: TMFNode;
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

procedure InitaboxPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'abox.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a box';
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
X3DPrototype17 := TX3DPrototype.Create;
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
MFNode19 := TMFNode.CreateUndefined(X3DInterfaceDeclaration18, false, 'myShape');
Shape20 := TShapeNode.Create;
Cylinder21 := TCylinderNode.Create;
{ METHOD .Geometry }
Shape20.Geometry := Cylinder21;
{ METHOD .AddShape }
MFNode19.AddShape([Shape20]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration18.AddMFNode([MFNode19]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype17.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration18]);
X3DPrototype22 := TX3DPrototype.Create;
end;

procedure InitaboxPart1;
begin

Transform23 := TTransformNode.Create;
X3DPrototype24 := TX3DPrototypeNode.Create;
IS25 := TIS.Create;
connect26 := Tconnect.Create;
connect26.NodeField := 'myShape';
connect26.ProtoField := 'myShape';
{ METHOD .Connect }
IS25.Connect := connect26;
{ METHOD .SetIS }
X3DPrototype24.IS := IS25;
{ METHOD .AddX3DPrototype }
Transform23.AddX3DPrototype([X3DPrototype24]);
{ METHOD .AddTransform }
X3DPrototype22.AddTransform([Transform23]);
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype22]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype17]);
X3DPrototype27 := TX3DPrototypeNode.Create;
MFNode28 := TMFNode.CreateUndefined(X3DPrototype27, false, 'myShape');
Shape29 := TShapeNode.Create;
Box30 := TBoxNode.Create;
Box30.Size := Vector3(140,140,140);
{ METHOD .Geometry }
Shape29.Geometry := Box30;
{ METHOD .AddShape }
MFNode28.AddShape([Shape29]);
{ METHOD .AddMFNode }
X3DPrototype27.AddMFNode([MFNode28]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype27]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createabox: TX3DRootNode;
begin
InitaboxPart0;
InitaboxPart1;
Result := X3D0;
end;

begin
end.
