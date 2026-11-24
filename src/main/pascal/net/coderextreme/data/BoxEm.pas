unit BoxEm;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateBoxEm: TX3DRootNode;

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
X3DPrototype21: TX3DPrototype;
X3DInterfaceDeclaration22: TX3DInterfaceDeclaration;
SFVec3f23: TSFVec3f;
MFNode24: TMFNode;
Shape25: TShapeNode;
Cylinder26: TCylinderNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
X3DPrototype29: TX3DPrototype;
Transform30: TTransformNode;
X3DPrototype32: TX3DPrototypeNode;
SFVec3f33: TSFVec3f;
X3DPrototype35: TX3DPrototypeNode;
SFVec3f36: TSFVec3f;
X3DPrototype38: TX3DPrototypeNode;
SFVec3f39: TSFVec3f;
X3DPrototype41: TX3DPrototypeNode;
SFVec3f42: TSFVec3f;
MFNode43: TMFNode;
Shape44: TShapeNode;
Box45: TBoxNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Transform48: TTransformNode;
Shape49: TShapeNode;

procedure InitBoxEmPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'BoxEm.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 boxes';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;;
NavigationInfo8 := TNavigationInfoNode.Create;;
NavigationInfo8.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;;
Viewpoint9.Description := 'Cubes on Fire';
Viewpoint9.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
X3DPrototype10 := TX3DPrototype.Create;;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'xtranslation');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
MFNode13 := TMFNode.CreateUndefined(X3DInterfaceDeclaration11, false, 'myShape');
Shape14 := TShapeNode.Create;;
Sphere15 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape14.Geometry := Sphere15;
Appearance16 := TAppearanceNode.Create;;
Material17 := TMaterialNode.Create;;
Material17.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance16.Material := Material17;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape14.Appearance := Appearance16;
end;

procedure InitBoxEmPart1;
begin

{ METHOD .AddShape }
MFNode13.AddShape([Shape14]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration11.AddMFNode([MFNode13]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype18 := TX3DPrototype.Create;;
Transform19 := TTransformNode.Create;;
{ METHOD .AddTransform }
X3DPrototype18.AddTransform([Transform19]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype18]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype21 := TX3DPrototype.Create;;
X3DInterfaceDeclaration22 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f23 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration22, false, 'ytranslation');
SFVec3f23.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration22.AddSFVec3f([SFVec3f23]);
MFNode24 := TMFNode.CreateUndefined(X3DInterfaceDeclaration22, false, 'myShape');
Shape25 := TShapeNode.Create;;
Cylinder26 := TCylinderNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape25.Geometry := Cylinder26;
Appearance27 := TAppearanceNode.Create;;
Material28 := TMaterialNode.Create;;
Material28.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape25.Appearance := Appearance27;
{ METHOD .AddShape }
MFNode24.AddShape([Shape25]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration22.AddMFNode([MFNode24]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype21.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration22]);
X3DPrototype29 := TX3DPrototype.Create;;
Transform30 := TTransformNode.Create;;
X3DPrototype32 := TX3DPrototypeNode;
SFVec3f33 := TSFVec3f.CreateUndefined(X3DPrototype32, false, 'xtranslation');
SFVec3f33.Value := '0 0 0';
end;

procedure InitBoxEmPart2;
begin

{ METHOD .AddSFVec3f }
X3DPrototype32.AddSFVec3f([SFVec3f33]);
{ METHOD .AddX3DPrototype }
Transform30.AddX3DPrototype([X3DPrototype32]);
X3DPrototype35 := TX3DPrototypeNode;
SFVec3f36 := TSFVec3f.CreateUndefined(X3DPrototype35, false, 'xtranslation');
SFVec3f36.Value := '2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype35.AddSFVec3f([SFVec3f36]);
{ METHOD .AddX3DPrototype }
Transform30.AddX3DPrototype([X3DPrototype35]);
X3DPrototype38 := TX3DPrototypeNode;
SFVec3f39 := TSFVec3f.CreateUndefined(X3DPrototype38, false, 'xtranslation');
SFVec3f39.Value := '-2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype38.AddSFVec3f([SFVec3f39]);
{ METHOD .AddX3DPrototype }
Transform30.AddX3DPrototype([X3DPrototype38]);
{ METHOD .AddTransform }
X3DPrototype29.AddTransform([Transform30]);
{ METHOD .AddX3DPrototype }
X3DPrototype21.AddX3DPrototype([X3DPrototype29]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype21]);
X3DPrototype41 := TX3DPrototypeNode;
SFVec3f42 := TSFVec3f.CreateUndefined(X3DPrototype41, false, 'ytranslation');
SFVec3f42.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype41.AddSFVec3f([SFVec3f42]);
MFNode43 := TMFNode.CreateUndefined(X3DPrototype41, false, 'myShape');
Shape44 := TShapeNode.Create;;
Box45 := TBoxNode.Create;;
Box45.Size := Vector3(1,1,1);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape44.Geometry := Box45;
Appearance46 := TAppearanceNode.Create;;
Material47 := TMaterialNode.Create;;
Material47.DiffuseColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance46.Material := Material47;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape44.Appearance := Appearance46;
{ METHOD .AddShape }
MFNode43.AddShape([Shape44]);
{ METHOD .AddMFNode }
X3DPrototype41.AddMFNode([MFNode43]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype41]);
Transform48 := TTransformNode.Create;;
Transform48.Translation := Vector3(0,2,0);
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Shape44);
end;

procedure InitBoxEmPart3;
begin

{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform48);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreateBoxEm: TX3DRootNode;
begin
InitBoxEmPart0;
InitBoxEmPart1;
InitBoxEmPart2;
InitBoxEmPart3;
Result := X3D0;
end;

begin
end.
