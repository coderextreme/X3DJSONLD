unit rubikOnFire;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreaterubikOnFire: TX3DRootNode;

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
SFNode13: TSFNode;
Sphere14: TSphereNode;
X3DPrototype15: TX3DPrototype;
Transform16: TTransformNode;
Shape18: TShapeNode;
Appearance20: TAppearanceNode;
Material21: TMaterialNode;
X3DPrototype22: TX3DPrototype;
X3DInterfaceDeclaration23: TX3DInterfaceDeclaration;
SFVec3f24: TSFVec3f;
SFNode25: TSFNode;
Sphere26: TSphereNode;
X3DPrototype27: TX3DPrototype;
Transform28: TTransformNode;
X3DPrototype30: TX3DPrototypeNode;
SFVec3f31: TSFVec3f;
X3DPrototype33: TX3DPrototypeNode;
SFVec3f34: TSFVec3f;
X3DPrototype36: TX3DPrototypeNode;
SFVec3f37: TSFVec3f;
X3DPrototype39: TX3DPrototype;
X3DInterfaceDeclaration40: TX3DInterfaceDeclaration;
SFVec3f41: TSFVec3f;
SFNode42: TSFNode;
Sphere43: TSphereNode;
X3DPrototype44: TX3DPrototype;
Transform45: TTransformNode;
X3DPrototype47: TX3DPrototypeNode;
SFVec3f48: TSFVec3f;
X3DPrototype50: TX3DPrototypeNode;
SFVec3f51: TSFVec3f;
X3DPrototype53: TX3DPrototypeNode;
SFVec3f54: TSFVec3f;
X3DPrototype56: TX3DPrototype;
X3DInterfaceDeclaration57: TX3DInterfaceDeclaration;
SFVec3f58: TSFVec3f;
SFNode59: TSFNode;
Sphere60: TSphereNode;
X3DPrototype61: TX3DPrototype;
Transform62: TTransformNode;
X3DPrototype64: TX3DPrototypeNode;
SFVec3f65: TSFVec3f;
X3DPrototype67: TX3DPrototypeNode;
SFVec3f68: TSFVec3f;
X3DPrototype70: TX3DPrototypeNode;
SFVec3f71: TSFVec3f;
X3DPrototype73: TX3DPrototypeNode;
SFVec3f74: TSFVec3f;
SFNode75: TSFNode;
Box76: TBoxNode;

procedure InitrubikOnFirePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rubikOnFire.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a white rubik cube';
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
SFNode13 := TSFNode.CreateUndefined(X3DInterfaceDeclaration11, false, 'myShape');
Sphere14 := TSphereNode.Create;;
{ METHOD .AddSphere }
SFNode13.AddSphere([Sphere14]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration11.AddSFNode([SFNode13]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype15 := TX3DPrototype.Create;;
Transform16 := TTransformNode.Create;;
Shape18 := TShapeNode.Create;;
Appearance20 := TAppearanceNode.Create;
end;

procedure InitrubikOnFirePart1;
begin
;
Material21 := TMaterialNode.Create;;
Material21.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance20.Material := Material21;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape18.Appearance := Appearance20;
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape18);
{ METHOD .AddTransform }
X3DPrototype15.AddTransform([Transform16]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype22 := TX3DPrototype.Create;;
X3DInterfaceDeclaration23 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f24 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration23, false, 'ytranslation');
SFVec3f24.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration23.AddSFVec3f([SFVec3f24]);
SFNode25 := TSFNode.CreateUndefined(X3DInterfaceDeclaration23, false, 'myShape');
Sphere26 := TSphereNode.Create;;
{ METHOD .AddSphere }
SFNode25.AddSphere([Sphere26]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration23.AddSFNode([SFNode25]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype22.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration23]);
X3DPrototype27 := TX3DPrototype.Create;;
Transform28 := TTransformNode.Create;;
X3DPrototype30 := TX3DPrototypeNode;
SFVec3f31 := TSFVec3f.CreateUndefined(X3DPrototype30, false, 'xtranslation');
SFVec3f31.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype30.AddSFVec3f([SFVec3f31]);
{ METHOD .AddX3DPrototype }
Transform28.AddX3DPrototype([X3DPrototype30]);
X3DPrototype33 := TX3DPrototypeNode;
SFVec3f34 := TSFVec3f.CreateUndefined(X3DPrototype33, false, 'xtranslation');
SFVec3f34.Value := '2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype33.AddSFVec3f([SFVec3f34]);
{ METHOD .AddX3DPrototype }
Transform28.AddX3DPrototype([X3DPrototype33]);
X3DPrototype36 := TX3DPrototypeNode;
SFVec3f37 := TSFVec3f.CreateUndefined(X3DPrototype36, false, 'xtranslation');
SFVec3f37.Value := '-2 0 0';
end;

procedure InitrubikOnFirePart2;
begin

{ METHOD .AddSFVec3f }
X3DPrototype36.AddSFVec3f([SFVec3f37]);
{ METHOD .AddX3DPrototype }
Transform28.AddX3DPrototype([X3DPrototype36]);
{ METHOD .AddTransform }
X3DPrototype27.AddTransform([Transform28]);
{ METHOD .AddX3DPrototype }
X3DPrototype22.AddX3DPrototype([X3DPrototype27]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype22]);
X3DPrototype39 := TX3DPrototype.Create;;
X3DInterfaceDeclaration40 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f41 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration40, false, 'ztranslation');
SFVec3f41.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration40.AddSFVec3f([SFVec3f41]);
SFNode42 := TSFNode.CreateUndefined(X3DInterfaceDeclaration40, false, 'myShape');
Sphere43 := TSphereNode.Create;;
{ METHOD .AddSphere }
SFNode42.AddSphere([Sphere43]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration40.AddSFNode([SFNode42]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype39.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration40]);
X3DPrototype44 := TX3DPrototype.Create;;
Transform45 := TTransformNode.Create;;
X3DPrototype47 := TX3DPrototypeNode;
SFVec3f48 := TSFVec3f.CreateUndefined(X3DPrototype47, false, 'ytranslation');
SFVec3f48.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype47.AddSFVec3f([SFVec3f48]);
{ METHOD .AddX3DPrototype }
Transform45.AddX3DPrototype([X3DPrototype47]);
X3DPrototype50 := TX3DPrototypeNode;
SFVec3f51 := TSFVec3f.CreateUndefined(X3DPrototype50, false, 'ytranslation');
SFVec3f51.Value := '0 2 0';
{ METHOD .AddSFVec3f }
X3DPrototype50.AddSFVec3f([SFVec3f51]);
{ METHOD .AddX3DPrototype }
Transform45.AddX3DPrototype([X3DPrototype50]);
X3DPrototype53 := TX3DPrototypeNode;
SFVec3f54 := TSFVec3f.CreateUndefined(X3DPrototype53, false, 'ytranslation');
SFVec3f54.Value := '0 -2 0';
{ METHOD .AddSFVec3f }
X3DPrototype53.AddSFVec3f([SFVec3f54]);
{ METHOD .AddX3DPrototype }
Transform45.AddX3DPrototype([X3DPrototype53]);
{ METHOD .AddTransform }
X3DPrototype44.AddTransform([Transform45]);
{ METHOD .AddX3DPrototype }
X3DPrototype39.AddX3DPrototype([X3DPrototype44]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype39]);
end;

procedure InitrubikOnFirePart3;
begin

X3DPrototype56 := TX3DPrototype.Create;;
X3DInterfaceDeclaration57 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f58 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration57, false, 'ttranslation');
SFVec3f58.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration57.AddSFVec3f([SFVec3f58]);
SFNode59 := TSFNode.CreateUndefined(X3DInterfaceDeclaration57, false, 'myShape');
Sphere60 := TSphereNode.Create;;
{ METHOD .AddSphere }
SFNode59.AddSphere([Sphere60]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration57.AddSFNode([SFNode59]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype56.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration57]);
X3DPrototype61 := TX3DPrototype.Create;;
Transform62 := TTransformNode.Create;;
X3DPrototype64 := TX3DPrototypeNode;
SFVec3f65 := TSFVec3f.CreateUndefined(X3DPrototype64, false, 'ztranslation');
SFVec3f65.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype64.AddSFVec3f([SFVec3f65]);
{ METHOD .AddX3DPrototype }
Transform62.AddX3DPrototype([X3DPrototype64]);
X3DPrototype67 := TX3DPrototypeNode;
SFVec3f68 := TSFVec3f.CreateUndefined(X3DPrototype67, false, 'ztranslation');
SFVec3f68.Value := '0 0 2';
{ METHOD .AddSFVec3f }
X3DPrototype67.AddSFVec3f([SFVec3f68]);
{ METHOD .AddX3DPrototype }
Transform62.AddX3DPrototype([X3DPrototype67]);
X3DPrototype70 := TX3DPrototypeNode;
SFVec3f71 := TSFVec3f.CreateUndefined(X3DPrototype70, false, 'ztranslation');
SFVec3f71.Value := '0 0 -2';
{ METHOD .AddSFVec3f }
X3DPrototype70.AddSFVec3f([SFVec3f71]);
{ METHOD .AddX3DPrototype }
Transform62.AddX3DPrototype([X3DPrototype70]);
{ METHOD .AddTransform }
X3DPrototype61.AddTransform([Transform62]);
{ METHOD .AddX3DPrototype }
X3DPrototype56.AddX3DPrototype([X3DPrototype61]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype56]);
X3DPrototype73 := TX3DPrototypeNode;
SFVec3f74 := TSFVec3f.CreateUndefined(X3DPrototype73, false, 'ttranslation');
SFVec3f74.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype73.AddSFVec3f([SFVec3f74]);
SFNode75 := TSFNode.CreateUndefined(X3DPrototype73, false, 'myShape');
end;

procedure InitrubikOnFirePart4;
begin

Box76 := TBoxNode.Create;;
Box76.Size := Vector3(1,1,1);
{ METHOD .AddBox }
SFNode75.AddBox([Box76]);
{ METHOD .AddSFNode }
X3DPrototype73.AddSFNode([SFNode75]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype73]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreaterubikOnFire: TX3DRootNode;
begin
InitrubikOnFirePart0;
InitrubikOnFirePart1;
InitrubikOnFirePart2;
InitrubikOnFirePart3;
InitrubikOnFirePart4;
Result := X3D0;
end;

begin
end.
