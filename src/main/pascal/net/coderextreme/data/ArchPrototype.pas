unit ArchPrototype;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateArchPrototype: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group13: TGroupNode;
X3DPrototype14: TX3DPrototype;
X3DInterfaceDeclaration15: TX3DInterfaceDeclaration;
SFColor16: TSFColor;
SFColor17: TSFColor;
SFFloat18: TSFFloat;
SFFloat19: TSFFloat;
SFFloat20: TSFFloat;
SFFloat21: TSFFloat;
SFFloat22: TSFFloat;
SFFloat23: TSFFloat;
SFBool24: TSFBool;
SFFloat25: TSFFloat;
SFBool26: TSFBool;
SFBool27: TSFBool;
SFBool28: TSFBool;
SFBool29: TSFBool;
X3DPrototype30: TX3DPrototype;
Transform31: TTransformNode;
Shape32: TShapeNode;
IndexedFaceSet33: TIndexedFaceSetNode;
Coordinate34: TCoordinateNode;
Appearance35: TAppearanceNode;
Material36: TMaterialNode;
IS37: TIS;
connect38: Tconnect;
connect39: Tconnect;
Script40: TScriptNode;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
SFBool47: TSFBool;
SFFloat48: TSFFloat;
SFBool49: TSFBool;
SFBool50: TSFBool;
SFBool51: TSFBool;
SFBool52: TSFBool;
SFVec3f53: TSFVec3f;
MFVec3f54: TMFVec3f;
MFInt3255: TMFInt32;
IS56: TIS;
connect57: Tconnect;
connect58: Tconnect;
connect59: Tconnect;
connect60: Tconnect;
connect61: Tconnect;
connect62: Tconnect;
connect63: Tconnect;
connect64: Tconnect;
connect65: Tconnect;
connect66: Tconnect;
connect67: Tconnect;
connect68: Tconnect;
X3DPrototype72: TX3DPrototypeNode;
SFColor73: TSFColor;
SFColor74: TSFColor;
SFFloat75: TSFFloat;
SFFloat76: TSFFloat;
SFFloat77: TSFFloat;
SFFloat78: TSFFloat;
SFFloat79: TSFFloat;
SFFloat80: TSFFloat;
Inline81: TInlineNode;

procedure InitArchPrototypePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ArchPrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Michele Foti, Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['created'] := '15 December 2014';
{ METHOD .Meta }
X3D0.Meta['modified'] := '27 November 2015';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ArchModelingDiagrams.pdf';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Arch';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group13 := TGroupNode.Create;
X3DPrototype14 := TX3DPrototype.Create;
X3DPrototype14.Appinfo := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.';
X3DInterfaceDeclaration15 := TX3DInterfaceDeclaration.Create(nil);
{ COLOR OF ARCH }
{ INPUT PARAMETERS }
{ General parameters: measures in meters }
{ Parameters to create to create shapes related to arch: put true to apply }
SFColor16 := TSFColor.CreateUndefined(X3DInterfaceDeclaration15, false, 'diffuseColor');
SFColor16.Appinfo := 'color of arch';
SFColor16.Value := '0.2 0.8 0.8';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration15.AddSFColor([SFColor16]);
SFColor17 := TSFColor.CreateUndefined(X3DInterfaceDeclaration15, false, 'emissiveColor');
SFColor17.Appinfo := 'color of arch';
SFColor17.Value := '0.2 0.8 0.8';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration15.AddSFColor([SFColor17]);
SFFloat18 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'clearSpanWidth');
SFFloat18.Appinfo := 'clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference';
SFFloat18.Value := '4';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat18]);
SFFloat19 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'riseHeight');
SFFloat19.Appinfo := 'riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference';
SFFloat19.Value := '2';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat19]);
SFFloat20 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'depth');
SFFloat20.Appinfo := 'depth';
SFFloat20.Value := '3';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat20]);
SFFloat21 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'topAbutmentHeight');
end;

procedure InitArchPrototypePart1;
begin

SFFloat21.Appinfo := 'topAbutmentHeight:topAbutmentHeight=0 means no topAbutment';
SFFloat21.Value := '0.5';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat21]);
SFFloat22 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'pierWidth');
SFFloat22.Appinfo := 'pierWidth:pierWidtht=0 means no pierWidth';
SFFloat22.Value := '0.5';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat22]);
SFFloat23 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'pierHeight');
SFFloat23.Appinfo := 'pierHeight: pierHeight=0 means no pierHeight';
SFFloat23.Value := '1';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat23]);
SFBool24 := TSFBool.CreateUndefined(X3DInterfaceDeclaration15, false, 'archHalf');
SFBool24.Appinfo := 'archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width';
SFBool24.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration15.AddSFBool([SFBool24]);
SFFloat25 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'archHalfExtensionWidth');
SFFloat25.Appinfo := 'archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.';
SFFloat25.Value := '0';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat25]);
SFBool26 := TSFBool.CreateUndefined(X3DInterfaceDeclaration15, false, 'onlyIntrados');
SFBool26.Appinfo := 'onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.';
SFBool26.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration15.AddSFBool([SFBool26]);
SFBool27 := TSFBool.CreateUndefined(X3DInterfaceDeclaration15, false, 'archFilled');
SFBool27.Appinfo := 'archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.';
SFBool27.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration15.AddSFBool([SFBool27]);
SFBool28 := TSFBool.CreateUndefined(X3DInterfaceDeclaration15, false, 'archHalfFilled');
SFBool28.Appinfo := 'archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.';
SFBool28.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration15.AddSFBool([SFBool28]);
SFBool29 := TSFBool.CreateUndefined(X3DInterfaceDeclaration15, false, 'lintel');
SFBool29.Appinfo := 'lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.';
SFBool29.Value := 'false';
{ METHOD .AddSFBool }
X3DInterfaceDeclaration15.AddSFBool([SFBool29]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype14.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration15]);
X3DPrototype30 := TX3DPrototype.Create;
{ First node determines node type of this prototype }
{ IndexedFaceset creates arch }
Transform31 := TTransformNode.Create;
Shape32 := TShapeNode.Create;
{ note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly }
IndexedFaceSet33 := TIndexedFaceSetNode.Create;
end;

procedure InitArchPrototypePart2;
begin

IndexedFaceSet33.Convex := False;
IndexedFaceSet33.Solid := False;
Coordinate34 := TCoordinateNode.Create;
{ METHOD .Coord }
IndexedFaceSet33.Coord := Coordinate34;
{ METHOD .Geometry }
Shape32.Geometry := IndexedFaceSet33;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
IS37 := TIS.Create;
connect38 := Tconnect.Create;
connect38.NodeField := 'emissiveColor';
connect38.ProtoField := 'emissiveColor';
{ METHOD .Connect }
IS37.Connect := connect38;
connect39 := Tconnect.Create;
connect39.NodeField := 'diffuseColor';
connect39.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS37.Connect := connect39;
{ METHOD .IS }
Material36.IS := IS37;
{ METHOD .SetMaterial }
Appearance35.Material := Material36;
{ METHOD .Appearance }
Shape32.Appearance := Appearance35;
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(Shape32);
{ METHOD .AddTransform }
X3DPrototype30.AddTransform([Transform31]);
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs }
Script40 := TScriptNode.Create;
Script40.SetUrl(['../node/ArchPrototypeScript.js','https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js']);
{ INPUT PARAMETERS }
{ General parameters }
{ Parameters to create to create shapes related to arch: put true to apply }
{ OUTPUT PARAMETERS }
SFFloat41 := TSFFloat.CreateUndefined(Script40, false, 'clearSpanWidth');
SFFloat41.Appinfo := 'user or default input for clearSpanWidth parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat41);
SFFloat42 := TSFFloat.CreateUndefined(Script40, false, 'riseHeight');
SFFloat42.Appinfo := 'user or default input for riseHeight parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat42);
SFFloat43 := TSFFloat.CreateUndefined(Script40, false, 'depth');
SFFloat43.Appinfo := 'user or default input for depth parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat43);
SFFloat44 := TSFFloat.CreateUndefined(Script40, false, 'topAbutmentHeight');
SFFloat44.Appinfo := 'user or default input for topAbutmentHeight parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat44);
SFFloat45 := TSFFloat.CreateUndefined(Script40, false, 'pierWidth');
SFFloat45.Appinfo := 'user or default input for pierWidth parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat45);
SFFloat46 := TSFFloat.CreateUndefined(Script40, false, 'pierHeight');
SFFloat46.Appinfo := 'user or default input for pierHeight parameter';
end;

procedure InitArchPrototypePart3;
begin

{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat46);
SFBool47 := TSFBool.CreateUndefined(Script40, false, 'archHalf');
SFBool47.Appinfo := 'user or default input for archHalf parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFBool47);
SFFloat48 := TSFFloat.CreateUndefined(Script40, false, 'archHalfExtensionWidth');
SFFloat48.Appinfo := 'user or default input for archHalfExtensionWidth parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFFloat48);
SFBool49 := TSFBool.CreateUndefined(Script40, false, 'onlyIntrados');
SFBool49.Appinfo := 'user or default input for onlyIntrados parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFBool49);
SFBool50 := TSFBool.CreateUndefined(Script40, false, 'archFilled');
SFBool50.Appinfo := 'user or default input for archFilled parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFBool50);
SFBool51 := TSFBool.CreateUndefined(Script40, false, 'archHalfFilled');
SFBool51.Appinfo := 'user or default input for archHalfFilled parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFBool51);
SFBool52 := TSFBool.CreateUndefined(Script40, false, 'lintel');
SFBool52.Appinfo := 'user or default input for lintel parameter';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFBool52);
SFVec3f53 := TSFVec3f.CreateUndefined(Script40, false, 'computedScale');
SFVec3f53.Appinfo := 'computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFVec3f53);
MFVec3f54 := TMFVec3f.CreateUndefined(Script40, false, 'pointOut');
MFVec3f54.Appinfo := 'send computed points to the Coordinate node';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(MFVec3f54);
MFInt3255 := TMFInt32.CreateUndefined(Script40, false, 'indexOut');
MFInt3255.Appinfo := 'send computed indices to the IndexedFaceSet node';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(MFInt3255);
IS56 := TIS.Create;
connect57 := Tconnect.Create;
connect57.NodeField := 'clearSpanWidth';
connect57.ProtoField := 'clearSpanWidth';
{ METHOD .Connect }
IS56.Connect := connect57;
connect58 := Tconnect.Create;
connect58.NodeField := 'riseHeight';
connect58.ProtoField := 'riseHeight';
{ METHOD .Connect }
IS56.Connect := connect58;
connect59 := Tconnect.Create;
connect59.NodeField := 'depth';
connect59.ProtoField := 'depth';
end;

procedure InitArchPrototypePart4;
begin

{ METHOD .Connect }
IS56.Connect := connect59;
connect60 := Tconnect.Create;
connect60.NodeField := 'pierWidth';
connect60.ProtoField := 'pierWidth';
{ METHOD .Connect }
IS56.Connect := connect60;
connect61 := Tconnect.Create;
connect61.NodeField := 'topAbutmentHeight';
connect61.ProtoField := 'topAbutmentHeight';
{ METHOD .Connect }
IS56.Connect := connect61;
connect62 := Tconnect.Create;
connect62.NodeField := 'pierHeight';
connect62.ProtoField := 'pierHeight';
{ METHOD .Connect }
IS56.Connect := connect62;
connect63 := Tconnect.Create;
connect63.NodeField := 'archHalf';
connect63.ProtoField := 'archHalf';
{ METHOD .Connect }
IS56.Connect := connect63;
connect64 := Tconnect.Create;
connect64.NodeField := 'archHalfExtensionWidth';
connect64.ProtoField := 'archHalfExtensionWidth';
{ METHOD .Connect }
IS56.Connect := connect64;
connect65 := Tconnect.Create;
connect65.NodeField := 'onlyIntrados';
connect65.ProtoField := 'onlyIntrados';
{ METHOD .Connect }
IS56.Connect := connect65;
connect66 := Tconnect.Create;
connect66.NodeField := 'archFilled';
connect66.ProtoField := 'archFilled';
{ METHOD .Connect }
IS56.Connect := connect66;
connect67 := Tconnect.Create;
connect67.NodeField := 'archHalfFilled';
connect67.ProtoField := 'archHalfFilled';
{ METHOD .Connect }
IS56.Connect := connect67;
connect68 := Tconnect.Create;
connect68.NodeField := 'lintel';
connect68.ProtoField := 'lintel';
{ METHOD .Connect }
IS56.Connect := connect68;
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(IS56);
{ METHOD .AddScript }
X3DPrototype30.AddScript([Script40]);
{ Original "ArchPrototypeScript.computedScale TO ArchTransform.scale }
{ Sample ArchPrototypeScript.computedScale TO ArchTransform.scale}
X3DPrototype30.AddRoute(ArchPrototypeScript.[object Object], Transform31.scale);
end;

procedure InitArchPrototypePart5;
begin

{ METHOD .AddX3DROUTE }
{ Original "ArchPrototypeScript.pointOut TO ArchChord.point }
{ Sample ArchPrototypeScript.pointOut TO ArchChord.point}
X3DPrototype30.AddRoute(ArchPrototypeScript.[object Object], Coordinate34.point);
{ METHOD .AddX3DROUTE }
{ Original "ArchPrototypeScript.indexOut TO ArchIndex.EventSet_coordIndex }
{ Sample ArchPrototypeScript.indexOut TO ArchIndex.EventSet_coordIndex}
X3DPrototype30.AddRoute(ArchPrototypeScript.[object Object], IndexedFaceSet33.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype14.AddX3DPrototype([X3DPrototype30]);
{ METHOD .AddX3DPrototype }
Group13.AddX3DPrototype([X3DPrototype14]);
X3DPrototype72 := TX3DPrototypeNode.Create;
SFColor73 := TSFColor.CreateUndefined(X3DPrototype72, false, 'diffuseColor');
SFColor73.Value := '0.5 0.3 0.6';
{ METHOD .AddSFColor }
X3DPrototype72.AddSFColor([SFColor73]);
SFColor74 := TSFColor.CreateUndefined(X3DPrototype72, false, 'emissiveColor');
SFColor74.Value := '0.5 0.3 0.6';
{ METHOD .AddSFColor }
X3DPrototype72.AddSFColor([SFColor74]);
SFFloat75 := TSFFloat.CreateUndefined(X3DPrototype72, false, 'clearSpanWidth');
SFFloat75.Value := '5';
{ METHOD .AddSFFloat }
X3DPrototype72.AddSFFloat([SFFloat75]);
SFFloat76 := TSFFloat.CreateUndefined(X3DPrototype72, false, 'riseHeight');
SFFloat76.Value := '2.5';
{ METHOD .AddSFFloat }
X3DPrototype72.AddSFFloat([SFFloat76]);
SFFloat77 := TSFFloat.CreateUndefined(X3DPrototype72, false, 'depth');
SFFloat77.Value := '2';
{ METHOD .AddSFFloat }
X3DPrototype72.AddSFFloat([SFFloat77]);
SFFloat78 := TSFFloat.CreateUndefined(X3DPrototype72, false, 'topAbutmentHeight');
SFFloat78.Value := '0.6';
{ METHOD .AddSFFloat }
X3DPrototype72.AddSFFloat([SFFloat78]);
SFFloat79 := TSFFloat.CreateUndefined(X3DPrototype72, false, 'pierWidth');
SFFloat79.Value := '1';
{ METHOD .AddSFFloat }
X3DPrototype72.AddSFFloat([SFFloat79]);
SFFloat80 := TSFFloat.CreateUndefined(X3DPrototype72, false, 'pierHeight');
SFFloat80.Value := '2';
{ METHOD .AddSFFloat }
X3DPrototype72.AddSFFloat([SFFloat80]);
{ METHOD .AddX3DPrototype }
Group13.AddX3DPrototype([X3DPrototype72]);
{ Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) }
Inline81 := TInlineNode.Create;
Inline81.SetUrl(['../data/CoordinateAxes.x3d']);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Inline81);
{ METHOD .AddGroup }
X3D0.AddChildren([Group13]);
end;

function CreateArchPrototype: TX3DRootNode;
begin
InitArchPrototypePart0;
InitArchPrototypePart1;
InitArchPrototypePart2;
InitArchPrototypePart3;
InitArchPrototypePart4;
InitArchPrototypePart5;
Result := X3D0;
end;

begin
end.
