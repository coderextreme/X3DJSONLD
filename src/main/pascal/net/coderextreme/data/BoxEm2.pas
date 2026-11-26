unit BoxEm2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateBoxEm2: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  NavigationInfo8: TNavigationInfoNode;
  Viewpoint9: TViewpointNode;
  ProtoDeclare10: TX3DPrototype;
  FieldDecl12: TX3DInterfaceDeclaration;
  FieldVal12: TSFVec3f;
  FieldDecl13: TX3DInterfaceDeclaration;
  FieldVal13: TMFNode;
  Shape14: TShapeNode;
  Sphere15: TSphereNode;
  Appearance16: TAppearanceNode;
  Material17: TMaterialNode;
  Transform19: TTransformNode;
  ProtoDeclare20: TX3DPrototype;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFVec3f;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TMFNode;
  Shape24: TShapeNode;
  Cylinder25: TCylinderNode;
  Appearance26: TAppearanceNode;
  Material27: TMaterialNode;
  Transform29: TTransformNode;
  ProtoInstance30: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;
  ProtoInstance34: TX3DPrototypeNode;
  ProtoInstance36: TX3DPrototypeNode;
  Shape39: TShapeNode;
  Box40: TBoxNode;
  Appearance41: TAppearanceNode;
  Material42: TMaterialNode;
  Transform43: TTransformNode;

procedure InitBoxEm2Part0;
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
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Cubes on Fire';
Viewpoint9.Position := Vector3(0, 0, 12);
Group7.FdChildren.Add(Viewpoint9);
ProtoDeclare10 := CreateEmptyPrototype('anyShape');
ProtoDeclare10.X3DName := 'anyShape';
FieldVal12 := TSFVec3f.Create(nil, True, 'xtranslation', Vector3(0, 0, 0));
FieldDecl12 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl12.FieldOrEvent := FieldVal12;
FieldVal12.ParentInterfaceDeclaration := FieldDecl12;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl12);
FieldVal13 := TMFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl13 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl13.FieldOrEvent := FieldVal13;
FieldVal13.ParentInterfaceDeclaration := FieldDecl13;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl13);
Shape14 := TShapeNode.Create;
Sphere15 := TSphereNode.Create;
Shape14.Geometry := Sphere15;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(1, 1, 1);
Appearance16.Material := Material17;
Shape14.Appearance := Appearance16;
FieldVal13.Add(Shape14);
Transform19 := TTransformNode.Create;
Transform19.FieldOrEvent('translation', True).IsClauseNamesAdd('xtranslation');
end;

procedure InitBoxEm2Part1;
begin
Transform19.FieldOrEvent('children', True).IsClauseNamesAdd('myShape');
ProtoDeclare10.Node.AddChildren([Transform19]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare20 := CreateEmptyPrototype('three');
ProtoDeclare20.X3DName := 'three';
FieldVal22 := TSFVec3f.Create(nil, True, 'ytranslation', Vector3(0, 0, 0));
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TMFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl23);
Shape24 := TShapeNode.Create;
Cylinder25 := TCylinderNode.Create;
Shape24.Geometry := Cylinder25;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(1, 1, 1);
Appearance26.Material := Material27;
Shape24.Appearance := Appearance26;
FieldVal23.Add(Shape24);
Transform29 := TTransformNode.Create;
Transform29.FieldOrEvent('translation', True).IsClauseNamesAdd('ytranslation');
ProtoInstance30 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance30.Field('xtranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
ProtoInstance30.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform29.FdChildren.Add(ProtoInstance30.Instantiate);
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance32.Field('xtranslation') as TSFVec3f).Value := Vector3(2, 0, 0);
ProtoInstance32.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform29.FdChildren.Add(ProtoInstance32.Instantiate);
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance34.Field('xtranslation') as TSFVec3f).Value := Vector3(-2, 0, 0);
ProtoInstance34.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform29.FdChildren.Add(ProtoInstance34.Instantiate);
ProtoDeclare20.Node.AddChildren([Transform29]);
X3D0.AddPrototype(ProtoDeclare20);
end;

procedure InitBoxEm2Part2;
begin
ProtoInstance36 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
ProtoInstance36.X3DName := 'threepi';
(ProtoInstance36.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Shape39 := TShapeNode.Create;
Shape39.X3DName := 'box';
Box40 := TBoxNode.Create;
Box40.Size := Vector3(1, 1, 1);
Shape39.Geometry := Box40;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.DiffuseColor := Vector3(0, 1, 0);
Appearance41.Material := Material42;
Shape39.Appearance := Appearance41;
(ProtoInstance36.Field('myShape') as TMFNode).Clear;
(ProtoInstance36.Field('myShape') as TMFNode).Add(Shape39);
Group7.FdChildren.Add(ProtoInstance36.Instantiate);
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(0, 2, 0);
Transform43.FdChildren.Add(Shape39);
Group7.FdChildren.Add(Transform43);
X3D0.AddChildren([Group7]);
end;

function CreateBoxEm2: TX3DRootNode;
begin
  InitBoxEm2Part0;
  InitBoxEm2Part1;
  InitBoxEm2Part2;
  Result := X3D0;
end;

begin
end.
