unit rubikFurnace;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreaterubikFurnace: TX3DRootNode;

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
  Sphere25: TSphereNode;
  Appearance26: TAppearanceNode;
  Material27: TMaterialNode;
  Transform29: TTransformNode;
  ProtoInstance30: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;
  ProtoInstance34: TX3DPrototypeNode;
  ProtoDeclare36: TX3DPrototype;
  FieldDecl38: TX3DInterfaceDeclaration;
  FieldVal38: TSFVec3f;
  FieldDecl39: TX3DInterfaceDeclaration;
  FieldVal39: TMFNode;
  Shape40: TShapeNode;
  Sphere41: TSphereNode;
  Appearance42: TAppearanceNode;
  Material43: TMaterialNode;
  Transform45: TTransformNode;
  ProtoInstance46: TX3DPrototypeNode;
  ProtoInstance48: TX3DPrototypeNode;
  ProtoInstance50: TX3DPrototypeNode;
  ProtoDeclare52: TX3DPrototype;
  FieldDecl54: TX3DInterfaceDeclaration;
  FieldVal54: TSFVec3f;
  FieldDecl55: TX3DInterfaceDeclaration;
  FieldVal55: TMFNode;
  Shape56: TShapeNode;
  Sphere57: TSphereNode;
  Appearance58: TAppearanceNode;
  Material59: TMaterialNode;
  Transform61: TTransformNode;
  ProtoInstance62: TX3DPrototypeNode;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance66: TX3DPrototypeNode;
  ProtoInstance68: TX3DPrototypeNode;
  Shape71: TShapeNode;
  Box72: TBoxNode;
  Appearance73: TAppearanceNode;
  Material74: TMaterialNode;

procedure InitrubikFurnacePart0;
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
NavigationInfo8.SetType(['ANY', 'EXAMINE', 'WALK', 'FLY', 'LOOKAT']);
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube on Fire';
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

procedure InitrubikFurnacePart1;
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
Sphere25 := TSphereNode.Create;
Shape24.Geometry := Sphere25;
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

procedure InitrubikFurnacePart2;
begin
ProtoDeclare36 := CreateEmptyPrototype('nine');
ProtoDeclare36.X3DName := 'nine';
FieldVal38 := TSFVec3f.Create(nil, True, 'ztranslation', Vector3(0, 0, 0));
FieldDecl38 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl38.FieldOrEvent := FieldVal38;
FieldVal38.ParentInterfaceDeclaration := FieldDecl38;
ProtoDeclare36.InterfaceDeclarations.Add(FieldDecl38);
FieldVal39 := TMFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl39 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl39.FieldOrEvent := FieldVal39;
FieldVal39.ParentInterfaceDeclaration := FieldDecl39;
ProtoDeclare36.InterfaceDeclarations.Add(FieldDecl39);
Shape40 := TShapeNode.Create;
Sphere41 := TSphereNode.Create;
Shape40.Geometry := Sphere41;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(1, 1, 1);
Appearance42.Material := Material43;
Shape40.Appearance := Appearance42;
FieldVal39.Add(Shape40);
Transform45 := TTransformNode.Create;
Transform45.FieldOrEvent('translation', True).IsClauseNamesAdd('ztranslation');
ProtoInstance46 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance46.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
ProtoInstance46.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform45.FdChildren.Add(ProtoInstance46.Instantiate);
ProtoInstance48 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance48.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 2, 0);
ProtoInstance48.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform45.FdChildren.Add(ProtoInstance48.Instantiate);
ProtoInstance50 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance50.Field('ytranslation') as TSFVec3f).Value := Vector3(0, -2, 0);
ProtoInstance50.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform45.FdChildren.Add(ProtoInstance50.Instantiate);
ProtoDeclare36.Node.AddChildren([Transform45]);
X3D0.AddPrototype(ProtoDeclare36);
ProtoDeclare52 := CreateEmptyPrototype('twentyseven');
ProtoDeclare52.X3DName := 'twentyseven';
FieldVal54 := TSFVec3f.Create(nil, True, 'ttranslation', Vector3(0, 0, 0));
end;

procedure InitrubikFurnacePart3;
begin
FieldDecl54 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl54.FieldOrEvent := FieldVal54;
FieldVal54.ParentInterfaceDeclaration := FieldDecl54;
ProtoDeclare52.InterfaceDeclarations.Add(FieldDecl54);
FieldVal55 := TMFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl55 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl55.FieldOrEvent := FieldVal55;
FieldVal55.ParentInterfaceDeclaration := FieldDecl55;
ProtoDeclare52.InterfaceDeclarations.Add(FieldDecl55);
Shape56 := TShapeNode.Create;
Sphere57 := TSphereNode.Create;
Shape56.Geometry := Sphere57;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.DiffuseColor := Vector3(1, 1, 1);
Appearance58.Material := Material59;
Shape56.Appearance := Appearance58;
FieldVal55.Add(Shape56);
Transform61 := TTransformNode.Create;
Transform61.FieldOrEvent('translation', True).IsClauseNamesAdd('ttranslation');
ProtoInstance62 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare36);
(ProtoInstance62.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
ProtoInstance62.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform61.FdChildren.Add(ProtoInstance62.Instantiate);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare36);
(ProtoInstance64.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, 2);
ProtoInstance64.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform61.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance66 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare36);
(ProtoInstance66.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, -2);
ProtoInstance66.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform61.FdChildren.Add(ProtoInstance66.Instantiate);
ProtoDeclare52.Node.AddChildren([Transform61]);
X3D0.AddPrototype(ProtoDeclare52);
ProtoInstance68 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare52);
(ProtoInstance68.Field('ttranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Shape71 := TShapeNode.Create;
Box72 := TBoxNode.Create;
Box72.Size := Vector3(1, 1, 1);
Shape71.Geometry := Box72;
end;

procedure InitrubikFurnacePart4;
begin
Appearance73 := TAppearanceNode.Create;
Material74 := TMaterialNode.Create;
Material74.DiffuseColor := Vector3(0, 1, 0);
Appearance73.Material := Material74;
Shape71.Appearance := Appearance73;
(ProtoInstance68.Field('myShape') as TMFNode).Clear;
(ProtoInstance68.Field('myShape') as TMFNode).Add(Shape71);
Group7.FdChildren.Add(ProtoInstance68.Instantiate);
X3D0.AddChildren([Group7]);
end;

function CreaterubikFurnace: TX3DRootNode;
begin
  InitrubikFurnacePart0;
  InitrubikFurnacePart1;
  InitrubikFurnacePart2;
  InitrubikFurnacePart3;
  InitrubikFurnacePart4;
  Result := X3D0;
end;

begin
end.
