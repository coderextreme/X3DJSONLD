unit rubikFurnace;

interface

uses X3DNodes;

function CreaterubikFurnace: TX3DRootNode;

implementation

uses CastleVectors;

function CreaterubikFurnace: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
X3DField13: TX3DField;
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
X3DField25: TX3DField;
X3DField26: TX3DField;
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
X3DField49: TX3DField;
X3DField50: TX3DField;
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
X3DField73: TX3DField;
X3DField74: TX3DField;
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
Shape98: TShapeNode;
Box99: TBoxNode;
Appearance100: TAppearanceNode;
Material101: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rubikFurnace.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d';
X3D0.Meta['description'] := 'a green rubik cube';
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
X3DField13.Type := 'MFNode';
Shape14 := TShapeNode.Create;
Sphere15 := TSphereNode.Create;
{ .SetGeometry }
Shape14.Geometry := Sphere15;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape14.Appearance := Appearance16;
{ .SetShape }
X3DField13.Shape := Shape14;
{ .AddX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField13;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype18 := TX3DPrototype.Create;
Transform19 := TTransformNode.Create;
IS20 := TIS.Create;
connect21 := Tconnect.Create;
connect21.NodeField := 'translation';
connect21.ProtoField := 'xtranslation';
{ .AddConnect }
IS20.Connect := connect21;
connect22 := Tconnect.Create;
connect22.NodeField := 'children';
connect22.ProtoField := 'myShape';
{ .AddConnect }
IS20.Connect := connect22;
{ .SetIS }
Transform19.IS := IS20;
{ .SetTransform }
X3DPrototype18.Transform := Transform19;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype18;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype10;
X3DPrototype23 := TX3DPrototype.Create;
X3DPrototype23.NameField := 'three';
X3DInterfaceDeclaration24 := TX3DInterfaceDeclaration.Create(nil);
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'ytranslation';
X3DField25.AccessType := 'inputOutput';
X3DField25.Type := 'SFVec3f';
X3DField25.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration24.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'myShape';
X3DField26.AccessType := 'inputOutput';
X3DField26.Type := 'MFNode';
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
{ .SetGeometry }
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance29.Material := Material30;
{ .SetAppearance }
Shape27.Appearance := Appearance29;
{ .SetShape }
X3DField26.Shape := Shape27;
{ .AddX3DField }
X3DInterfaceDeclaration24.X3DField := X3DField26;
{ .SetX3DInterfaceDeclaration }
X3DPrototype23.X3DInterfaceDeclaration := X3DInterfaceDeclaration24;
X3DPrototype31 := TX3DPrototype.Create;
Transform32 := TTransformNode.Create;
IS33 := TIS.Create;
connect34 := Tconnect.Create;
connect34.NodeField := 'translation';
connect34.ProtoField := 'ytranslation';
{ .AddConnect }
IS33.Connect := connect34;
{ .SetIS }
Transform32.IS := IS33;
X3DPrototype35 := TX3DPrototypeNode.Create;
X3DPrototype35.NameField := 'anyShape';
SFVec3f36 := TSFVec3f.Create(anyShape2, false, 'xtranslation', Vector3(0,0,0));
SFVec3f36.NameField := 'xtranslation';
SFVec3f36.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype35.SFVec3f := SFVec3f36;
IS37 := TIS.Create;
connect38 := Tconnect.Create;
connect38.NodeField := 'myShape';
connect38.ProtoField := 'myShape';
{ .AddConnect }
IS37.Connect := connect38;
{ .SetIS }
X3DPrototype35.IS := IS37;
{ .AddX3DPrototype }
Transform32.X3DPrototype := X3DPrototype35;
X3DPrototype39 := TX3DPrototypeNode.Create;
X3DPrototype39.NameField := 'anyShape';
SFVec3f40 := TSFVec3f.Create(anyShape2, false, 'xtranslation', Vector3(2,0,0));
SFVec3f40.NameField := 'xtranslation';
SFVec3f40.Value := '2 0 0';
{ .SetSFVec3f }
X3DPrototype39.SFVec3f := SFVec3f40;
IS41 := TIS.Create;
connect42 := Tconnect.Create;
connect42.NodeField := 'myShape';
connect42.ProtoField := 'myShape';
{ .AddConnect }
IS41.Connect := connect42;
{ .SetIS }
X3DPrototype39.IS := IS41;
{ .AddX3DPrototype }
Transform32.X3DPrototype := X3DPrototype39;
X3DPrototype43 := TX3DPrototypeNode.Create;
X3DPrototype43.NameField := 'anyShape';
SFVec3f44 := TSFVec3f.Create(anyShape2, false, 'xtranslation', Vector3(-2,0,0));
SFVec3f44.NameField := 'xtranslation';
SFVec3f44.Value := '-2 0 0';
{ .SetSFVec3f }
X3DPrototype43.SFVec3f := SFVec3f44;
IS45 := TIS.Create;
connect46 := Tconnect.Create;
connect46.NodeField := 'myShape';
connect46.ProtoField := 'myShape';
{ .AddConnect }
IS45.Connect := connect46;
{ .SetIS }
X3DPrototype43.IS := IS45;
{ .AddX3DPrototype }
Transform32.X3DPrototype := X3DPrototype43;
{ .SetTransform }
X3DPrototype31.Transform := Transform32;
{ .AddX3DPrototype }
X3DPrototype23.X3DPrototype := X3DPrototype31;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype23;
X3DPrototype47 := TX3DPrototype.Create;
X3DPrototype47.NameField := 'nine';
X3DInterfaceDeclaration48 := TX3DInterfaceDeclaration.Create(nil);
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'ztranslation';
X3DField49.AccessType := 'inputOutput';
X3DField49.Type := 'SFVec3f';
X3DField49.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration48.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'myShape';
X3DField50.AccessType := 'inputOutput';
X3DField50.Type := 'MFNode';
Shape51 := TShapeNode.Create;
Sphere52 := TSphereNode.Create;
{ .SetGeometry }
Shape51.Geometry := Sphere52;
Appearance53 := TAppearanceNode.Create;
Material54 := TMaterialNode.Create;
Material54.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance53.Material := Material54;
{ .SetAppearance }
Shape51.Appearance := Appearance53;
{ .SetShape }
X3DField50.Shape := Shape51;
{ .AddX3DField }
X3DInterfaceDeclaration48.X3DField := X3DField50;
{ .SetX3DInterfaceDeclaration }
X3DPrototype47.X3DInterfaceDeclaration := X3DInterfaceDeclaration48;
X3DPrototype55 := TX3DPrototype.Create;
Transform56 := TTransformNode.Create;
IS57 := TIS.Create;
connect58 := Tconnect.Create;
connect58.NodeField := 'translation';
connect58.ProtoField := 'ztranslation';
{ .AddConnect }
IS57.Connect := connect58;
{ .SetIS }
Transform56.IS := IS57;
X3DPrototype59 := TX3DPrototypeNode.Create;
X3DPrototype59.NameField := 'three';
SFVec3f60 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,0,0));
SFVec3f60.NameField := 'ytranslation';
SFVec3f60.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype59.SFVec3f := SFVec3f60;
IS61 := TIS.Create;
connect62 := Tconnect.Create;
connect62.NodeField := 'myShape';
connect62.ProtoField := 'myShape';
{ .AddConnect }
IS61.Connect := connect62;
{ .SetIS }
X3DPrototype59.IS := IS61;
{ .AddX3DPrototype }
Transform56.X3DPrototype := X3DPrototype59;
X3DPrototype63 := TX3DPrototypeNode.Create;
X3DPrototype63.NameField := 'three';
SFVec3f64 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,2,0));
SFVec3f64.NameField := 'ytranslation';
SFVec3f64.Value := '0 2 0';
{ .SetSFVec3f }
X3DPrototype63.SFVec3f := SFVec3f64;
IS65 := TIS.Create;
connect66 := Tconnect.Create;
connect66.NodeField := 'myShape';
connect66.ProtoField := 'myShape';
{ .AddConnect }
IS65.Connect := connect66;
{ .SetIS }
X3DPrototype63.IS := IS65;
{ .AddX3DPrototype }
Transform56.X3DPrototype := X3DPrototype63;
X3DPrototype67 := TX3DPrototypeNode.Create;
X3DPrototype67.NameField := 'three';
SFVec3f68 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,-2,0));
SFVec3f68.NameField := 'ytranslation';
SFVec3f68.Value := '0 -2 0';
{ .SetSFVec3f }
X3DPrototype67.SFVec3f := SFVec3f68;
IS69 := TIS.Create;
connect70 := Tconnect.Create;
connect70.NodeField := 'myShape';
connect70.ProtoField := 'myShape';
{ .AddConnect }
IS69.Connect := connect70;
{ .SetIS }
X3DPrototype67.IS := IS69;
{ .AddX3DPrototype }
Transform56.X3DPrototype := X3DPrototype67;
{ .SetTransform }
X3DPrototype55.Transform := Transform56;
{ .AddX3DPrototype }
X3DPrototype47.X3DPrototype := X3DPrototype55;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype47;
X3DPrototype71 := TX3DPrototype.Create;
X3DPrototype71.NameField := 'twentyseven';
X3DInterfaceDeclaration72 := TX3DInterfaceDeclaration.Create(nil);
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'ttranslation';
X3DField73.AccessType := 'inputOutput';
X3DField73.Type := 'SFVec3f';
X3DField73.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration72.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'myShape';
X3DField74.AccessType := 'inputOutput';
X3DField74.Type := 'MFNode';
Shape75 := TShapeNode.Create;
Sphere76 := TSphereNode.Create;
{ .SetGeometry }
Shape75.Geometry := Sphere76;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance77.Material := Material78;
{ .SetAppearance }
Shape75.Appearance := Appearance77;
{ .SetShape }
X3DField74.Shape := Shape75;
{ .AddX3DField }
X3DInterfaceDeclaration72.X3DField := X3DField74;
{ .SetX3DInterfaceDeclaration }
X3DPrototype71.X3DInterfaceDeclaration := X3DInterfaceDeclaration72;
X3DPrototype79 := TX3DPrototype.Create;
Transform80 := TTransformNode.Create;
IS81 := TIS.Create;
connect82 := Tconnect.Create;
connect82.NodeField := 'translation';
connect82.ProtoField := 'ttranslation';
{ .AddConnect }
IS81.Connect := connect82;
{ .SetIS }
Transform80.IS := IS81;
X3DPrototype83 := TX3DPrototypeNode.Create;
X3DPrototype83.NameField := 'nine';
SFVec3f84 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,0));
SFVec3f84.NameField := 'ztranslation';
SFVec3f84.Value := '0 0 0';
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
Transform80.X3DPrototype := X3DPrototype83;
X3DPrototype87 := TX3DPrototypeNode.Create;
X3DPrototype87.NameField := 'nine';
SFVec3f88 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,2));
SFVec3f88.NameField := 'ztranslation';
SFVec3f88.Value := '0 0 2';
{ .SetSFVec3f }
X3DPrototype87.SFVec3f := SFVec3f88;
IS89 := TIS.Create;
connect90 := Tconnect.Create;
connect90.NodeField := 'myShape';
connect90.ProtoField := 'myShape';
{ .AddConnect }
IS89.Connect := connect90;
{ .SetIS }
X3DPrototype87.IS := IS89;
{ .AddX3DPrototype }
Transform80.X3DPrototype := X3DPrototype87;
X3DPrototype91 := TX3DPrototypeNode.Create;
X3DPrototype91.NameField := 'nine';
SFVec3f92 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,-2));
SFVec3f92.NameField := 'ztranslation';
SFVec3f92.Value := '0 0 -2';
{ .SetSFVec3f }
X3DPrototype91.SFVec3f := SFVec3f92;
IS93 := TIS.Create;
connect94 := Tconnect.Create;
connect94.NodeField := 'myShape';
connect94.ProtoField := 'myShape';
{ .AddConnect }
IS93.Connect := connect94;
{ .SetIS }
X3DPrototype91.IS := IS93;
{ .AddX3DPrototype }
Transform80.X3DPrototype := X3DPrototype91;
{ .SetTransform }
X3DPrototype79.Transform := Transform80;
{ .AddX3DPrototype }
X3DPrototype71.X3DPrototype := X3DPrototype79;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype71;
X3DPrototype95 := TX3DPrototypeNode.Create;
X3DPrototype95.NameField := 'twentyseven';
SFVec3f96 := TSFVec3f.Create(twentyseven4, false, 'ttranslation', Vector3(0,0,0));
SFVec3f96.NameField := 'ttranslation';
SFVec3f96.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype95.SFVec3f := SFVec3f96;
MFNode97 := TMFNode.Create;
MFNode97.NameField := 'myShape';
Shape98 := TShapeNode.Create;
Box99 := TBoxNode.Create;
Box99.Size := Vector3(1,1,1);
{ .SetGeometry }
Shape98.Geometry := Box99;
Appearance100 := TAppearanceNode.Create;
Material101 := TMaterialNode.Create;
Material101.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance100.Material := Material101;
{ .SetAppearance }
Shape98.Appearance := Appearance100;
{ .SetShape }
MFNode97.Shape := Shape98;
{ .AddMFNode }
X3DPrototype95.MFNode := MFNode97;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype95;
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
