unit asphere;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createasphere: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group8: TGroupNode;
Group9: TGroupNode;
Shape10: TShapeNode;
Appearance11: TAppearanceNode;
Material12: TMaterialNode;
Sphere13: TSphereNode;

procedure InitaspherePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'asphere.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a sphere';
{ METHOD .Meta }
{ METHOD .Head }
Group8 := TGroupNode.Create;
Group9 := TGroupNode.Create;
Shape10 := TShapeNode.Create;
Appearance11 := TAppearanceNode.Create;
Material12 := TMaterialNode.Create;
Material12.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance11.Material := Material12;
{ METHOD .Appearance }
Shape10.Appearance := Appearance11;
Sphere13 := TSphereNode.Create;
{ METHOD .Geometry }
Shape10.Geometry := Sphere13;
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Shape10);
{ METHOD .FdChildren.Add }
Group8.FdChildren.Add(Group9);
{ METHOD .AddGroup }
X3D0.AddChildren([Group8]);
end;

function Createasphere: TX3DRootNode;
begin
InitaspherePart0;
Result := X3D0;
end;

begin
end.
