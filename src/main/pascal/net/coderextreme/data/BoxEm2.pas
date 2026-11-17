unit BoxEm2;

interface

uses X3DNodes;

function CreateBoxEm2: TX3DRootNode;

implementation

uses CastleVectors;

function CreateBoxEm2: TX3DRootNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'BoxEm2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d';
X3D0.Meta['description'] := '3 boxes';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['EXAMINE']);
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Cubes on Fire';
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
Cylinder28 := TCylinderNode.Create;
{ .SetGeometry }
Shape27.Geometry := Cylinder28;
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
X3DPrototype47 := TX3DPrototypeNode.Create;
X3DPrototype47.NameField := 'three';
SFVec3f48 := TSFVec3f.Create(three2, false, 'ytranslation', Vector3(0,0,0));
SFVec3f48.NameField := 'ytranslation';
SFVec3f48.Value := '0 0 0';
{ .SetSFVec3f }
X3DPrototype47.SFVec3f := SFVec3f48;
MFNode49 := TMFNode.Create;
MFNode49.NameField := 'myShape';
Shape50 := TShapeNode.Create;
Box51 := TBoxNode.Create;
Box51.Size := Vector3(1,1,1);
{ .SetGeometry }
Shape50.Geometry := Box51;
Appearance52 := TAppearanceNode.Create;
Material53 := TMaterialNode.Create;
Material53.DiffuseColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance52.Material := Material53;
{ .SetAppearance }
Shape50.Appearance := Appearance52;
{ .SetShape }
MFNode49.Shape := Shape50;
{ .AddMFNode }
X3DPrototype47.MFNode := MFNode49;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype47;
Transform54 := TTransformNode.Create;
Transform54.Translation := Vector3(0,2,0);
Shape55 := Shape50;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
Group7.AddChildren([Transform54]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
