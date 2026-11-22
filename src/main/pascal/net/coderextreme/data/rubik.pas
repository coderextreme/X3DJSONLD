unit rubik;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createrubik: TX3DRootNode;

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
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
IS15: TIS;
connect16: Tconnect;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
X3DPrototype21: TX3DPrototype;
X3DInterfaceDeclaration22: TX3DInterfaceDeclaration;
SFVec3f23: TSFVec3f;
X3DPrototype24: TX3DPrototype;
Transform25: TTransformNode;
IS26: TIS;
connect27: Tconnect;
X3DPrototype28: TX3DPrototypeNode;
SFVec3f29: TSFVec3f;
X3DPrototype30: TX3DPrototypeNode;
SFVec3f31: TSFVec3f;
X3DPrototype32: TX3DPrototypeNode;
SFVec3f33: TSFVec3f;
X3DPrototype34: TX3DPrototype;
X3DInterfaceDeclaration35: TX3DInterfaceDeclaration;
SFVec3f36: TSFVec3f;
X3DPrototype37: TX3DPrototype;
Transform38: TTransformNode;
IS39: TIS;
connect40: Tconnect;
X3DPrototype41: TX3DPrototypeNode;
SFVec3f42: TSFVec3f;
X3DPrototype43: TX3DPrototypeNode;
SFVec3f44: TSFVec3f;
X3DPrototype45: TX3DPrototypeNode;
SFVec3f46: TSFVec3f;
X3DPrototype47: TX3DPrototype;
X3DInterfaceDeclaration48: TX3DInterfaceDeclaration;
SFVec3f49: TSFVec3f;
X3DPrototype50: TX3DPrototype;
Transform51: TTransformNode;
IS52: TIS;
connect53: Tconnect;
X3DPrototype54: TX3DPrototypeNode;
SFVec3f55: TSFVec3f;
X3DPrototype56: TX3DPrototypeNode;
SFVec3f57: TSFVec3f;
X3DPrototype58: TX3DPrototypeNode;
SFVec3f59: TSFVec3f;
X3DPrototype60: TX3DPrototypeNode;
SFVec3f61: TSFVec3f;

procedure InitrubikPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rubik.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a kind of rubik cube with spheres';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['ANY','EXAMINE','WALK','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube';
Viewpoint9.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
X3DPrototype10 := TX3DPrototype.Create;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'xtranslation');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'xtranslation';
{ METHOD .Connect }
IS15.Connect := connect16;
{ METHOD .IS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
{ METHOD .Geometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
Shape17.Appearance := Appearance19;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape17);
end;

procedure InitrubikPart1;
begin

{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype21 := TX3DPrototype.Create;
X3DInterfaceDeclaration22 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f23 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration22, false, 'ytranslation');
SFVec3f23.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration22.AddSFVec3f([SFVec3f23]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype21.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration22]);
X3DPrototype24 := TX3DPrototype.Create;
Transform25 := TTransformNode.Create;
IS26 := TIS.Create;
connect27 := Tconnect.Create;
connect27.NodeField := 'translation';
connect27.ProtoField := 'ytranslation';
{ METHOD .Connect }
IS26.Connect := connect27;
{ METHOD .IS }
Transform25.IS := IS26;
X3DPrototype28 := TX3DPrototypeNode.Create;
SFVec3f29 := TSFVec3f.CreateUndefined(X3DPrototype28, false, 'xtranslation');
SFVec3f29.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype28.AddSFVec3f([SFVec3f29]);
{ METHOD .AddX3DPrototype }
Transform25.AddX3DPrototype([X3DPrototype28]);
X3DPrototype30 := TX3DPrototypeNode.Create;
SFVec3f31 := TSFVec3f.CreateUndefined(X3DPrototype30, false, 'xtranslation');
SFVec3f31.Value := '2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype30.AddSFVec3f([SFVec3f31]);
{ METHOD .AddX3DPrototype }
Transform25.AddX3DPrototype([X3DPrototype30]);
X3DPrototype32 := TX3DPrototypeNode.Create;
SFVec3f33 := TSFVec3f.CreateUndefined(X3DPrototype32, false, 'xtranslation');
SFVec3f33.Value := '-2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype32.AddSFVec3f([SFVec3f33]);
{ METHOD .AddX3DPrototype }
Transform25.AddX3DPrototype([X3DPrototype32]);
{ METHOD .AddTransform }
X3DPrototype24.AddTransform([Transform25]);
{ METHOD .AddX3DPrototype }
X3DPrototype21.AddX3DPrototype([X3DPrototype24]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype21]);
X3DPrototype34 := TX3DPrototype.Create;
X3DInterfaceDeclaration35 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f36 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration35, false, 'ztranslation');
SFVec3f36.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration35.AddSFVec3f([SFVec3f36]);
end;

procedure InitrubikPart2;
begin

{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype34.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration35]);
X3DPrototype37 := TX3DPrototype.Create;
Transform38 := TTransformNode.Create;
IS39 := TIS.Create;
connect40 := Tconnect.Create;
connect40.NodeField := 'translation';
connect40.ProtoField := 'ztranslation';
{ METHOD .Connect }
IS39.Connect := connect40;
{ METHOD .IS }
Transform38.IS := IS39;
X3DPrototype41 := TX3DPrototypeNode.Create;
SFVec3f42 := TSFVec3f.CreateUndefined(X3DPrototype41, false, 'ytranslation');
SFVec3f42.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype41.AddSFVec3f([SFVec3f42]);
{ METHOD .AddX3DPrototype }
Transform38.AddX3DPrototype([X3DPrototype41]);
X3DPrototype43 := TX3DPrototypeNode.Create;
SFVec3f44 := TSFVec3f.CreateUndefined(X3DPrototype43, false, 'ytranslation');
SFVec3f44.Value := '0 2 0';
{ METHOD .AddSFVec3f }
X3DPrototype43.AddSFVec3f([SFVec3f44]);
{ METHOD .AddX3DPrototype }
Transform38.AddX3DPrototype([X3DPrototype43]);
X3DPrototype45 := TX3DPrototypeNode.Create;
SFVec3f46 := TSFVec3f.CreateUndefined(X3DPrototype45, false, 'ytranslation');
SFVec3f46.Value := '0 -2 0';
{ METHOD .AddSFVec3f }
X3DPrototype45.AddSFVec3f([SFVec3f46]);
{ METHOD .AddX3DPrototype }
Transform38.AddX3DPrototype([X3DPrototype45]);
{ METHOD .AddTransform }
X3DPrototype37.AddTransform([Transform38]);
{ METHOD .AddX3DPrototype }
X3DPrototype34.AddX3DPrototype([X3DPrototype37]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype34]);
X3DPrototype47 := TX3DPrototype.Create;
X3DInterfaceDeclaration48 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f49 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration48, false, 'ttranslation');
SFVec3f49.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration48.AddSFVec3f([SFVec3f49]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype47.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration48]);
X3DPrototype50 := TX3DPrototype.Create;
Transform51 := TTransformNode.Create;
IS52 := TIS.Create;
connect53 := Tconnect.Create;
connect53.NodeField := 'translation';
connect53.ProtoField := 'ttranslation';
{ METHOD .Connect }
IS52.Connect := connect53;
end;

procedure InitrubikPart3;
begin

{ METHOD .IS }
Transform51.IS := IS52;
X3DPrototype54 := TX3DPrototypeNode.Create;
SFVec3f55 := TSFVec3f.CreateUndefined(X3DPrototype54, false, 'ztranslation');
SFVec3f55.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype54.AddSFVec3f([SFVec3f55]);
{ METHOD .AddX3DPrototype }
Transform51.AddX3DPrototype([X3DPrototype54]);
X3DPrototype56 := TX3DPrototypeNode.Create;
SFVec3f57 := TSFVec3f.CreateUndefined(X3DPrototype56, false, 'ztranslation');
SFVec3f57.Value := '0 0 2';
{ METHOD .AddSFVec3f }
X3DPrototype56.AddSFVec3f([SFVec3f57]);
{ METHOD .AddX3DPrototype }
Transform51.AddX3DPrototype([X3DPrototype56]);
X3DPrototype58 := TX3DPrototypeNode.Create;
SFVec3f59 := TSFVec3f.CreateUndefined(X3DPrototype58, false, 'ztranslation');
SFVec3f59.Value := '0 0 -2';
{ METHOD .AddSFVec3f }
X3DPrototype58.AddSFVec3f([SFVec3f59]);
{ METHOD .AddX3DPrototype }
Transform51.AddX3DPrototype([X3DPrototype58]);
{ METHOD .AddTransform }
X3DPrototype50.AddTransform([Transform51]);
{ METHOD .AddX3DPrototype }
X3DPrototype47.AddX3DPrototype([X3DPrototype50]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype47]);
X3DPrototype60 := TX3DPrototypeNode.Create;
SFVec3f61 := TSFVec3f.CreateUndefined(X3DPrototype60, false, 'ttranslation');
SFVec3f61.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype60.AddSFVec3f([SFVec3f61]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype60]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createrubik: TX3DRootNode;
begin
InitrubikPart0;
InitrubikPart1;
InitrubikPart2;
InitrubikPart3;
Result := X3D0;
end;

begin
end.
