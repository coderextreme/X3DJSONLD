unit freewrlflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createfreewrlflowers: TX3DRootNode;

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
  Background10: TBackgroundNode;
  Group11: TGroupNode;
  X3DExternalPrototype12: TX3DExternalPrototype;
  FieldVal13: TMFString;
  FieldVal14: TMFString;
  ProtoDeclare15: TX3DPrototype;
  Group17: TGroupNode;
  ProtoInstance18: TX3DPrototypeNode;
  ProtoInstance21: TX3DPrototypeNode;
  ProtoInstance22: TX3DPrototypeNode;
  ProtoInstance23: TX3DPrototypeNode;
  ProtoInstance24: TX3DPrototypeNode;
  ProtoInstance25: TX3DPrototypeNode;
  ProtoInstance26: TX3DPrototypeNode;

procedure InitfreewrlflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'freewrlflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Tour Views';
Viewpoint9.Position := Vector3(0, 0, 50);
Group7.FdChildren.Add(Viewpoint9);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background10.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background10.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background10.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background10.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background10.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group7.FdChildren.Add(Background10);
Group11 := TGroupNode.Create;
X3DExternalPrototype12 := TX3DExternalPrototype.Create;
X3DExternalPrototype12.X3DName := 'FlowerProto';
X3DExternalPrototype12.Url := '"../data/flowerprotofreewrl.x3d#FlowerProto" "https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto"';
FieldVal13 := TMFString.CreateUndefined(X3DExternalPrototype12, True, 'vertex');
X3DExternalPrototype12.AddCustomFieldOrEvent(FieldVal13);
FieldVal14 := TMFString.CreateUndefined(X3DExternalPrototype12, True, 'fragment');
X3DExternalPrototype12.AddCustomFieldOrEvent(FieldVal14);
Group11.AddX3DExternalPrototype([X3DExternalPrototype12]);
ProtoDeclare15 := CreateEmptyPrototype('flower');
ProtoDeclare15.X3DName := 'flower';
Group17 := TGroupNode.Create;
ProtoInstance18 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype12);
(ProtoInstance18.Field('vertex') as TMFString).Send(['../shaders/freewrl_flowers_chromatic.vs']);
(ProtoInstance18.Field('fragment') as TMFString).Send(['../shaders/freewrl.fs']);
Group17.FdChildren.Add(ProtoInstance18.Instantiate);
end;

procedure InitfreewrlflowersPart1;
begin
ProtoDeclare15.Node.AddChildren([Group17]);
X3D0.AddPrototype(ProtoDeclare15);
ProtoInstance21 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Group11.FdChildren.Add(ProtoInstance21.Instantiate);
ProtoInstance22 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Group11.FdChildren.Add(ProtoInstance22.Instantiate);
ProtoInstance23 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Group11.FdChildren.Add(ProtoInstance23.Instantiate);
ProtoInstance24 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Group11.FdChildren.Add(ProtoInstance24.Instantiate);
ProtoInstance25 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Group11.FdChildren.Add(ProtoInstance25.Instantiate);
ProtoInstance26 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare15);
Group11.FdChildren.Add(ProtoInstance26.Instantiate);
Group7.FdChildren.Add(Group11);
X3D0.AddChildren([Group7]);
end;

function Createfreewrlflowers: TX3DRootNode;
begin
  InitfreewrlflowersPart0;
  InitfreewrlflowersPart1;
  Result := X3D0;
end;

begin
end.
