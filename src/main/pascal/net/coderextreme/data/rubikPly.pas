unit rubikPly;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreaterubikPly: TX3DRootNode;

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
Sphere28: TSphereNode;
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
X3DPrototype47: TX3DPrototype;
X3DInterfaceDeclaration48: TX3DInterfaceDeclaration;
SFVec3f49: TSFVec3f;
MFNode50: TMFNode;
Shape51: TShapeNode;
Sphere52: TSphereNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
X3DPrototype55: TX3DPrototype;
Transform56: TTransformNode;
IS57: TIS;
connect58: Tconnect;
X3DPrototype59: TX3DPrototypeNode;
SFVec3f60: TSFVec3f;
IS61: TIS;
connect62: Tconnect;
X3DPrototype63: TX3DPrototypeNode;
SFVec3f64: TSFVec3f;
IS65: TIS;
connect66: Tconnect;
X3DPrototype67: TX3DPrototypeNode;
SFVec3f68: TSFVec3f;
IS69: TIS;
connect70: Tconnect;
X3DPrototype71: TX3DPrototype;
X3DInterfaceDeclaration72: TX3DInterfaceDeclaration;
SFVec3f73: TSFVec3f;
MFNode74: TMFNode;
Shape75: TShapeNode;
Sphere76: TSphereNode;
Appearance77: TAppearanceNode;
Material78: TMaterialNode;
X3DPrototype79: TX3DPrototype;
Transform80: TTransformNode;
IS81: TIS;
connect82: Tconnect;
X3DPrototype83: TX3DPrototypeNode;
SFVec3f84: TSFVec3f;
IS85: TIS;
connect86: Tconnect;
X3DPrototype87: TX3DPrototypeNode;
SFVec3f88: TSFVec3f;
IS89: TIS;
connect90: Tconnect;
X3DPrototype91: TX3DPrototypeNode;
SFVec3f92: TSFVec3f;
IS93: TIS;
connect94: Tconnect;
X3DPrototype95: TX3DPrototypeNode;
SFVec3f96: TSFVec3f;
MFNode97: TMFNode;
Group98: TGroupNode;
Shape99: TShapeNode;
IndexedFaceSet100: TIndexedFaceSetNode;
Coordinate101: TCoordinateNode;
Color102: TColorNode;
Shape103: TShapeNode;
IndexedLineSet104: TIndexedLineSetNode;
Coordinate105: TCoordinateNode;
Color106: TColorNode;

procedure InitrubikPlyPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rubikFurnace.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a green rubik cube';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['ANY','EXAMINE','WALK','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube on Fire';
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

procedure InitrubikPlyPart1;
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
Sphere28 := TSphereNode.Create;
{ METHOD .Geometry }
Shape27.Geometry := Sphere28;
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

procedure InitrubikPlyPart2;
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
X3DPrototype47 := TX3DPrototype.Create;
X3DInterfaceDeclaration48 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f49 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration48, false, 'ztranslation');
SFVec3f49.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration48.AddSFVec3f([SFVec3f49]);
MFNode50 := TMFNode.CreateUndefined(X3DInterfaceDeclaration48, false, 'myShape');
Shape51 := TShapeNode.Create;
Sphere52 := TSphereNode.Create;
{ METHOD .Geometry }
Shape51.Geometry := Sphere52;
Appearance53 := TAppearanceNode.Create;
end;

procedure InitrubikPlyPart3;
begin

Material54 := TMaterialNode.Create;
Material54.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance53.Material := Material54;
{ METHOD .Appearance }
Shape51.Appearance := Appearance53;
{ METHOD .AddShape }
MFNode50.AddShape([Shape51]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration48.AddMFNode([MFNode50]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype47.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration48]);
X3DPrototype55 := TX3DPrototype.Create;
Transform56 := TTransformNode.Create;
IS57 := TIS.Create;
connect58 := Tconnect.Create;
connect58.NodeField := 'translation';
connect58.ProtoField := 'ztranslation';
{ METHOD .Connect }
IS57.Connect := connect58;
{ METHOD .IS }
Transform56.IS := IS57;
X3DPrototype59 := TX3DPrototypeNode.Create;
SFVec3f60 := TSFVec3f.CreateUndefined(X3DPrototype59, false, 'ytranslation');
SFVec3f60.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype59.AddSFVec3f([SFVec3f60]);
IS61 := TIS.Create;
connect62 := Tconnect.Create;
connect62.NodeField := 'myShape';
connect62.ProtoField := 'myShape';
{ METHOD .Connect }
IS61.Connect := connect62;
{ METHOD .SetIS }
X3DPrototype59.IS := IS61;
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype59]);
X3DPrototype63 := TX3DPrototypeNode.Create;
SFVec3f64 := TSFVec3f.CreateUndefined(X3DPrototype63, false, 'ytranslation');
SFVec3f64.Value := '0 2 0';
{ METHOD .AddSFVec3f }
X3DPrototype63.AddSFVec3f([SFVec3f64]);
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'myShape';
connect66.ProtoField := 'myShape';
{ METHOD .Connect }
IS65.Connect := connect66;
{ METHOD .SetIS }
X3DPrototype63.IS := IS65;
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype63]);
X3DPrototype67 := TX3DPrototypeNode.Create;
SFVec3f68 := TSFVec3f.CreateUndefined(X3DPrototype67, false, 'ytranslation');
SFVec3f68.Value := '0 -2 0';
end;

procedure InitrubikPlyPart4;
begin

{ METHOD .AddSFVec3f }
X3DPrototype67.AddSFVec3f([SFVec3f68]);
IS69 := TIS.Create;
connect70 := Tconnect.Create;
connect70.NodeField := 'myShape';
connect70.ProtoField := 'myShape';
{ METHOD .Connect }
IS69.Connect := connect70;
{ METHOD .SetIS }
X3DPrototype67.IS := IS69;
{ METHOD .AddX3DPrototype }
Transform56.AddX3DPrototype([X3DPrototype67]);
{ METHOD .AddTransform }
X3DPrototype55.AddTransform([Transform56]);
{ METHOD .AddX3DPrototype }
X3DPrototype47.AddX3DPrototype([X3DPrototype55]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype47]);
X3DPrototype71 := TX3DPrototype.Create;
X3DInterfaceDeclaration72 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f73 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration72, false, 'ttranslation');
SFVec3f73.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration72.AddSFVec3f([SFVec3f73]);
MFNode74 := TMFNode.CreateUndefined(X3DInterfaceDeclaration72, false, 'myShape');
Shape75 := TShapeNode.Create;
Sphere76 := TSphereNode.Create;
{ METHOD .Geometry }
Shape75.Geometry := Sphere76;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance77.Material := Material78;
{ METHOD .Appearance }
Shape75.Appearance := Appearance77;
{ METHOD .AddShape }
MFNode74.AddShape([Shape75]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration72.AddMFNode([MFNode74]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype71.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration72]);
X3DPrototype79 := TX3DPrototype.Create;
Transform80 := TTransformNode.Create;
IS81 := TIS.Create;
connect82 := Tconnect.Create;
connect82.NodeField := 'translation';
connect82.ProtoField := 'ttranslation';
{ METHOD .Connect }
IS81.Connect := connect82;
{ METHOD .IS }
Transform80.IS := IS81;
X3DPrototype83 := TX3DPrototypeNode.Create;
SFVec3f84 := TSFVec3f.CreateUndefined(X3DPrototype83, false, 'ztranslation');
SFVec3f84.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype83.AddSFVec3f([SFVec3f84]);
end;

procedure InitrubikPlyPart5;
begin

IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'myShape';
connect86.ProtoField := 'myShape';
{ METHOD .Connect }
IS85.Connect := connect86;
{ METHOD .SetIS }
X3DPrototype83.IS := IS85;
{ METHOD .AddX3DPrototype }
Transform80.AddX3DPrototype([X3DPrototype83]);
X3DPrototype87 := TX3DPrototypeNode.Create;
SFVec3f88 := TSFVec3f.CreateUndefined(X3DPrototype87, false, 'ztranslation');
SFVec3f88.Value := '0 0 2';
{ METHOD .AddSFVec3f }
X3DPrototype87.AddSFVec3f([SFVec3f88]);
IS89 := TIS.Create;
connect90 := Tconnect.Create;
connect90.NodeField := 'myShape';
connect90.ProtoField := 'myShape';
{ METHOD .Connect }
IS89.Connect := connect90;
{ METHOD .SetIS }
X3DPrototype87.IS := IS89;
{ METHOD .AddX3DPrototype }
Transform80.AddX3DPrototype([X3DPrototype87]);
X3DPrototype91 := TX3DPrototypeNode.Create;
SFVec3f92 := TSFVec3f.CreateUndefined(X3DPrototype91, false, 'ztranslation');
SFVec3f92.Value := '0 0 -2';
{ METHOD .AddSFVec3f }
X3DPrototype91.AddSFVec3f([SFVec3f92]);
IS93 := TIS.Create;
connect94 := Tconnect.Create;
connect94.NodeField := 'myShape';
connect94.ProtoField := 'myShape';
{ METHOD .Connect }
IS93.Connect := connect94;
{ METHOD .SetIS }
X3DPrototype91.IS := IS93;
{ METHOD .AddX3DPrototype }
Transform80.AddX3DPrototype([X3DPrototype91]);
{ METHOD .AddTransform }
X3DPrototype79.AddTransform([Transform80]);
{ METHOD .AddX3DPrototype }
X3DPrototype71.AddX3DPrototype([X3DPrototype79]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype71]);
X3DPrototype95 := TX3DPrototypeNode.Create;
SFVec3f96 := TSFVec3f.CreateUndefined(X3DPrototype95, false, 'ttranslation');
SFVec3f96.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype95.AddSFVec3f([SFVec3f96]);
MFNode97 := TMFNode.CreateUndefined(X3DPrototype95, false, 'myShape');
Group98 := TGroupNode.Create;
Shape99 := TShapeNode.Create;
IndexedFaceSet100 := TIndexedFaceSetNode.Create;
end;

procedure InitrubikPlyPart6;
begin

IndexedFaceSet100.Convex := False;
IndexedFaceSet100.SetCoordIndex([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0]);
IndexedFaceSet100.SetColorIndex([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0]);
Coordinate101 := TCoordinateNode.Create;
Coordinate101.SetPoint([Vector3(0,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,1),Vector3(1,1,0)]);
{ METHOD .Coord }
IndexedFaceSet100.Coord := Coordinate101;
Color102 := TColorNode.Create;
Color102.SetColor([Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1)]);
{ METHOD .Color }
IndexedFaceSet100.Color := Color102;
{ METHOD .Geometry }
Shape99.Geometry := IndexedFaceSet100;
{ METHOD .FdChildren.Add }
Group98.FdChildren.Add(Shape99);
Shape103 := TShapeNode.Create;
IndexedLineSet104 := TIndexedLineSetNode.Create;
IndexedLineSet104.SetCoordIndex([0,1,-1,1,2,-1,2,3,-1,3,0,-1,2,0,-1]);
Coordinate105 := TCoordinateNode.Create;
Coordinate105.SetPoint([Vector3(0,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,1),Vector3(1,1,0)]);
{ METHOD .Coord }
IndexedLineSet104.Coord := Coordinate105;
Color106 := TColorNode.Create;
Color106.SetColor([Vector3(1,1,1),Vector3(1,1,1),Vector3(1,1,1),Vector3(1,1,1),Vector3(0,0,0)]);
{ METHOD .Color }
IndexedLineSet104.Color := Color106;
{ METHOD .Geometry }
Shape103.Geometry := IndexedLineSet104;
{ METHOD .FdChildren.Add }
Group98.FdChildren.Add(Shape103);
{ METHOD .AddGroup }
MFNode97.AddChildren([Group98]);
{ METHOD .AddMFNode }
X3DPrototype95.AddMFNode([MFNode97]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype95]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreaterubikPly: TX3DRootNode;
begin
InitrubikPlyPart0;
InitrubikPlyPart1;
InitrubikPlyPart2;
InitrubikPlyPart3;
InitrubikPlyPart4;
InitrubikPlyPart5;
InitrubikPlyPart6;
Result := X3D0;
end;

begin
end.
