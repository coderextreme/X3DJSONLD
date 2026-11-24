unit asmallbox;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createasmallbox: TX3DRootNode;

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
X3DPrototype16: TX3DPrototype;
X3DInterfaceDeclaration17: TX3DInterfaceDeclaration;
MFNode18: TMFNode;
Shape19: TShapeNode;
Cylinder20: TCylinderNode;
X3DPrototype21: TX3DPrototype;
Transform22: TTransformNode;
X3DPrototype23: TX3DPrototypeNode;
X3DPrototype25: TX3DPrototypeNode;
MFNode26: TMFNode;
Shape27: TShapeNode;
Box28: TBoxNode;

procedure InitasmallboxPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'asmallbox.x3d';
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
Group7 := TGroupNode.Create;;
X3DPrototype8 := TX3DPrototype.Create;;
X3DInterfaceDeclaration9 := TX3DInterfaceDeclaration.Create(nil);;
MFNode10 := TMFNode.CreateUndefined(X3DInterfaceDeclaration9, false, 'myShape');
Shape11 := TShapeNode.Create;;
Sphere12 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape11.Geometry := Sphere12;
{ METHOD .AddShape }
MFNode10.AddShape([Shape11]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration9.AddMFNode([MFNode10]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype8.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration9]);
X3DPrototype13 := TX3DPrototype.Create;;
Transform14 := TTransformNode.Create;;
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype8.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype8]);
X3DPrototype16 := TX3DPrototype.Create;;
X3DInterfaceDeclaration17 := TX3DInterfaceDeclaration.Create(nil);;
MFNode18 := TMFNode.CreateUndefined(X3DInterfaceDeclaration17, false, 'myShape');
Shape19 := TShapeNode.Create;;
Cylinder20 := TCylinderNode.Create;;
end;

procedure InitasmallboxPart1;
begin

{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape19.Geometry := Cylinder20;
{ METHOD .AddShape }
MFNode18.AddShape([Shape19]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration17.AddMFNode([MFNode18]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype16.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration17]);
X3DPrototype21 := TX3DPrototype.Create;;
Transform22 := TTransformNode.Create;;
X3DPrototype23 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform22.AddX3DPrototype([X3DPrototype23]);
{ METHOD .AddTransform }
X3DPrototype21.AddTransform([Transform22]);
{ METHOD .AddX3DPrototype }
X3DPrototype16.AddX3DPrototype([X3DPrototype21]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype16]);
X3DPrototype25 := TX3DPrototypeNode;
MFNode26 := TMFNode.CreateUndefined(X3DPrototype25, false, 'myShape');
Shape27 := TShapeNode.Create;;
Box28 := TBoxNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape27.Geometry := Box28;
{ METHOD .AddShape }
MFNode26.AddShape([Shape27]);
{ METHOD .AddMFNode }
X3DPrototype25.AddMFNode([MFNode26]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype25]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createasmallbox: TX3DRootNode;
begin
InitasmallboxPart0;
InitasmallboxPart1;
Result := X3D0;
end;

begin
end.
