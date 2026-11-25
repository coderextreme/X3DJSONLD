unit asteroids;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createasteroids: TX3DRootNode;

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
  ProtoInstance15: TX3DPrototypeNode;

procedure InitasteroidsPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'asteroids.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d';
X3D0.Meta['description'] := 'asteroids';
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
ProtoInstance15 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare8);
Group7.FdChildren.Add(ProtoInstance15.Instantiate);
X3D0.AddChildren([Group7]);
end;

function Createasteroids: TX3DRootNode;
begin
  InitasteroidsPart0;
  Result := X3D0;
end;

begin
end.
