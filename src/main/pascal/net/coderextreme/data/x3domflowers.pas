unit x3domflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createx3domflowers: TX3DRootNode;

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
  Group15: TGroupNode;
  NavigationInfo16: TNavigationInfoNode;
  Background17: TBackgroundNode;
  Group18: TGroupNode;
  X3DExternalPrototype19: TX3DExternalPrototype;
  FieldVal20: TMFString;
  FieldVal21: TMFString;
  ProtoDeclare22: TX3DPrototype;
  Group24: TGroupNode;
  ProtoInstance25: TX3DPrototypeNode;
  ProtoInstance28: TX3DPrototypeNode;
  ProtoInstance29: TX3DPrototypeNode;
  ProtoInstance30: TX3DPrototypeNode;
  ProtoInstance31: TX3DPrototypeNode;
  ProtoInstance32: TX3DPrototypeNode;
  ProtoInstance33: TX3DPrototypeNode;

procedure Initx3domflowersPart0;
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
X3D0.Meta['title'] := 'x3domflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
Group15.FdChildren.Add(NavigationInfo16);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group15.FdChildren.Add(Background17);
Group18 := TGroupNode.Create;
X3DExternalPrototype19 := TX3DExternalPrototype.Create;
X3DExternalPrototype19.X3DName := 'FlowerProto';
X3DExternalPrototype19.Url := '"../data/flowerproto.x3dj#FlowerProto" "../data/flowerproto.json#FlowerProto"';
FieldVal20 := TMFString.CreateUndefined(X3DExternalPrototype19, True, 'vertex');
X3DExternalPrototype19.AddCustomFieldOrEvent(FieldVal20);
FieldVal21 := TMFString.CreateUndefined(X3DExternalPrototype19, True, 'fragment');
X3DExternalPrototype19.AddCustomFieldOrEvent(FieldVal21);
Group18.AddX3DExternalPrototype([X3DExternalPrototype19]);
ProtoDeclare22 := CreateEmptyPrototype('flower');
ProtoDeclare22.X3DName := 'flower';
end;

procedure Initx3domflowersPart1;
begin
Group24 := TGroupNode.Create;
ProtoInstance25 := TX3DPrototypeNode.CreatePrototypeNode('', '', X3DExternalPrototype19);
(ProtoInstance25.Field('vertex') as TMFString).Send(['../shaders/x3dom_flowers_chromatic.vs']);
(ProtoInstance25.Field('fragment') as TMFString).Send(['../shaders/common.fs']);
Group24.FdChildren.Add(ProtoInstance25.Instantiate);
ProtoDeclare22.Node.AddChildren([Group24]);
X3D0.AddPrototype(ProtoDeclare22);
ProtoInstance28 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare22);
Group18.FdChildren.Add(ProtoInstance28.Instantiate);
ProtoInstance29 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare22);
Group18.FdChildren.Add(ProtoInstance29.Instantiate);
ProtoInstance30 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare22);
Group18.FdChildren.Add(ProtoInstance30.Instantiate);
ProtoInstance31 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare22);
Group18.FdChildren.Add(ProtoInstance31.Instantiate);
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare22);
Group18.FdChildren.Add(ProtoInstance32.Instantiate);
ProtoInstance33 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare22);
Group18.FdChildren.Add(ProtoInstance33.Instantiate);
Group15.FdChildren.Add(Group18);
X3D0.AddChildren([Group15]);
end;

function Createx3domflowers: TX3DRootNode;
begin
  Initx3domflowersPart0;
  Initx3domflowersPart1;
  Result := X3D0;
end;

begin
end.
