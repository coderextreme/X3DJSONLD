unit sphereflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createsphereflowers: TX3DRootNode;

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
  Group17: TGroupNode;
  NavigationInfo18: TNavigationInfoNode;
  Background19: TBackgroundNode;
  Group20: TGroupNode;
  X3DExternalPrototype21: TX3DExternalPrototype;
  FieldVal22: TMFString;
  FieldVal23: TMFString;
  ProtoDeclare24: TX3DPrototype;
  Group26: TGroupNode;
  ProtoInstance27: TX3DPrototypeNode;
  ProtoInstance30: TX3DPrototypeNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;
  ProtoInstance33: TX3DPrototypeNode;
  ProtoInstance34: TX3DPrototypeNode;
  ProtoInstance35: TX3DPrototypeNode;

procedure InitsphereflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'sphereflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := 'Jan 17 2022';
X3D0.Meta['modified'] := 'Sep 3 2023';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d';
Group17 := TGroupNode.Create;
NavigationInfo18 := TNavigationInfoNode.Create;
Group17.FdChildren.Add(NavigationInfo18);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group17.FdChildren.Add(Background19);
Group20 := TGroupNode.Create;
X3DExternalPrototype21 := TX3DExternalPrototype.Create;
X3DExternalPrototype21.X3DName := 'FlowerProto';
X3DExternalPrototype21.Url := '"../data/flowerproto.x3d#FlowerProto" "https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"';
FieldVal22 := TMFString.CreateUndefined(X3DExternalPrototype21, True, 'vertex');
X3DExternalPrototype21.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TMFString.CreateUndefined(X3DExternalPrototype21, True, 'fragment');
X3DExternalPrototype21.AddCustomFieldOrEvent(FieldVal23);
Group20.AddX3DExternalPrototype([X3DExternalPrototype21]);
ProtoDeclare24 := CreateEmptyPrototype('flower');
end;

procedure InitsphereflowersPart1;
begin
ProtoDeclare24.X3DName := 'flower';
Group26 := TGroupNode.Create;
ProtoInstance27 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype21);
(ProtoInstance27.Field('vertex') as TMFString).Send(['../shaders/x_ite_flowers_chromatic.vs']);
(ProtoInstance27.Field('fragment') as TMFString).Send(['../shaders/x_ite.fs']);
Group26.FdChildren.Add(ProtoInstance27.Instantiate);
ProtoDeclare24.Node.AddChildren([Group26]);
X3D0.AddPrototype(ProtoDeclare24);
ProtoInstance30 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
Group20.FdChildren.Add(ProtoInstance30.Instantiate);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
Group20.FdChildren.Add(ProtoInstance31.Instantiate);
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
Group20.FdChildren.Add(ProtoInstance32.Instantiate);
ProtoInstance33 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
Group20.FdChildren.Add(ProtoInstance33.Instantiate);
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
Group20.FdChildren.Add(ProtoInstance34.Instantiate);
ProtoInstance35 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare24);
Group20.FdChildren.Add(ProtoInstance35.Instantiate);
Group17.FdChildren.Add(Group20);
X3D0.AddChildren([Group17]);
end;

function Createsphereflowers: TX3DRootNode;
begin
  InitsphereflowersPart0;
  InitsphereflowersPart1;
  Result := X3D0;
end;

begin
end.
