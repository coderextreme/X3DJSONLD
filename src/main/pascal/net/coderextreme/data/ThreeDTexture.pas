unit ThreeDTexture;

interface

uses X3DNodes;

function CreateThreeDTexture: TX3DRootNode;

implementation

uses CastleVectors;

function CreateThreeDTexture: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
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
X3DField23: TX3DField;
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
X3DField36: TX3DField;
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
X3DField49: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ThreeDTexture.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d';
X3D0.Meta['description'] := 'a kind of ThreeDTexture cube with spheres';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube';
Viewpoint9.Position := Vector3(0,0,12);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'sphereproto';
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'xtranslation';
X3DField12.AccessType := 'inputOutput';
X3DField12.Type := 'SFVec3f';
X3DField12.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField12;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'xtranslation';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform14.AddChildren([Shape17]);
{ .SetTransform }
X3DPrototype13.Transform := Transform14;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype13;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype10;
X3DPrototype21 := TX3DPrototype.Create;
X3DPrototype21.NameField := 'three';
X3DInterfaceDeclaration22 := TX3DInterfaceDeclaration.Create(nil);
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'ytranslation';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'SFVec3f';
X3DField23.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration22.X3DField := X3DField23;
{ .SetX3DInterfaceDeclaration }
X3DPrototype21.X3DInterfaceDeclaration := X3DInterfaceDeclaration22;
X3DPrototype24 := TX3DPrototype.Create;
Transform25 := TTransformNode.Create;
IS26 := TIS.Create;
connect27 := Tconnect.Create;
connect27.NodeField := 'translation';
connect27.ProtoField := 'ytranslation';
{ .AddConnect }
IS26.Connect := connect27;
{ .SetIS }
Transform25.IS := IS26;
X3DPrototype28 := TX3DPrototypeNode.Create;
X3DPrototype28.NameField := 'sphereproto';
SFVec3f29 := TSFVec3f.Create(sphereproto2, false, 'xtranslation', Vector3(0,0,0));
SFVec3f29.NameField := 'xtranslation';
SFVec3f29.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype28.SFVec3f := SFVec3f29;
{ .AddX3DPrototype }
Transform25.X3DPrototype := X3DPrototype28;
X3DPrototype30 := TX3DPrototypeNode.Create;
X3DPrototype30.NameField := 'sphereproto';
SFVec3f31 := TSFVec3f.Create(sphereproto2, false, 'xtranslation', Vector3(2,0,0));
SFVec3f31.NameField := 'xtranslation';
SFVec3f31.Value := '2 0 0';
{ .SetSFVec3f }
X3DPrototype30.SFVec3f := SFVec3f31;
{ .AddX3DPrototype }
Transform25.X3DPrototype := X3DPrototype30;
X3DPrototype32 := TX3DPrototypeNode.Create;
X3DPrototype32.NameField := 'sphereproto';
SFVec3f33 := TSFVec3f.Create(sphereproto2, false, 'xtranslation', Vector3(-2,0,0));
SFVec3f33.NameField := 'xtranslation';
SFVec3f33.Value := '-2 0 0';
{ .SetSFVec3f }
X3DPrototype32.SFVec3f := SFVec3f33;
{ .AddX3DPrototype }
Transform25.X3DPrototype := X3DPrototype32;
{ .SetTransform }
X3DPrototype24.Transform := Transform25;
{ .AddX3DPrototype }
X3DPrototype21.X3DPrototype := X3DPrototype24;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype21;
X3DPrototype34 := TX3DPrototype.Create;
X3DPrototype34.NameField := 'nine';
X3DInterfaceDeclaration35 := TX3DInterfaceDeclaration.Create(nil);
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'ztranslation';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'SFVec3f';
X3DField36.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration35.X3DField := X3DField36;
{ .SetX3DInterfaceDeclaration }
X3DPrototype34.X3DInterfaceDeclaration := X3DInterfaceDeclaration35;
X3DPrototype37 := TX3DPrototype.Create;
Transform38 := TTransformNode.Create;
IS39 := TIS.Create;
connect40 := Tconnect.Create;
connect40.NodeField := 'translation';
connect40.ProtoField := 'ztranslation';
{ .AddConnect }
IS39.Connect := connect40;
{ .SetIS }
Transform38.IS := IS39;
X3DPrototype41 := TX3DPrototypeNode.Create;
X3DPrototype41.NameField := 'three';
SFVec3f42 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,0,0));
SFVec3f42.NameField := 'ytranslation';
SFVec3f42.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype41.SFVec3f := SFVec3f42;
{ .AddX3DPrototype }
Transform38.X3DPrototype := X3DPrototype41;
X3DPrototype43 := TX3DPrototypeNode.Create;
X3DPrototype43.NameField := 'three';
SFVec3f44 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,2,0));
SFVec3f44.NameField := 'ytranslation';
SFVec3f44.Value := '0 2 0';
{ .SetSFVec3f }
X3DPrototype43.SFVec3f := SFVec3f44;
{ .AddX3DPrototype }
Transform38.X3DPrototype := X3DPrototype43;
X3DPrototype45 := TX3DPrototypeNode.Create;
X3DPrototype45.NameField := 'three';
SFVec3f46 := TSFVec3f.Create(three3, false, 'ytranslation', Vector3(0,-2,0));
SFVec3f46.NameField := 'ytranslation';
SFVec3f46.Value := '0 -2 0';
{ .SetSFVec3f }
X3DPrototype45.SFVec3f := SFVec3f46;
{ .AddX3DPrototype }
Transform38.X3DPrototype := X3DPrototype45;
{ .SetTransform }
X3DPrototype37.Transform := Transform38;
{ .AddX3DPrototype }
X3DPrototype34.X3DPrototype := X3DPrototype37;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype34;
X3DPrototype47 := TX3DPrototype.Create;
X3DPrototype47.NameField := 'twentyseven';
X3DInterfaceDeclaration48 := TX3DInterfaceDeclaration.Create(nil);
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'ttranslation';
X3DField49.AccessType := 'inputOutput';
X3DField49.Type := 'SFVec3f';
X3DField49.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration48.X3DField := X3DField49;
{ .SetX3DInterfaceDeclaration }
X3DPrototype47.X3DInterfaceDeclaration := X3DInterfaceDeclaration48;
X3DPrototype50 := TX3DPrototype.Create;
Transform51 := TTransformNode.Create;
IS52 := TIS.Create;
connect53 := Tconnect.Create;
connect53.NodeField := 'translation';
connect53.ProtoField := 'ttranslation';
{ .AddConnect }
IS52.Connect := connect53;
{ .SetIS }
Transform51.IS := IS52;
X3DPrototype54 := TX3DPrototypeNode.Create;
X3DPrototype54.NameField := 'nine';
SFVec3f55 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,0));
SFVec3f55.NameField := 'ztranslation';
SFVec3f55.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype54.SFVec3f := SFVec3f55;
{ .AddX3DPrototype }
Transform51.X3DPrototype := X3DPrototype54;
X3DPrototype56 := TX3DPrototypeNode.Create;
X3DPrototype56.NameField := 'nine';
SFVec3f57 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,2));
SFVec3f57.NameField := 'ztranslation';
SFVec3f57.Value := '0 0 2';
{ .SetSFVec3f }
X3DPrototype56.SFVec3f := SFVec3f57;
{ .AddX3DPrototype }
Transform51.X3DPrototype := X3DPrototype56;
X3DPrototype58 := TX3DPrototypeNode.Create;
X3DPrototype58.NameField := 'nine';
SFVec3f59 := TSFVec3f.Create(nine4, false, 'ztranslation', Vector3(0,0,-2));
SFVec3f59.NameField := 'ztranslation';
SFVec3f59.Value := '0 0 -2';
{ .SetSFVec3f }
X3DPrototype58.SFVec3f := SFVec3f59;
{ .AddX3DPrototype }
Transform51.X3DPrototype := X3DPrototype58;
{ .SetTransform }
X3DPrototype50.Transform := Transform51;
{ .AddX3DPrototype }
X3DPrototype47.X3DPrototype := X3DPrototype50;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype47;
X3DPrototype60 := TX3DPrototypeNode.Create;
X3DPrototype60.NameField := 'twentyseven';
SFVec3f61 := TSFVec3f.Create(twentyseven4, false, 'ttranslation', Vector3(0,0,0));
SFVec3f61.NameField := 'ttranslation';
SFVec3f61.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype60.SFVec3f := SFVec3f61;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype60;
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
