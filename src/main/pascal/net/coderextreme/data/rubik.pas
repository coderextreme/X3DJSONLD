unit rubik;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createrubik: TX3DRootNode;

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
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Sphere16: TSphereNode;
  Appearance17: TAppearanceNode;
  Material18: TMaterialNode;
  ProtoDeclare19: TX3DPrototype;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFVec3f;
  Transform23: TTransformNode;
  ProtoInstance24: TX3DPrototypeNode;
  ProtoInstance26: TX3DPrototypeNode;
  ProtoInstance28: TX3DPrototypeNode;
  ProtoDeclare30: TX3DPrototype;
  FieldDecl32: TX3DInterfaceDeclaration;
  FieldVal32: TSFVec3f;
  Transform34: TTransformNode;
  ProtoInstance35: TX3DPrototypeNode;
  ProtoInstance37: TX3DPrototypeNode;
  ProtoInstance39: TX3DPrototypeNode;
  ProtoDeclare41: TX3DPrototype;
  FieldDecl43: TX3DInterfaceDeclaration;
  FieldVal43: TSFVec3f;
  Transform45: TTransformNode;
  ProtoInstance46: TX3DPrototypeNode;
  ProtoInstance48: TX3DPrototypeNode;
  ProtoInstance50: TX3DPrototypeNode;
  ProtoInstance52: TX3DPrototypeNode;

procedure InitrubikPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rubik.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d';
X3D0.Meta['description'] := 'a kind of rubik cube with spheres';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['ANY', 'EXAMINE', 'WALK', 'FLY', 'LOOKAT']);
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Rubiks Cube';
Viewpoint9.Position := Vector3(0, 0, 12);
Group7.FdChildren.Add(Viewpoint9);
ProtoDeclare10 := CreateEmptyPrototype('sphereproto');
ProtoDeclare10.X3DName := 'sphereproto';
FieldVal12 := TSFVec3f.Create(nil, True, 'xtranslation', Vector3(0, 0, 0));
FieldDecl12 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl12.FieldOrEvent := FieldVal12;
FieldVal12.ParentInterfaceDeclaration := FieldDecl12;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl12);
Transform14 := TTransformNode.Create;
Transform14.FieldOrEvent('translation', True).IsClauseNamesAdd('xtranslation');
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1, 1, 1);
Appearance17.Material := Material18;
Shape15.Appearance := Appearance17;
Transform14.FdChildren.Add(Shape15);
ProtoDeclare10.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare19 := CreateEmptyPrototype('three');
ProtoDeclare19.X3DName := 'three';
FieldVal21 := TSFVec3f.Create(nil, True, 'ytranslation', Vector3(0, 0, 0));
end;

procedure InitrubikPart1;
begin
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare19.InterfaceDeclarations.Add(FieldDecl21);
Transform23 := TTransformNode.Create;
Transform23.FieldOrEvent('translation', True).IsClauseNamesAdd('ytranslation');
ProtoInstance24 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance24.Field('xtranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Transform23.FdChildren.Add(ProtoInstance24.Instantiate);
ProtoInstance26 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance26.Field('xtranslation') as TSFVec3f).Value := Vector3(2, 0, 0);
Transform23.FdChildren.Add(ProtoInstance26.Instantiate);
ProtoInstance28 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
(ProtoInstance28.Field('xtranslation') as TSFVec3f).Value := Vector3(-2, 0, 0);
Transform23.FdChildren.Add(ProtoInstance28.Instantiate);
ProtoDeclare19.Node.AddChildren([Transform23]);
X3D0.AddPrototype(ProtoDeclare19);
ProtoDeclare30 := CreateEmptyPrototype('nine');
ProtoDeclare30.X3DName := 'nine';
FieldVal32 := TSFVec3f.Create(nil, True, 'ztranslation', Vector3(0, 0, 0));
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl32);
Transform34 := TTransformNode.Create;
Transform34.FieldOrEvent('translation', True).IsClauseNamesAdd('ztranslation');
ProtoInstance35 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
(ProtoInstance35.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Transform34.FdChildren.Add(ProtoInstance35.Instantiate);
ProtoInstance37 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
(ProtoInstance37.Field('ytranslation') as TSFVec3f).Value := Vector3(0, 2, 0);
Transform34.FdChildren.Add(ProtoInstance37.Instantiate);
ProtoInstance39 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare19);
(ProtoInstance39.Field('ytranslation') as TSFVec3f).Value := Vector3(0, -2, 0);
Transform34.FdChildren.Add(ProtoInstance39.Instantiate);
ProtoDeclare30.Node.AddChildren([Transform34]);
X3D0.AddPrototype(ProtoDeclare30);
ProtoDeclare41 := CreateEmptyPrototype('twentyseven');
ProtoDeclare41.X3DName := 'twentyseven';
FieldVal43 := TSFVec3f.Create(nil, True, 'ttranslation', Vector3(0, 0, 0));
end;

procedure InitrubikPart2;
begin
FieldDecl43 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl43.FieldOrEvent := FieldVal43;
FieldVal43.ParentInterfaceDeclaration := FieldDecl43;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl43);
Transform45 := TTransformNode.Create;
Transform45.FieldOrEvent('translation', True).IsClauseNamesAdd('ttranslation');
ProtoInstance46 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
(ProtoInstance46.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Transform45.FdChildren.Add(ProtoInstance46.Instantiate);
ProtoInstance48 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
(ProtoInstance48.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, 2);
Transform45.FdChildren.Add(ProtoInstance48.Instantiate);
ProtoInstance50 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
(ProtoInstance50.Field('ztranslation') as TSFVec3f).Value := Vector3(0, 0, -2);
Transform45.FdChildren.Add(ProtoInstance50.Instantiate);
ProtoDeclare41.Node.AddChildren([Transform45]);
X3D0.AddPrototype(ProtoDeclare41);
ProtoInstance52 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare41);
(ProtoInstance52.Field('ttranslation') as TSFVec3f).Value := Vector3(0, 0, 0);
Group7.FdChildren.Add(ProtoInstance52.Instantiate);
X3D0.AddChildren([Group7]);
end;

function Createrubik: TX3DRootNode;
begin
  InitrubikPart0;
  InitrubikPart1;
  InitrubikPart2;
  Result := X3D0;
end;

begin
end.
