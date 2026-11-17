unit rubikOnFire;

interface

uses X3DNodes;

function CreaterubikOnFire: TX3DRootNode;

implementation

uses CastleVectors;

function CreaterubikOnFire: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
X3DField13: TX3DField;
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
X3DField26: TX3DField;
X3DField27: TX3DField;
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
X3DField47: TX3DField;
X3DField48: TX3DField;
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
X3DField68: TX3DField;
X3DField69: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rubikOnFire.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d';
X3D0.Meta['description'] := 'a white rubik cube';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['ANY','EXAMINE','WALK','FLY','LOOKAT']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube on Fire';
Viewpoint9.Position := Vector3(0,0,12);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'anyShape';
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'xtranslation';
X3DField12.AccessType := 'inputOutput';
X3DField12.Type := 'SFVec3f';
X3DField12.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField12;
X3DField13 := TX3DField.Create;
X3DField13.NameField := 'myShape';
X3DField13.AccessType := 'inputOutput';
X3DField13.Type := 'SFNode';
Sphere14 := TSphereNode.Create;
{ .SetSphere }
X3DField13.Sphere := Sphere14;
{ .AddX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField13;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype15 := TX3DPrototype.Create;
Transform16 := TTransformNode.Create;
IS17 := TIS.Create;
connect18 := Tconnect.Create;
connect18.NodeField := 'translation';
connect18.ProtoField := 'xtranslation';
{ .AddConnect }
IS17.Connect := connect18;
{ .SetIS }
Transform16.IS := IS17;
Shape19 := TShapeNode.Create;
IS20 := TIS.Create;
connect21 := Tconnect.Create;
connect21.NodeField := 'geometry';
connect21.ProtoField := 'myShape';
{ .AddConnect }
IS20.Connect := connect21;
{ .SetIS }
Shape19.IS := IS20;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape19.Appearance := Appearance22;
{ .AddChild }
Transform16.AddChildren([Shape19]);
{ .SetTransform }
X3DPrototype15.Transform := Transform16;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype15;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype10;
X3DPrototype24 := TX3DPrototype.Create;
X3DPrototype24.NameField := 'three';
X3DInterfaceDeclaration25 := TX3DInterfaceDeclaration.Create(nil);
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'ytranslation';
X3DField26.AccessType := 'inputOutput';
X3DField26.Type := 'SFVec3f';
X3DField26.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration25.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'myShape';
X3DField27.AccessType := 'inputOutput';
X3DField27.Type := 'SFNode';
Sphere28 := TSphereNode.Create;
{ .SetSphere }
X3DField27.Sphere := Sphere28;
{ .AddX3DField }
X3DInterfaceDeclaration25.X3DField := X3DField27;
{ .SetX3DInterfaceDeclaration }
X3DPrototype24.X3DInterfaceDeclaration := X3DInterfaceDeclaration25;
X3DPrototype29 := TX3DPrototype.Create;
Transform30 := TTransformNode.Create;
IS31 := TIS.Create;
connect32 := Tconnect.Create;
connect32.NodeField := 'translation';
connect32.ProtoField := 'ytranslation';
{ .AddConnect }
IS31.Connect := connect32;
{ .SetIS }
Transform30.IS := IS31;
X3DPrototype33 := TX3DPrototypeNode.Create;
X3DPrototype33.NameField := 'anyShape';
SFVec3f34 := TSFVec3f.Create(anyShape2, false, 'xtranslation', Vector3(0,0,0));
SFVec3f34.NameField := 'xtranslation';
SFVec3f34.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype33.SFVec3f := SFVec3f34;
IS35 := TIS.Create;
connect36 := Tconnect.Create;
connect36.NodeField := 'myShape';
connect36.ProtoField := 'myShape';
{ .AddConnect }
IS35.Connect := connect36;
{ .SetIS }
X3DPrototype33.IS := IS35;
{ .AddX3DPrototype }
Transform30.X3DPrototype := X3DPrototype33;
X3DPrototype37 := TX3DPrototypeNode.Create;
X3DPrototype37.NameField := 'anyShape';
SFVec3f38 := TSFVec3f.Create(anyShape2, false, 'xtranslation', Vector3(2,0,0));
SFVec3f38.NameField := 'xtranslation';
SFVec3f38.Value := '2 0 0';
{ .SetSFVec3f }
X3DPrototype37.SFVec3f := SFVec3f38;
IS39 := TIS.Create;
connect40 := Tconnect.Create;
connect40.NodeField := 'myShape';
connect40.ProtoField := 'myShape';
{ .AddConnect }
IS39.Connect := connect40;
{ .SetIS }
X3DPrototype37.IS := IS39;
{ .AddX3DPrototype }
Transform30.X3DPrototype := X3DPrototype37;
X3DPrototype41 := TX3DPrototypeNode.Create;
X3DPrototype41.NameField := 'anyShape';
SFVec3f42 := TSFVec3f.Create(anyShape2, false, 'xtranslation', Vector3(-2,0,0));
SFVec3f42.NameField := 'xtranslation';
SFVec3f42.Value := '-2 0 0';
{ .SetSFVec3f }
X3DPrototype41.SFVec3f := SFVec3f42;
IS43 := TIS.Create;
connect44 := Tconnect.Create;
connect44.NodeField := 'myShape';
connect44.ProtoField := 'myShape';
{ .AddConnect }
IS43.Connect := connect44;
{ .SetIS }
X3DPrototype41.IS := IS43;
{ .AddX3DPrototype }
Transform30.X3DPrototype := X3DPrototype41;
{ .SetTransform }
X3DPrototype29.Transform := Transform30;
{ .AddX3DPrototype }
X3DPrototype24.X3DPrototype := X3DPrototype29;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype24;
X3DPrototype45 := TX3DPrototype.Create;
X3DPrototype45.NameField := 'nine';
X3DInterfaceDeclaration46 := TX3DInterfaceDeclaration.Create(nil);
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'ztranslation';
X3DField47.AccessType := 'inputOutput';
X3DField47.Type := 'SFVec3f';
X3DField47.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration46.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'myShape';
X3DField48.AccessType := 'inputOutput';
X3DField48.Type := 'SFNode';
Sphere49 := TSphereNode.Create;
{ .SetSphere }
X3DField48.Sphere := Sphere49;
{ .AddX3DField }
X3DInterfaceDeclaration46.X3DField := X3DField48;
{ .SetX3DInterfaceDeclaration }
X3DPrototype45.X3DInterfaceDeclaration := X3DInterfaceDeclaration46;
X3DPrototype50 := TX3DPrototype.Create;
Transform51 := TTransformNode.Create;
IS52 := TIS.Create;
connect53 := Tconnect.Create;
connect53.NodeField := 'translation';
connect53.ProtoField := 'ztranslation';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
Transform51.IS := IS52;
X3DPrototype54 := TX3DPrototypeNode.Create;
X3DPrototype54.NameField := 'three';
SFVec3f55 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,0,0));
SFVec3f55.NameField := 'ytranslation';
SFVec3f55.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype54.SFVec3f := SFVec3f55;
IS56 := TIS.Create;
connect57 := Tconnect.Create;
connect57.NodeField := 'myShape';
connect57.ProtoField := 'myShape';
{ .AddConnect }
IS56.Connect := connect57;
{ .SetIS }
X3DPrototype54.IS := IS56;
{ .AddX3DPrototype }
Transform51.X3DPrototype := X3DPrototype54;
X3DPrototype58 := TX3DPrototypeNode.Create;
X3DPrototype58.NameField := 'three';
SFVec3f59 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,2,0));
SFVec3f59.NameField := 'ytranslation';
SFVec3f59.Value := '0 2 0';
{ .SetSFVec3f }
X3DPrototype58.SFVec3f := SFVec3f59;
IS60 := TIS.Create;
connect61 := Tconnect.Create;
connect61.NodeField := 'myShape';
connect61.ProtoField := 'myShape';
{ .AddConnect }
IS60.Connect := connect61;
{ .SetIS }
X3DPrototype58.IS := IS60;
{ .AddX3DPrototype }
Transform51.X3DPrototype := X3DPrototype58;
X3DPrototype62 := TX3DPrototypeNode.Create;
X3DPrototype62.NameField := 'three';
SFVec3f63 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,-2,0));
SFVec3f63.NameField := 'ytranslation';
SFVec3f63.Value := '0 -2 0';
{ .SetSFVec3f }
X3DPrototype62.SFVec3f := SFVec3f63;
IS64 := TIS.Create;
connect65 := Tconnect.Create;
connect65.NodeField := 'myShape';
connect65.ProtoField := 'myShape';
{ .AddConnect }
IS64.Connect := connect65;
{ .SetIS }
X3DPrototype62.IS := IS64;
{ .AddX3DPrototype }
Transform51.X3DPrototype := X3DPrototype62;
{ .SetTransform }
X3DPrototype50.Transform := Transform51;
{ .AddX3DPrototype }
X3DPrototype45.X3DPrototype := X3DPrototype50;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype45;
X3DPrototype66 := TX3DPrototype.Create;
X3DPrototype66.NameField := 'twentyseven';
X3DInterfaceDeclaration67 := TX3DInterfaceDeclaration.Create(nil);
X3DField68 := TX3DField.Create;
X3DField68.NameField := 'ttranslation';
X3DField68.AccessType := 'inputOutput';
X3DField68.Type := 'SFVec3f';
X3DField68.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration67.X3DField := X3DField68;
X3DField69 := TX3DField.Create;
X3DField69.NameField := 'myShape';
X3DField69.AccessType := 'inputOutput';
X3DField69.Type := 'SFNode';
Sphere70 := TSphereNode.Create;
{ .SetSphere }
X3DField69.Sphere := Sphere70;
{ .AddX3DField }
X3DInterfaceDeclaration67.X3DField := X3DField69;
{ .SetX3DInterfaceDeclaration }
X3DPrototype66.X3DInterfaceDeclaration := X3DInterfaceDeclaration67;
X3DPrototype71 := TX3DPrototype.Create;
Transform72 := TTransformNode.Create;
IS73 := TIS.Create;
connect74 := Tconnect.Create;
connect74.NodeField := 'translation';
connect74.ProtoField := 'ttranslation';
{ .AddConnect }
IS73.Connect := connect74;
{ .SetIS }
Transform72.IS := IS73;
X3DPrototype75 := TX3DPrototypeNode.Create;
X3DPrototype75.NameField := 'nine';
SFVec3f76 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,0));
SFVec3f76.NameField := 'ztranslation';
SFVec3f76.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype75.SFVec3f := SFVec3f76;
IS77 := TIS.Create;
connect78 := Tconnect.Create;
connect78.NodeField := 'myShape';
connect78.ProtoField := 'myShape';
{ .AddConnect }
IS77.Connect := connect78;
{ .SetIS }
X3DPrototype75.IS := IS77;
{ .AddX3DPrototype }
Transform72.X3DPrototype := X3DPrototype75;
X3DPrototype79 := TX3DPrototypeNode.Create;
X3DPrototype79.NameField := 'nine';
SFVec3f80 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,2));
SFVec3f80.NameField := 'ztranslation';
SFVec3f80.Value := '0 0 2';
{ .SetSFVec3f }
X3DPrototype79.SFVec3f := SFVec3f80;
IS81 := TIS.Create;
connect82 := Tconnect.Create;
connect82.NodeField := 'myShape';
connect82.ProtoField := 'myShape';
{ .AddConnect }
IS81.Connect := connect82;
{ .SetIS }
X3DPrototype79.IS := IS81;
{ .AddX3DPrototype }
Transform72.X3DPrototype := X3DPrototype79;
X3DPrototype83 := TX3DPrototypeNode.Create;
X3DPrototype83.NameField := 'nine';
SFVec3f84 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,-2));
SFVec3f84.NameField := 'ztranslation';
SFVec3f84.Value := '0 0 -2';
{ .SetSFVec3f }
X3DPrototype83.SFVec3f := SFVec3f84;
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'myShape';
connect86.ProtoField := 'myShape';
{ .AddConnect }
IS85.Connect := connect86;
{ .SetIS }
X3DPrototype83.IS := IS85;
{ .AddX3DPrototype }
Transform72.X3DPrototype := X3DPrototype83;
{ .SetTransform }
X3DPrototype71.Transform := Transform72;
{ .AddX3DPrototype }
X3DPrototype66.X3DPrototype := X3DPrototype71;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype66;
X3DPrototype87 := TX3DPrototypeNode.Create;
X3DPrototype87.NameField := 'twentyseven';
SFVec3f88 := TSFVec3f.Create(twentyseven4, false, 'ttranslation', Vector3(0,0,0));
SFVec3f88.NameField := 'ttranslation';
SFVec3f88.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype87.SFVec3f := SFVec3f88;
SFNode89 := TSFNode.Create;
SFNode89.NameField := 'myShape';
Box90 := TBoxNode.Create;
Box90.Size := Vector3(1,1,1);
{ .SetBox }
SFNode89.Box := Box90;
{ .AddSFNode }
X3DPrototype87.SFNode := SFNode89;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype87;
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
