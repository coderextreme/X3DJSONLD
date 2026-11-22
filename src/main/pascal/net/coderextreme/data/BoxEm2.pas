unit BoxEm2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateBoxEm2: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
SFVec3f12: TSFVec3f;
MFNode13: TMFNode;
Shape14: TShapeNode;
Sphere15: TSphereNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
X3DPrototype18: TX3DPrototype;
Transform19: TTransformNode;
IS20: TIS;
connect21: Tconnect;
connect22: Tconnect;
X3DPrototype23: TX3DPrototype;
X3DInterfaceDeclaration24: TX3DInterfaceDeclaration;
SFVec3f25: TSFVec3f;
MFNode26: TMFNode;
Shape27: TShapeNode;
Cylinder28: TCylinderNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
X3DPrototype31: TX3DPrototype;
Transform32: TTransformNode;
IS33: TIS;
connect34: Tconnect;
X3DPrototype35: TX3DPrototypeNode;
SFVec3f36: TSFVec3f;
IS37: TIS;
connect38: Tconnect;
X3DPrototype39: TX3DPrototypeNode;
SFVec3f40: TSFVec3f;
IS41: TIS;
connect42: Tconnect;
X3DPrototype43: TX3DPrototypeNode;
SFVec3f44: TSFVec3f;
IS45: TIS;
connect46: Tconnect;
X3DPrototype47: TX3DPrototypeNode;
SFVec3f48: TSFVec3f;
MFNode49: TMFNode;
Shape50: TShapeNode;
Box51: TBoxNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Transform54: TTransformNode;
Shape55: TShapeNode;

procedure InitBoxEm2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'BoxEm2.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 boxes';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Cubes on Fire';
Viewpoint9.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
X3DPrototype10 := TX3DPrototype.Create;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'xtranslation');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
MFNode13 := TMFNode.CreateUndefined(X3DInterfaceDeclaration11, false, 'myShape');
Shape14 := TShapeNode.Create;
Sphere15 := TSphereNode.Create;
{ METHOD .Geometry }
Shape14.Geometry := Sphere15;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance16.Material := Material17;
{ METHOD .Appearance }
Shape14.Appearance := Appearance16;
{ METHOD .AddShape }
MFNode13.AddShape([Shape14]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration11.AddMFNode([MFNode13]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype18 := TX3DPrototype.Create;
Transform19 := TTransformNode.Create;
IS20 := TIS.Create;
connect21 := Tconnect.Create;
connect21.NodeField := 'translation';
connect21.ProtoField := 'xtranslation';
end;

procedure InitBoxEm2Part1;
begin

{ METHOD .Connect }
IS20.Connect := connect21;
connect22 := Tconnect.Create;
connect22.NodeField := 'children';
connect22.ProtoField := 'myShape';
{ METHOD .Connect }
IS20.Connect := connect22;
{ METHOD .IS }
Transform19.IS := IS20;
{ METHOD .AddTransform }
X3DPrototype18.AddTransform([Transform19]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype18]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype23 := TX3DPrototype.Create;
X3DInterfaceDeclaration24 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f25 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration24, false, 'ytranslation');
SFVec3f25.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration24.AddSFVec3f([SFVec3f25]);
MFNode26 := TMFNode.CreateUndefined(X3DInterfaceDeclaration24, false, 'myShape');
Shape27 := TShapeNode.Create;
Cylinder28 := TCylinderNode.Create;
{ METHOD .Geometry }
Shape27.Geometry := Cylinder28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
{ METHOD .Appearance }
Shape27.Appearance := Appearance29;
{ METHOD .AddShape }
MFNode26.AddShape([Shape27]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration24.AddMFNode([MFNode26]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype23.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration24]);
X3DPrototype31 := TX3DPrototype.Create;
Transform32 := TTransformNode.Create;
IS33 := TIS.Create;
connect34 := Tconnect.Create;
connect34.NodeField := 'translation';
connect34.ProtoField := 'ytranslation';
{ METHOD .Connect }
IS33.Connect := connect34;
{ METHOD .IS }
Transform32.IS := IS33;
X3DPrototype35 := TX3DPrototypeNode.Create;
SFVec3f36 := TSFVec3f.CreateUndefined(X3DPrototype35, false, 'xtranslation');
SFVec3f36.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype35.AddSFVec3f([SFVec3f36]);
IS37 := TIS.Create;
connect38 := Tconnect.Create;
end;

procedure InitBoxEm2Part2;
begin

connect38.NodeField := 'myShape';
connect38.ProtoField := 'myShape';
{ METHOD .Connect }
IS37.Connect := connect38;
{ METHOD .SetIS }
X3DPrototype35.IS := IS37;
{ METHOD .AddX3DPrototype }
Transform32.AddX3DPrototype([X3DPrototype35]);
X3DPrototype39 := TX3DPrototypeNode.Create;
SFVec3f40 := TSFVec3f.CreateUndefined(X3DPrototype39, false, 'xtranslation');
SFVec3f40.Value := '2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype39.AddSFVec3f([SFVec3f40]);
IS41 := TIS.Create;
connect42 := Tconnect.Create;
connect42.NodeField := 'myShape';
connect42.ProtoField := 'myShape';
{ METHOD .Connect }
IS41.Connect := connect42;
{ METHOD .SetIS }
X3DPrototype39.IS := IS41;
{ METHOD .AddX3DPrototype }
Transform32.AddX3DPrototype([X3DPrototype39]);
X3DPrototype43 := TX3DPrototypeNode.Create;
SFVec3f44 := TSFVec3f.CreateUndefined(X3DPrototype43, false, 'xtranslation');
SFVec3f44.Value := '-2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype43.AddSFVec3f([SFVec3f44]);
IS45 := TIS.Create;
connect46 := Tconnect.Create;
connect46.NodeField := 'myShape';
connect46.ProtoField := 'myShape';
{ METHOD .Connect }
IS45.Connect := connect46;
{ METHOD .SetIS }
X3DPrototype43.IS := IS45;
{ METHOD .AddX3DPrototype }
Transform32.AddX3DPrototype([X3DPrototype43]);
{ METHOD .AddTransform }
X3DPrototype31.AddTransform([Transform32]);
{ METHOD .AddX3DPrototype }
X3DPrototype23.AddX3DPrototype([X3DPrototype31]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype23]);
X3DPrototype47 := TX3DPrototypeNode.Create;
SFVec3f48 := TSFVec3f.CreateUndefined(X3DPrototype47, false, 'ytranslation');
SFVec3f48.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype47.AddSFVec3f([SFVec3f48]);
MFNode49 := TMFNode.CreateUndefined(X3DPrototype47, false, 'myShape');
Shape50 := TShapeNode.Create;
Box51 := TBoxNode.Create;
Box51.Size := Vector3(1,1,1);
{ METHOD .Geometry }
Shape50.Geometry := Box51;
Appearance52 := TAppearanceNode.Create;
end;

procedure InitBoxEm2Part3;
begin

Material53 := TMaterialNode.Create;
Material53.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance52.Material := Material53;
{ METHOD .Appearance }
Shape50.Appearance := Appearance52;
{ METHOD .AddShape }
MFNode49.AddShape([Shape50]);
{ METHOD .AddMFNode }
X3DPrototype47.AddMFNode([MFNode49]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype47]);
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0,2,0);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform54);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreateBoxEm2: TX3DRootNode;
begin
InitBoxEm2Part0;
InitBoxEm2Part1;
InitBoxEm2Part2;
InitBoxEm2Part3;
Result := X3D0;
end;

begin
end.
