unit abox;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createabox: TX3DRootNode;

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
  ProtoDeclare8: TX3DPrototype;
  FieldDecl10: TX3DInterfaceDeclaration;
  FieldVal10: TMFNode;
  Shape11: TShapeNode;
  Sphere12: TSphereNode;
  Transform14: TTransformNode;
  ProtoDeclare15: TX3DPrototype;
  FieldDecl17: TX3DInterfaceDeclaration;
  FieldVal17: TMFNode;
  Shape18: TShapeNode;
  Cylinder19: TCylinderNode;
  Transform21: TTransformNode;
  ProtoInstance22: TX3DPrototypeNode;
  ProtoInstance23: TX3DPrototypeNode;
  Shape25: TShapeNode;
  Box26: TBoxNode;

procedure InitaboxPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'abox.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d';
X3D0.Meta['description'] := 'a box';
Group7 := TGroupNode.Create;
ProtoDeclare8 := CreateEmptyPrototype('anyShape');
ProtoDeclare8.X3DName := 'anyShape';
FieldVal10 := TMFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl10 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl10.FieldOrEvent := FieldVal10;
FieldVal10.ParentInterfaceDeclaration := FieldDecl10;
ProtoDeclare8.InterfaceDeclarations.Add(FieldDecl10);
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
Shape11.Geometry := Sphere12;
FieldVal10.Add(Shape11);
Transform14 := TTransformNode.Create;
Transform14.FieldOrEvent('children', True).IsClauseNamesAdd('myShape');
ProtoDeclare8.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare8);
ProtoDeclare15 := CreateEmptyPrototype('one');
ProtoDeclare15.X3DName := 'one';
FieldVal17 := TMFNode.CreateUndefined(nil, True, 'myShape');
FieldDecl17 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl17.FieldOrEvent := FieldVal17;
FieldVal17.ParentInterfaceDeclaration := FieldDecl17;
ProtoDeclare15.InterfaceDeclarations.Add(FieldDecl17);
Shape18 := TShapeNode.Create;
Cylinder19 := TCylinderNode.Create;
Shape18.Geometry := Cylinder19;
FieldVal17.Add(Shape18);
Transform21 := TTransformNode.Create;
ProtoInstance22 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare8);
ProtoInstance22.FieldOrEvent('myShape', True).IsClauseNamesAdd('myShape');
Transform21.FdChildren.Add(ProtoInstance22.Instantiate);
end;

procedure InitaboxPart1;
begin
ProtoDeclare15.Node.AddChildren([Transform21]);
X3D0.AddPrototype(ProtoDeclare15);
ProtoInstance23 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Shape25 := TShapeNode.Create;
Box26 := TBoxNode.Create;
Box26.Size := Vector3(140, 140, 140);
Shape25.Geometry := Box26;
(ProtoInstance23.Field('myShape') as TMFNode).Clear;
(ProtoInstance23.Field('myShape') as TMFNode).Add(Shape25);
Group7.FdChildren.Add(ProtoInstance23.Instantiate);
X3D0.AddChildren([Group7]);
end;

function Createabox: TX3DRootNode;
begin
  InitaboxPart0;
  InitaboxPart1;
  Result := X3D0;
end;

begin
end.
