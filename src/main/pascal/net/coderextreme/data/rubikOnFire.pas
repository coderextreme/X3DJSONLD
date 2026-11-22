unit rubikOnFire;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
IS17: TIS;
connect18: Tconnect;
Shape19: TShapeNode;
IS20: TIS;
connect21: Tconnect;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
X3DPrototype24: TX3DPrototype;
X3DInterfaceDeclaration25: TX3DInterfaceDeclaration;
SFVec3f26: TSFVec3f;
SFNode27: TSFNode;
Sphere28: TSphereNode;
X3DPrototype29: TX3DPrototype;
Transform30: TTransformNode;
IS31: TIS;
connect32: Tconnect;
X3DPrototype33: TX3DPrototypeNode;
SFVec3f34: TSFVec3f;
IS35: TIS;
connect36: Tconnect;
X3DPrototype37: TX3DPrototypeNode;
SFVec3f38: TSFVec3f;
IS39: TIS;
connect40: Tconnect;
X3DPrototype41: TX3DPrototypeNode;
SFVec3f42: TSFVec3f;
IS43: TIS;
connect44: Tconnect;
X3DPrototype45: TX3DPrototype;
X3DInterfaceDeclaration46: TX3DInterfaceDeclaration;
SFVec3f47: TSFVec3f;
SFNode48: TSFNode;
Sphere49: TSphereNode;
X3DPrototype50: TX3DPrototype;
Transform51: TTransformNode;
IS52: TIS;
connect53: Tconnect;
X3DPrototype54: TX3DPrototypeNode;
SFVec3f55: TSFVec3f;
IS56: TIS;
connect57: Tconnect;
X3DPrototype58: TX3DPrototypeNode;
SFVec3f59: TSFVec3f;
IS60: TIS;
connect61: Tconnect;
X3DPrototype62: TX3DPrototypeNode;
SFVec3f63: TSFVec3f;
IS64: TIS;
connect65: Tconnect;
X3DPrototype66: TX3DPrototype;
X3DInterfaceDeclaration67: TX3DInterfaceDeclaration;
SFVec3f68: TSFVec3f;
SFNode69: TSFNode;
Sphere70: TSphereNode;
X3DPrototype71: TX3DPrototype;
Transform72: TTransformNode;
IS73: TIS;
connect74: Tconnect;
X3DPrototype75: TX3DPrototypeNode;
SFVec3f76: TSFVec3f;
IS77: TIS;
connect78: Tconnect;
X3DPrototype79: TX3DPrototypeNode;
SFVec3f80: TSFVec3f;
IS81: TIS;
connect82: Tconnect;
X3DPrototype83: TX3DPrototypeNode;
SFVec3f84: TSFVec3f;
IS85: TIS;
connect86: Tconnect;
X3DPrototype87: TX3DPrototypeNode;
SFVec3f88: TSFVec3f;
SFNode89: TSFNode;
Box90: TBoxNode;

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
SFNode13 := TSFNode.CreateUndefined(X3DInterfaceDeclaration11, false, 'myShape');
Sphere14 := TSphereNode.Create;
{ METHOD .AddSphere }
SFNode13.AddSphere([Sphere14]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration11.AddSFNode([SFNode13]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype15 := TX3DPrototype.Create;
Transform16 := TTransformNode.Create;
IS17 := TIS.Create;
connect18 := Tconnect.Create;
connect18.NodeField := 'translation';
connect18.ProtoField := 'xtranslation';
{ METHOD .Connect }
IS17.Connect := connect18;
{ METHOD .IS }
Transform16.IS := IS17;
Shape19 := TShapeNode.Create;
IS20 := TIS.Create;
connect21 := Tconnect.Create;
connect21.NodeField := 'geometry';
connect21.ProtoField := 'myShape';
end;

procedure InitrubikOnFirePart1;
begin

{ METHOD .Connect }
IS20.Connect := connect21;
{ METHOD .IS }
Shape19.IS := IS20;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
{ METHOD .Appearance }
Shape19.Appearance := Appearance22;
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Shape19);
{ METHOD .AddTransform }
X3DPrototype15.AddTransform([Transform16]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype24 := TX3DPrototype.Create;
X3DInterfaceDeclaration25 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f26 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration25, false, 'ytranslation');
SFVec3f26.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration25.AddSFVec3f([SFVec3f26]);
SFNode27 := TSFNode.CreateUndefined(X3DInterfaceDeclaration25, false, 'myShape');
Sphere28 := TSphereNode.Create;
{ METHOD .AddSphere }
SFNode27.AddSphere([Sphere28]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration25.AddSFNode([SFNode27]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype24.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration25]);
X3DPrototype29 := TX3DPrototype.Create;
Transform30 := TTransformNode.Create;
IS31 := TIS.Create;
connect32 := Tconnect.Create;
connect32.NodeField := 'translation';
connect32.ProtoField := 'ytranslation';
{ METHOD .Connect }
IS31.Connect := connect32;
{ METHOD .IS }
Transform30.IS := IS31;
X3DPrototype33 := TX3DPrototypeNode.Create;
SFVec3f34 := TSFVec3f.CreateUndefined(X3DPrototype33, false, 'xtranslation');
SFVec3f34.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype33.AddSFVec3f([SFVec3f34]);
IS35 := TIS.Create;
connect36 := Tconnect.Create;
connect36.NodeField := 'myShape';
connect36.ProtoField := 'myShape';
{ METHOD .Connect }
IS35.Connect := connect36;
{ METHOD .SetIS }
X3DPrototype33.IS := IS35;
{ METHOD .AddX3DPrototype }
Transform30.AddX3DPrototype([X3DPrototype33]);
end;

procedure InitrubikOnFirePart2;
begin

X3DPrototype37 := TX3DPrototypeNode.Create;
SFVec3f38 := TSFVec3f.CreateUndefined(X3DPrototype37, false, 'xtranslation');
SFVec3f38.Value := '2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype37.AddSFVec3f([SFVec3f38]);
IS39 := TIS.Create;
connect40 := Tconnect.Create;
connect40.NodeField := 'myShape';
connect40.ProtoField := 'myShape';
{ METHOD .Connect }
IS39.Connect := connect40;
{ METHOD .SetIS }
X3DPrototype37.IS := IS39;
{ METHOD .AddX3DPrototype }
Transform30.AddX3DPrototype([X3DPrototype37]);
X3DPrototype41 := TX3DPrototypeNode.Create;
SFVec3f42 := TSFVec3f.CreateUndefined(X3DPrototype41, false, 'xtranslation');
SFVec3f42.Value := '-2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype41.AddSFVec3f([SFVec3f42]);
IS43 := TIS.Create;
connect44 := Tconnect.Create;
connect44.NodeField := 'myShape';
connect44.ProtoField := 'myShape';
{ METHOD .Connect }
IS43.Connect := connect44;
{ METHOD .SetIS }
X3DPrototype41.IS := IS43;
{ METHOD .AddX3DPrototype }
Transform30.AddX3DPrototype([X3DPrototype41]);
{ METHOD .AddTransform }
X3DPrototype29.AddTransform([Transform30]);
{ METHOD .AddX3DPrototype }
X3DPrototype24.AddX3DPrototype([X3DPrototype29]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype24]);
X3DPrototype45 := TX3DPrototype.Create;
X3DInterfaceDeclaration46 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f47 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration46, false, 'ztranslation');
SFVec3f47.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration46.AddSFVec3f([SFVec3f47]);
SFNode48 := TSFNode.CreateUndefined(X3DInterfaceDeclaration46, false, 'myShape');
Sphere49 := TSphereNode.Create;
{ METHOD .AddSphere }
SFNode48.AddSphere([Sphere49]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration46.AddSFNode([SFNode48]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype45.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration46]);
X3DPrototype50 := TX3DPrototype.Create;
Transform51 := TTransformNode.Create;
IS52 := TIS.Create;
connect53 := Tconnect.Create;
connect53.NodeField := 'translation';
end;

procedure InitrubikOnFirePart3;
begin

connect53.ProtoField := 'ztranslation';
{ METHOD .Connect }
IS52.Connect := connect53;
{ METHOD .IS }
Transform51.IS := IS52;
X3DPrototype54 := TX3DPrototypeNode.Create;
SFVec3f55 := TSFVec3f.CreateUndefined(X3DPrototype54, false, 'ytranslation');
SFVec3f55.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype54.AddSFVec3f([SFVec3f55]);
IS56 := TIS.Create;
connect57 := Tconnect.Create;
connect57.NodeField := 'myShape';
connect57.ProtoField := 'myShape';
{ METHOD .Connect }
IS56.Connect := connect57;
{ METHOD .SetIS }
X3DPrototype54.IS := IS56;
{ METHOD .AddX3DPrototype }
Transform51.AddX3DPrototype([X3DPrototype54]);
X3DPrototype58 := TX3DPrototypeNode.Create;
SFVec3f59 := TSFVec3f.CreateUndefined(X3DPrototype58, false, 'ytranslation');
SFVec3f59.Value := '0 2 0';
{ METHOD .AddSFVec3f }
X3DPrototype58.AddSFVec3f([SFVec3f59]);
IS60 := TIS.Create;
connect61 := Tconnect.Create;
connect61.NodeField := 'myShape';
connect61.ProtoField := 'myShape';
{ METHOD .Connect }
IS60.Connect := connect61;
{ METHOD .SetIS }
X3DPrototype58.IS := IS60;
{ METHOD .AddX3DPrototype }
Transform51.AddX3DPrototype([X3DPrototype58]);
X3DPrototype62 := TX3DPrototypeNode.Create;
SFVec3f63 := TSFVec3f.CreateUndefined(X3DPrototype62, false, 'ytranslation');
SFVec3f63.Value := '0 -2 0';
{ METHOD .AddSFVec3f }
X3DPrototype62.AddSFVec3f([SFVec3f63]);
IS64 := TIS.Create;
connect65 := Tconnect.Create;
connect65.NodeField := 'myShape';
connect65.ProtoField := 'myShape';
{ METHOD .Connect }
IS64.Connect := connect65;
{ METHOD .SetIS }
X3DPrototype62.IS := IS64;
{ METHOD .AddX3DPrototype }
Transform51.AddX3DPrototype([X3DPrototype62]);
{ METHOD .AddTransform }
X3DPrototype50.AddTransform([Transform51]);
{ METHOD .AddX3DPrototype }
X3DPrototype45.AddX3DPrototype([X3DPrototype50]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype45]);
X3DPrototype66 := TX3DPrototype.Create;
end;

procedure InitrubikOnFirePart4;
begin

X3DInterfaceDeclaration67 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f68 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration67, false, 'ttranslation');
SFVec3f68.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration67.AddSFVec3f([SFVec3f68]);
SFNode69 := TSFNode.CreateUndefined(X3DInterfaceDeclaration67, false, 'myShape');
Sphere70 := TSphereNode.Create;
{ METHOD .AddSphere }
SFNode69.AddSphere([Sphere70]);
{ METHOD .AddSFNode }
X3DInterfaceDeclaration67.AddSFNode([SFNode69]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype66.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration67]);
X3DPrototype71 := TX3DPrototype.Create;
Transform72 := TTransformNode.Create;
IS73 := TIS.Create;
connect74 := Tconnect.Create;
connect74.NodeField := 'translation';
connect74.ProtoField := 'ttranslation';
{ METHOD .Connect }
IS73.Connect := connect74;
{ METHOD .IS }
Transform72.IS := IS73;
X3DPrototype75 := TX3DPrototypeNode.Create;
SFVec3f76 := TSFVec3f.CreateUndefined(X3DPrototype75, false, 'ztranslation');
SFVec3f76.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype75.AddSFVec3f([SFVec3f76]);
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'myShape';
connect78.ProtoField := 'myShape';
{ METHOD .Connect }
IS77.Connect := connect78;
{ METHOD .SetIS }
X3DPrototype75.IS := IS77;
{ METHOD .AddX3DPrototype }
Transform72.AddX3DPrototype([X3DPrototype75]);
X3DPrototype79 := TX3DPrototypeNode.Create;
SFVec3f80 := TSFVec3f.CreateUndefined(X3DPrototype79, false, 'ztranslation');
SFVec3f80.Value := '0 0 2';
{ METHOD .AddSFVec3f }
X3DPrototype79.AddSFVec3f([SFVec3f80]);
IS81 := TIS.Create;
connect82 := Tconnect.Create;
connect82.NodeField := 'myShape';
connect82.ProtoField := 'myShape';
{ METHOD .Connect }
IS81.Connect := connect82;
{ METHOD .SetIS }
X3DPrototype79.IS := IS81;
{ METHOD .AddX3DPrototype }
Transform72.AddX3DPrototype([X3DPrototype79]);
X3DPrototype83 := TX3DPrototypeNode.Create;
end;

procedure InitrubikOnFirePart5;
begin

SFVec3f84 := TSFVec3f.CreateUndefined(X3DPrototype83, false, 'ztranslation');
SFVec3f84.Value := '0 0 -2';
{ METHOD .AddSFVec3f }
X3DPrototype83.AddSFVec3f([SFVec3f84]);
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'myShape';
connect86.ProtoField := 'myShape';
{ METHOD .Connect }
IS85.Connect := connect86;
{ METHOD .SetIS }
X3DPrototype83.IS := IS85;
{ METHOD .AddX3DPrototype }
Transform72.AddX3DPrototype([X3DPrototype83]);
{ METHOD .AddTransform }
X3DPrototype71.AddTransform([Transform72]);
{ METHOD .AddX3DPrototype }
X3DPrototype66.AddX3DPrototype([X3DPrototype71]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype66]);
X3DPrototype87 := TX3DPrototypeNode.Create;
SFVec3f88 := TSFVec3f.CreateUndefined(X3DPrototype87, false, 'ttranslation');
SFVec3f88.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype87.AddSFVec3f([SFVec3f88]);
SFNode89 := TSFNode.CreateUndefined(X3DPrototype87, false, 'myShape');
Box90 := TBoxNode.Create;
Box90.Size := Vector3(1,1,1);
{ METHOD .AddBox }
SFNode89.AddBox([Box90]);
{ METHOD .AddSFNode }
X3DPrototype87.AddSFNode([SFNode89]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype87]);
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
InitrubikOnFirePart5;
Result := X3D0;
end;

begin
end.
