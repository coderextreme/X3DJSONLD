unit rubikPly;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
X3DPrototype21: TX3DPrototype;
X3DInterfaceDeclaration22: TX3DInterfaceDeclaration;
SFVec3f23: TSFVec3f;
MFNode24: TMFNode;
Shape25: TShapeNode;
Sphere26: TSphereNode;
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
X3DPrototype41: TX3DPrototype;
X3DInterfaceDeclaration42: TX3DInterfaceDeclaration;
SFVec3f43: TSFVec3f;
MFNode44: TMFNode;
Shape45: TShapeNode;
Sphere46: TSphereNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
X3DPrototype49: TX3DPrototype;
Transform50: TTransformNode;
X3DPrototype52: TX3DPrototypeNode;
SFVec3f53: TSFVec3f;
X3DPrototype55: TX3DPrototypeNode;
SFVec3f56: TSFVec3f;
X3DPrototype58: TX3DPrototypeNode;
SFVec3f59: TSFVec3f;
X3DPrototype61: TX3DPrototype;
X3DInterfaceDeclaration62: TX3DInterfaceDeclaration;
SFVec3f63: TSFVec3f;
MFNode64: TMFNode;
Shape65: TShapeNode;
Sphere66: TSphereNode;
Appearance67: TAppearanceNode;
Material68: TMaterialNode;
X3DPrototype69: TX3DPrototype;
Transform70: TTransformNode;
X3DPrototype72: TX3DPrototypeNode;
SFVec3f73: TSFVec3f;
X3DPrototype75: TX3DPrototypeNode;
SFVec3f76: TSFVec3f;
X3DPrototype78: TX3DPrototypeNode;
SFVec3f79: TSFVec3f;
X3DPrototype81: TX3DPrototypeNode;
SFVec3f82: TSFVec3f;
MFNode83: TMFNode;
Group84: TGroupNode;
Shape85: TShapeNode;
IndexedFaceSet86: TIndexedFaceSetNode;
Coordinate87: TCoordinateNode;
Color88: TColorNode;
Shape89: TShapeNode;
IndexedLineSet90: TIndexedLineSetNode;
Coordinate91: TCoordinateNode;
Color92: TColorNode;

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
Group7 := TGroupNode.Create;;
NavigationInfo8 := TNavigationInfoNode.Create;;
NavigationInfo8.SetType(['ANY','EXAMINE','WALK','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;;
Viewpoint9.Description := 'Rubiks Cube on Fire';
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

procedure InitrubikPlyPart1;
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
Sphere26 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape25.Geometry := Sphere26;
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

procedure InitrubikPlyPart2;
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
X3DPrototype41 := TX3DPrototype.Create;;
X3DInterfaceDeclaration42 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f43 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration42, false, 'ztranslation');
SFVec3f43.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration42.AddSFVec3f([SFVec3f43]);
MFNode44 := TMFNode.CreateUndefined(X3DInterfaceDeclaration42, false, 'myShape');
Shape45 := TShapeNode.Create;;
Sphere46 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape45.Geometry := Sphere46;
Appearance47 := TAppearanceNode.Create;;
Material48 := TMaterialNode.Create;;
Material48.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance47.Material := Material48;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape45.Appearance := Appearance47;
{ METHOD .AddShape }
MFNode44.AddShape([Shape45]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration42.AddMFNode([MFNode44]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype41.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration42]);
X3DPrototype49 := TX3DPrototype.Create;;
end;

procedure InitrubikPlyPart3;
begin

Transform50 := TTransformNode.Create;;
X3DPrototype52 := TX3DPrototypeNode;
SFVec3f53 := TSFVec3f.CreateUndefined(X3DPrototype52, false, 'ytranslation');
SFVec3f53.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype52.AddSFVec3f([SFVec3f53]);
{ METHOD .AddX3DPrototype }
Transform50.AddX3DPrototype([X3DPrototype52]);
X3DPrototype55 := TX3DPrototypeNode;
SFVec3f56 := TSFVec3f.CreateUndefined(X3DPrototype55, false, 'ytranslation');
SFVec3f56.Value := '0 2 0';
{ METHOD .AddSFVec3f }
X3DPrototype55.AddSFVec3f([SFVec3f56]);
{ METHOD .AddX3DPrototype }
Transform50.AddX3DPrototype([X3DPrototype55]);
X3DPrototype58 := TX3DPrototypeNode;
SFVec3f59 := TSFVec3f.CreateUndefined(X3DPrototype58, false, 'ytranslation');
SFVec3f59.Value := '0 -2 0';
{ METHOD .AddSFVec3f }
X3DPrototype58.AddSFVec3f([SFVec3f59]);
{ METHOD .AddX3DPrototype }
Transform50.AddX3DPrototype([X3DPrototype58]);
{ METHOD .AddTransform }
X3DPrototype49.AddTransform([Transform50]);
{ METHOD .AddX3DPrototype }
X3DPrototype41.AddX3DPrototype([X3DPrototype49]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype41]);
X3DPrototype61 := TX3DPrototype.Create;;
X3DInterfaceDeclaration62 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f63 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration62, false, 'ttranslation');
SFVec3f63.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration62.AddSFVec3f([SFVec3f63]);
MFNode64 := TMFNode.CreateUndefined(X3DInterfaceDeclaration62, false, 'myShape');
Shape65 := TShapeNode.Create;;
Sphere66 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape65.Geometry := Sphere66;
Appearance67 := TAppearanceNode.Create;;
Material68 := TMaterialNode.Create;;
Material68.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance67.Material := Material68;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape65.Appearance := Appearance67;
end;

procedure InitrubikPlyPart4;
begin

{ METHOD .AddShape }
MFNode64.AddShape([Shape65]);
{ METHOD .AddMFNode }
X3DInterfaceDeclaration62.AddMFNode([MFNode64]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype61.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration62]);
X3DPrototype69 := TX3DPrototype.Create;;
Transform70 := TTransformNode.Create;;
X3DPrototype72 := TX3DPrototypeNode;
SFVec3f73 := TSFVec3f.CreateUndefined(X3DPrototype72, false, 'ztranslation');
SFVec3f73.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype72.AddSFVec3f([SFVec3f73]);
{ METHOD .AddX3DPrototype }
Transform70.AddX3DPrototype([X3DPrototype72]);
X3DPrototype75 := TX3DPrototypeNode;
SFVec3f76 := TSFVec3f.CreateUndefined(X3DPrototype75, false, 'ztranslation');
SFVec3f76.Value := '0 0 2';
{ METHOD .AddSFVec3f }
X3DPrototype75.AddSFVec3f([SFVec3f76]);
{ METHOD .AddX3DPrototype }
Transform70.AddX3DPrototype([X3DPrototype75]);
X3DPrototype78 := TX3DPrototypeNode;
SFVec3f79 := TSFVec3f.CreateUndefined(X3DPrototype78, false, 'ztranslation');
SFVec3f79.Value := '0 0 -2';
{ METHOD .AddSFVec3f }
X3DPrototype78.AddSFVec3f([SFVec3f79]);
{ METHOD .AddX3DPrototype }
Transform70.AddX3DPrototype([X3DPrototype78]);
{ METHOD .AddTransform }
X3DPrototype69.AddTransform([Transform70]);
{ METHOD .AddX3DPrototype }
X3DPrototype61.AddX3DPrototype([X3DPrototype69]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype61]);
X3DPrototype81 := TX3DPrototypeNode;
SFVec3f82 := TSFVec3f.CreateUndefined(X3DPrototype81, false, 'ttranslation');
SFVec3f82.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype81.AddSFVec3f([SFVec3f82]);
MFNode83 := TMFNode.CreateUndefined(X3DPrototype81, false, 'myShape');
Group84 := TGroupNode.Create;;
Shape85 := TShapeNode.Create;;
IndexedFaceSet86 := TIndexedFaceSetNode.Create;;
IndexedFaceSet86.Convex := False;
IndexedFaceSet86.SetCoordIndex([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0]);
IndexedFaceSet86.SetColorIndex([0,1,2,-1,0,2,3,-1,7,6,5,4,-1,0,4,5,1,-1,1,5,6,2,-1,2,6,7,3,-1,3,7,4,0]);
Coordinate87 := TCoordinateNode.Create;
end;

procedure InitrubikPlyPart5;
begin
;
Coordinate87.SetPoint([Vector3(0,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,1),Vector3(1,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet86.Coord := Coordinate87;
Color88 := TColorNode.Create;;
Color88.SetColor([Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedFaceSet86.Color := Color88;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape85.Geometry := IndexedFaceSet86;
{ METHOD .FdChildren.Add }
Group84.FdChildren.Add(Shape85);
Shape89 := TShapeNode.Create;;
IndexedLineSet90 := TIndexedLineSetNode.Create;;
IndexedLineSet90.SetCoordIndex([0,1,-1,1,2,-1,2,3,-1,3,0,-1,2,0,-1]);
Coordinate91 := TCoordinateNode.Create;;
Coordinate91.SetPoint([Vector3(0,0,0),Vector3(0,0,1),Vector3(0,1,1),Vector3(0,1,0),Vector3(1,0,0),Vector3(1,0,1),Vector3(1,1,1),Vector3(1,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedLineSet90.Coord := Coordinate91;
Color92 := TColorNode.Create;;
Color92.SetColor([Vector3(1,1,1),Vector3(1,1,1),Vector3(1,1,1),Vector3(1,1,1),Vector3(0,0,0)]);
{ METHOD .Color }
{ METHOD.SET .Color }
IndexedLineSet90.Color := Color92;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape89.Geometry := IndexedLineSet90;
{ METHOD .FdChildren.Add }
Group84.FdChildren.Add(Shape89);
{ METHOD .AddGroup }
MFNode83.AddChildren([Group84]);
{ METHOD .AddMFNode }
X3DPrototype81.AddMFNode([MFNode83]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype81]);
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
Result := X3D0;
end;

begin
end.
