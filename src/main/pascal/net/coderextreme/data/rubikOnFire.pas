unit rubikOnFire;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreaterubikOnFire: TX3DRootNode;

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
  FieldVal13: TSFNode;
  Sphere14: TSphereNode;
  Transform16: TTransformNode;
  Shape17: TShapeNode;
  Appearance18: TAppearanceNode;
  Material19: TMaterialNode;
  ProtoDeclare20: TX3DPrototype;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFVec3f;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TSFNode;
  Sphere24: TSphereNode;
  Transform26: TTransformNode;
  ProtoInstance27: TX3DPrototypeNode;
  ProtoInstance29: TX3DPrototypeNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoDeclare33: TX3DPrototype;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TSFVec3f;
  FieldDecl36: TX3DInterfaceDeclaration;
  FieldVal36: TSFNode;
  Sphere37: TSphereNode;
  Transform39: TTransformNode;
  ProtoInstance40: TX3DPrototypeNode;
  ProtoInstance42: TX3DPrototypeNode;
  ProtoInstance44: TX3DPrototypeNode;
  ProtoDeclare46: TX3DPrototype;
  FieldDecl48: TX3DInterfaceDeclaration;
  FieldVal48: TSFVec3f;
  FieldDecl49: TX3DInterfaceDeclaration;
  FieldVal49: TSFNode;
  Sphere50: TSphereNode;
  Transform52: TTransformNode;
  ProtoInstance53: TX3DPrototypeNode;
  ProtoInstance55: TX3DPrototypeNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance59: TX3DPrototypeNode;
  Box62: TBoxNode;

procedure InitrubikOnFirePart0;
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
FieldVal13 := TSFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl13 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl13.FieldOrEvent := FieldVal13;
FieldVal13.ParentInterfaceDeclaration := FieldDecl13;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl13);
Sphere14 := TSphereNode.Create;
FieldVal13.Value := Sphere14;
Transform16 := TTransformNode.Create;
Transform16.FieldOrEvent('translation', True).IsClauseNamesAdd('xtranslation');
Shape17 := TShapeNode.Create;
Shape17.FieldOrEvent('geometry', True).IsClauseNamesAdd('myShape');
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
Material19.DiffuseColor := Vector3(1, 1, 1);
Appearance18.Material := Material19;
Shape17.Appearance := Appearance18;
end;

procedure InitrubikOnFirePart1;
begin
Transform16.FdChildren.Add(Shape17);
ProtoDeclare10.Node.AddChildren([Transform16]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare20 := CreateEmptyPrototype('three');
ProtoDeclare20.X3DName := 'three';
FieldVal22 := TSFVec3f.Create(nil, True, 'ytranslation', Vector3(0, 0, 0));
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare20.InterfaceDeclarations.Add(FieldDecl23);
Sphere24 := TSphereNode.Create;
FieldVal23.Value := Sphere24;
Transform26 := TTransformNode.Create;
Transform26.FieldOrEvent('translation', True).IsClauseNamesAdd('ytranslation');
ProtoInstance27 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance27.Field('xtranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
ProtoInstance27.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform26.FdChildren.Add(ProtoInstance27.Instantiate);
ProtoInstance29 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance29.Field('xtranslation') as TSFVec3f).Value := Vector3(2, 0, 0);
ProtoInstance29.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform26.FdChildren.Add(ProtoInstance29.Instantiate);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance31.Field('xtranslation') as TSFVec3f).Value := Vector3(-2, 0, 0);
ProtoInstance31.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform26.FdChildren.Add(ProtoInstance31.Instantiate);
ProtoDeclare20.Node.AddChildren([Transform26]);
X3D0.AddPrototype(ProtoDeclare20);
ProtoDeclare33 := CreateEmptyPrototype('nine');
ProtoDeclare33.X3DName := 'nine';
FieldVal35 := TSFVec3f.Create(nil, True, 'ztranslation', Vector3(0, 0, 0));
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare33.InterfaceDeclarations.Add(FieldDecl35);
end;

procedure InitrubikOnFirePart2;
begin
FieldVal36 := TSFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl36 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl36.FieldOrEvent := FieldVal36;
FieldVal36.ParentInterfaceDeclaration := FieldDecl36;
ProtoDeclare33.InterfaceDeclarations.Add(FieldDecl36);
Sphere37 := TSphereNode.Create;
FieldVal36.Value := Sphere37;
Transform39 := TTransformNode.Create;
Transform39.FieldOrEvent('translation', True).IsClauseNamesAdd('ztranslation');
ProtoInstance40 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance40.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
ProtoInstance40.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform39.FdChildren.Add(ProtoInstance40.Instantiate);
ProtoInstance42 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance42.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 2, 0);
ProtoInstance42.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform39.FdChildren.Add(ProtoInstance42.Instantiate);
ProtoInstance44 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare20);
(ProtoInstance44.Field('ytranslation') as TSFVec3f).Value := Vector3(0, -2, 0);
ProtoInstance44.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform39.FdChildren.Add(ProtoInstance44.Instantiate);
ProtoDeclare33.Node.AddChildren([Transform39]);
X3D0.AddPrototype(ProtoDeclare33);
ProtoDeclare46 := CreateEmptyPrototype('twentyseven');
ProtoDeclare46.X3DName := 'twentyseven';
FieldVal48 := TSFVec3f.Create(nil, True, 'ttranslation', Vector3(0, 0, 0));
FieldDecl48 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl48.FieldOrEvent := FieldVal48;
FieldVal48.ParentInterfaceDeclaration := FieldDecl48;
ProtoDeclare46.InterfaceDeclarations.Add(FieldDecl48);
FieldVal49 := TSFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl49 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl49.FieldOrEvent := FieldVal49;
FieldVal49.ParentInterfaceDeclaration := FieldDecl49;
ProtoDeclare46.InterfaceDeclarations.Add(FieldDecl49);
Sphere50 := TSphereNode.Create;
FieldVal49.Value := Sphere50;
Transform52 := TTransformNode.Create;
Transform52.FieldOrEvent('translation', True).IsClauseNamesAdd('ttranslation');
ProtoInstance53 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare33);
end;

procedure InitrubikOnFirePart3;
begin
(ProtoInstance53.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
ProtoInstance53.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform52.FdChildren.Add(ProtoInstance53.Instantiate);
ProtoInstance55 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare33);
(ProtoInstance55.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, 2);
ProtoInstance55.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform52.FdChildren.Add(ProtoInstance55.Instantiate);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare33);
(ProtoInstance57.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, -2);
ProtoInstance57.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform52.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoDeclare46.Node.AddChildren([Transform52]);
X3D0.AddPrototype(ProtoDeclare46);
ProtoInstance59 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare46);
(ProtoInstance59.Field('ttranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Box62 := TBoxNode.Create;
Box62.Size := Vector3(1, 1, 1);
(ProtoInstance59.Field('myShape') as TSFNode).Value := Box62;
Group7.FdChildren.Add(ProtoInstance59.Instantiate);
X3D0.AddChildren([Group7]);
end;

function CreaterubikOnFire: TX3DRootNode;
begin
  InitrubikOnFirePart0;
  InitrubikOnFirePart1;
  InitrubikOnFirePart2;
  InitrubikOnFirePart3;
  Result := X3D0;
end;

begin
end.
