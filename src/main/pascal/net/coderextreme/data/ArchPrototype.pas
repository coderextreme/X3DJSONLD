unit ArchPrototype;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateArchPrototype: TX3DRootNode;

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
  Group13: TGroupNode;
  ProtoDeclare14: TX3DPrototype;
  FieldDecl16: TX3DInterfaceDeclaration;
  FieldVal16: TSFColor;
  FieldDecl17: TX3DInterfaceDeclaration;
  FieldVal17: TSFColor;
  FieldDecl18: TX3DInterfaceDeclaration;
  FieldVal18: TSFFloat;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TSFFloat;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TSFFloat;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFFloat;
  FieldDecl22: TX3DInterfaceDeclaration;
  FieldVal22: TSFFloat;
  FieldDecl23: TX3DInterfaceDeclaration;
  FieldVal23: TSFFloat;
  FieldDecl24: TX3DInterfaceDeclaration;
  FieldVal24: TSFBool;
  FieldDecl25: TX3DInterfaceDeclaration;
  FieldVal25: TSFFloat;
  FieldDecl26: TX3DInterfaceDeclaration;
  FieldVal26: TSFBool;
  FieldDecl27: TX3DInterfaceDeclaration;
  FieldVal27: TSFBool;
  FieldDecl28: TX3DInterfaceDeclaration;
  FieldVal28: TSFBool;
  FieldDecl29: TX3DInterfaceDeclaration;
  FieldVal29: TSFBool;
  Transform31: TTransformNode;
  Shape32: TShapeNode;
  IndexedFaceSet33: TIndexedFaceSetNode;
  Coordinate34: TCoordinateNode;
  Appearance35: TAppearanceNode;
  Material36: TMaterialNode;
  Script37: TScriptNode;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFFloat;
  FieldVal41: TSFFloat;
  FieldVal42: TSFFloat;
  FieldVal43: TSFFloat;
  FieldVal44: TSFBool;
  FieldVal45: TSFFloat;
  FieldVal46: TSFBool;
  FieldVal47: TSFBool;
  FieldVal48: TSFBool;
  FieldVal49: TSFBool;
  FieldVal50: TX3DEvent;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  ProtoInstance56: TX3DPrototypeNode;
  Inline65: TInlineNode;

procedure InitArchPrototypePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ArchPrototype.x3d';
X3D0.Meta['description'] := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.';
X3D0.Meta['description'] := 'Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.';
X3D0.Meta['creator'] := 'Michele Foti, Don Brutzman';
X3D0.Meta['created'] := '15 December 2014';
X3D0.Meta['modified'] := '27 November 2015';
X3D0.Meta['reference'] := 'ArchModelingDiagrams.pdf';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Arch';
X3D0.Meta['identifier'] := 'http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group13 := TGroupNode.Create;
ProtoDeclare14 := CreateEmptyPrototype('ArchPrototype');
ProtoDeclare14.X3DName := 'ArchPrototype';
ProtoDeclare14.Appinfo := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.';
FieldVal16 := TSFColor.Create(nil, True, 'diffuseColor', Vector3(0.2, 0.8, 0.8));
FieldDecl16 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl16.FieldOrEvent := FieldVal16;
FieldVal16.ParentInterfaceDeclaration := FieldDecl16;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl16);
FieldVal17 := TSFColor.Create(nil, True, 'emissiveColor', Vector3(0.2, 0.8, 0.8));
FieldDecl17 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl17.FieldOrEvent := FieldVal17;
FieldVal17.ParentInterfaceDeclaration := FieldDecl17;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl17);
FieldVal18 := TSFFloat.Create(nil, False, 'clearSpanWidth', 4);
FieldDecl18 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl18.FieldOrEvent := FieldVal18;
FieldVal18.ParentInterfaceDeclaration := FieldDecl18;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl18);
FieldVal19 := TSFFloat.Create(nil, False, 'riseHeight', 2);
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TSFFloat.Create(nil, False, 'depth', 3);
end;

procedure InitArchPrototypePart1;
begin
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl20);
FieldVal21 := TSFFloat.Create(nil, False, 'topAbutmentHeight', 0.5);
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl21);
FieldVal22 := TSFFloat.Create(nil, False, 'pierWidth', 0.5);
FieldDecl22 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl22.FieldOrEvent := FieldVal22;
FieldVal22.ParentInterfaceDeclaration := FieldDecl22;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl22);
FieldVal23 := TSFFloat.Create(nil, False, 'pierHeight', 1);
FieldDecl23 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl23.FieldOrEvent := FieldVal23;
FieldVal23.ParentInterfaceDeclaration := FieldDecl23;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl23);
FieldVal24 := TSFBool.Create(nil, False, 'archHalf', False);
FieldDecl24 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl24.FieldOrEvent := FieldVal24;
FieldVal24.ParentInterfaceDeclaration := FieldDecl24;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl24);
FieldVal25 := TSFFloat.Create(nil, False, 'archHalfExtensionWidth', 0);
FieldDecl25 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl25.FieldOrEvent := FieldVal25;
FieldVal25.ParentInterfaceDeclaration := FieldDecl25;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl25);
FieldVal26 := TSFBool.Create(nil, False, 'onlyIntrados', False);
FieldDecl26 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl26.FieldOrEvent := FieldVal26;
FieldVal26.ParentInterfaceDeclaration := FieldDecl26;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl26);
FieldVal27 := TSFBool.Create(nil, False, 'archFilled', False);
FieldDecl27 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl27.FieldOrEvent := FieldVal27;
FieldVal27.ParentInterfaceDeclaration := FieldDecl27;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl27);
FieldVal28 := TSFBool.Create(nil, False, 'archHalfFilled', False);
end;

procedure InitArchPrototypePart2;
begin
FieldDecl28 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl28.FieldOrEvent := FieldVal28;
FieldVal28.ParentInterfaceDeclaration := FieldDecl28;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl28);
FieldVal29 := TSFBool.Create(nil, False, 'lintel', False);
FieldDecl29 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl29.FieldOrEvent := FieldVal29;
FieldVal29.ParentInterfaceDeclaration := FieldDecl29;
ProtoDeclare14.InterfaceDeclarations.Add(FieldDecl29);
{ First node determines node type of this prototype }
{ IndexedFaceset creates arch }
Transform31 := TTransformNode.Create;
Transform31.X3DName := 'ArchTransform';
Shape32 := TShapeNode.Create;
Shape32.X3DName := 'Arch';
{ note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly }
IndexedFaceSet33 := TIndexedFaceSetNode.Create;
IndexedFaceSet33.X3DName := 'ArchIndex';
IndexedFaceSet33.Convex := False;
IndexedFaceSet33.Solid := False;
Coordinate34 := TCoordinateNode.Create;
Coordinate34.X3DName := 'ArchChord';
IndexedFaceSet33.Coord := Coordinate34;
Shape32.Geometry := IndexedFaceSet33;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
Material36.X3DName := 'MaterialNode';
Material36.FieldOrEvent('emissiveColor', True).IsClauseNamesAdd('emissiveColor');
Material36.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
Appearance35.Material := Material36;
Shape32.Appearance := Appearance35;
Transform31.FdChildren.Add(Shape32);
ProtoDeclare14.Node.AddChildren([Transform31]);
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs }
Script37 := TScriptNode.Create;
Script37.X3DName := 'ArchPrototypeScript';
Script37.SetUrl(['../node/ArchPrototypeScript.js', 'https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js']);
{ INPUT PARAMETERS }
{ General parameters }
end;

procedure InitArchPrototypePart3;
begin
{ Parameters to create to create shapes related to arch: put true to apply }
{ OUTPUT PARAMETERS }
FieldVal38 := TSFFloat.CreateUndefined(Script37, False, 'clearSpanWidth');
Script37.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.CreateUndefined(Script37, False, 'riseHeight');
Script37.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.CreateUndefined(Script37, False, 'depth');
Script37.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.CreateUndefined(Script37, False, 'topAbutmentHeight');
Script37.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.CreateUndefined(Script37, False, 'pierWidth');
Script37.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.CreateUndefined(Script37, False, 'pierHeight');
Script37.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFBool.CreateUndefined(Script37, False, 'archHalf');
Script37.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.CreateUndefined(Script37, False, 'archHalfExtensionWidth');
Script37.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFBool.CreateUndefined(Script37, False, 'onlyIntrados');
Script37.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFBool.CreateUndefined(Script37, False, 'archFilled');
Script37.AddCustomFieldOrEvent(FieldVal47);
FieldVal48 := TSFBool.CreateUndefined(Script37, False, 'archHalfFilled');
Script37.AddCustomFieldOrEvent(FieldVal48);
FieldVal49 := TSFBool.CreateUndefined(Script37, False, 'lintel');
Script37.AddCustomFieldOrEvent(FieldVal49);
FieldVal50 := TSFVec3f.CreateEvent(Script37, 'computedScale', False);
Script37.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TMFVec3f.CreateEvent(Script37, 'pointOut', False);
Script37.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TMFInt32.CreateEvent(Script37, 'indexOut', False);
Script37.AddCustomFieldOrEvent(FieldVal52);
Script37.FieldOrEvent('clearSpanWidth', True).IsClauseNamesAdd('clearSpanWidth');
Script37.FieldOrEvent('riseHeight', True).IsClauseNamesAdd('riseHeight');
Script37.FieldOrEvent('depth', True).IsClauseNamesAdd('depth');
Script37.FieldOrEvent('pierWidth', True).IsClauseNamesAdd('pierWidth');
Script37.FieldOrEvent('topAbutmentHeight', True).IsClauseNamesAdd('topAbutmentHeight');
Script37.FieldOrEvent('pierHeight', True).IsClauseNamesAdd('pierHeight');
Script37.FieldOrEvent('archHalf', True).IsClauseNamesAdd('archHalf');
Script37.FieldOrEvent('archHalfExtensionWidth', True).IsClauseNamesAdd('archHalfExtensionWidth');
end;

procedure InitArchPrototypePart4;
begin
Script37.FieldOrEvent('onlyIntrados', True).IsClauseNamesAdd('onlyIntrados');
Script37.FieldOrEvent('archFilled', True).IsClauseNamesAdd('archFilled');
Script37.FieldOrEvent('archHalfFilled', True).IsClauseNamesAdd('archHalfFilled');
Script37.FieldOrEvent('lintel', True).IsClauseNamesAdd('lintel');
ProtoDeclare14.Node.AddChildren([Script37]);
{ ROUTE ArchPrototypeScript.computedScale TO ArchTransform.scale }
ProtoBody30.AddRoute(FieldVal50, Transform31.scale);
{ ROUTE ArchPrototypeScript.pointOut TO ArchChord.point }
ProtoBody30.AddRoute(FieldVal51, Coordinate34.point);
{ ROUTE ArchPrototypeScript.indexOut TO ArchIndex.set_coordIndex }
ProtoBody30.AddRoute(FieldVal52, IndexedFaceSet33.EventSet_coordIndex);
X3D0.AddPrototype(ProtoDeclare14);
ProtoInstance56 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare14);
ProtoInstance56.X3DName := 'ArchInstance';
(ProtoInstance56.Field('diffuseColor') as TSFColor).Value := Vector3(0.5, 0.3, 0.6);
(ProtoInstance56.Field('emissiveColor') as TSFColor).Value := Vector3(0.5, 0.3, 0.6);
(ProtoInstance56.Field('clearSpanWidth') as TSFFloat).Value := 5;
(ProtoInstance56.Field('riseHeight') as TSFFloat).Value := 2.5;
(ProtoInstance56.Field('depth') as TSFFloat).Value := 2;
(ProtoInstance56.Field('topAbutmentHeight') as TSFFloat).Value := 0.6;
(ProtoInstance56.Field('pierWidth') as TSFFloat).Value := 1;
(ProtoInstance56.Field('pierHeight') as TSFFloat).Value := 2;
Group13.FdChildren.Add(ProtoInstance56.Instantiate);
{ Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) }
Inline65 := TInlineNode.Create;
Inline65.X3DName := 'CoordinateAxes';
Inline65.SetUrl(['../data/CoordinateAxes.x3d']);
Group13.FdChildren.Add(Inline65);
X3D0.AddChildren([Group13]);
end;

function CreateArchPrototype: TX3DRootNode;
begin
  InitArchPrototypePart0;
  InitArchPrototypePart1;
  InitArchPrototypePart2;
  InitArchPrototypePart3;
  InitArchPrototypePart4;
  Result := X3D0;
end;

begin
end.
