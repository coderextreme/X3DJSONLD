unit plainflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createplainflowers: TX3DRootNode;

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
  Background9: TBackgroundNode;
  Group10: TGroupNode;
  X3DExternalPrototype11: TX3DExternalPrototype;
  FieldVal12: TMFString;
  FieldVal13: TMFString;
  ProtoDeclare14: TX3DPrototype;
  Group16: TGroupNode;
  ProtoInstance17: TX3DPrototypeNode;
  ProtoInstance20: TX3DPrototypeNode;
  ProtoInstance21: TX3DPrototypeNode;
  ProtoInstance22: TX3DPrototypeNode;
  ProtoInstance23: TX3DPrototypeNode;
  ProtoInstance24: TX3DPrototypeNode;
  ProtoInstance25: TX3DPrototypeNode;

procedure InitplainflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'plainflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/plainflowers.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
Group7.FdChildren.Add(NavigationInfo8);
Background9 := TBackgroundNode.Create;
Background9.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background9.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background9.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background9.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background9.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background9.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group7.FdChildren.Add(Background9);
Group10 := TGroupNode.Create;
X3DExternalPrototype11 := TX3DExternalPrototype.Create;
X3DExternalPrototype11.X3DName := 'FlowerProto';
X3DExternalPrototype11.Url := '"../data/flowerproto.x3d#FlowerProto"';
FieldVal12 := TMFString.CreateUndefined(X3DExternalPrototype11, True, 'vertex');
X3DExternalPrototype11.AddCustomFieldOrEvent(FieldVal12);
FieldVal13 := TMFString.CreateUndefined(X3DExternalPrototype11, True, 'fragment');
X3DExternalPrototype11.AddCustomFieldOrEvent(FieldVal13);
Group10.AddX3DExternalPrototype([X3DExternalPrototype11]);
ProtoDeclare14 := CreateEmptyPrototype('flower');
ProtoDeclare14.X3DName := 'flower';
Group16 := TGroupNode.Create;
ProtoInstance17 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype11);
(ProtoInstance17.Field('vertex') as TMFString).Send(['../shaders/gl_flowers_plain.vs']);
(ProtoInstance17.Field('fragment') as TMFString).Send(['../shaders/plain.fs']);
Group16.FdChildren.Add(ProtoInstance17.Instantiate);
ProtoDeclare14.Node.AddChildren([Group16]);
X3D0.AddPrototype(ProtoDeclare14);
ProtoInstance20 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
Group10.FdChildren.Add(ProtoInstance20.Instantiate);
end;

procedure InitplainflowersPart1;
begin
ProtoInstance21 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
Group10.FdChildren.Add(ProtoInstance21.Instantiate);
ProtoInstance22 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
Group10.FdChildren.Add(ProtoInstance22.Instantiate);
ProtoInstance23 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
Group10.FdChildren.Add(ProtoInstance23.Instantiate);
ProtoInstance24 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
Group10.FdChildren.Add(ProtoInstance24.Instantiate);
ProtoInstance25 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
Group10.FdChildren.Add(ProtoInstance25.Instantiate);
Group7.FdChildren.Add(Group10);
X3D0.AddChildren([Group7]);
end;

function Createplainflowers: TX3DRootNode;
begin
  InitplainflowersPart0;
  InitplainflowersPart1;
  Result := X3D0;
end;

begin
end.
