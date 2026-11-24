unit ArchPrototype;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Script38: TScriptNode;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFBool45: TSFBool;
SFFloat46: TSFFloat;
SFBool47: TSFBool;
SFBool48: TSFBool;
SFBool49: TSFBool;
SFBool50: TSFBool;
SFVec3f51: TSFVec3f;
MFVec3f52: TMFVec3f;
MFInt3253: TMFInt32;
X3DPrototype58: TX3DPrototypeNode;
SFColor59: TSFColor;
SFColor60: TSFColor;
SFFloat61: TSFFloat;
SFFloat62: TSFFloat;
SFFloat63: TSFFloat;
SFFloat64: TSFFloat;
SFFloat65: TSFFloat;
SFFloat66: TSFFloat;
Inline67: TInlineNode;

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
Group13 := TGroupNode.Create;;
X3DPrototype14 := TX3DPrototype.Create;;
X3DPrototype14.Appinfo := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.';
X3DInterfaceDeclaration15 := TX3DInterfaceDeclaration.Create(nil);;
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
end;

procedure InitArchPrototypePart1;
begin

SFFloat20.Value := '3';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration15.AddSFFloat([SFFloat20]);
SFFloat21 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration15, false, 'topAbutmentHeight');
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
end;

procedure InitArchPrototypePart2;
begin
;
{ First node determines node type of this prototype }
{ IndexedFaceset creates arch }
Transform31 := TTransformNode.Create;;
Shape32 := TShapeNode.Create;;
{ note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly }
IndexedFaceSet33 := TIndexedFaceSetNode.Create;;
IndexedFaceSet33.Convex := False;
IndexedFaceSet33.Solid := False;
Coordinate34 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet33.Coord := Coordinate34;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape32.Geometry := IndexedFaceSet33;
Appearance35 := TAppearanceNode.Create;;
Material36 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance35.Material := Material36;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape32.Appearance := Appearance35;
{ METHOD .FdChildren.Add }
Transform31.FdChildren.Add(Shape32);
{ METHOD .AddTransform }
X3DPrototype30.AddTransform([Transform31]);
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs }
Script38 := TScriptNode.Create;;
Script38.SetUrl(['../node/ArchPrototypeScript.js','https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js']);
{ INPUT PARAMETERS }
{ General parameters }
{ Parameters to create to create shapes related to arch: put true to apply }
{ OUTPUT PARAMETERS }
SFFloat39 := TSFFloat.CreateUndefined(Script38, false, 'clearSpanWidth');
SFFloat39.Appinfo := 'user or default input for clearSpanWidth parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat39);
SFFloat40 := TSFFloat.CreateUndefined(Script38, false, 'riseHeight');
SFFloat40.Appinfo := 'user or default input for riseHeight parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat40);
SFFloat41 := TSFFloat.CreateUndefined(Script38, false, 'depth');
SFFloat41.Appinfo := 'user or default input for depth parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat41);
SFFloat42 := TSFFloat.CreateUndefined(Script38, false, 'topAbutmentHeight');
SFFloat42.Appinfo := 'user or default input for topAbutmentHeight parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat42);
SFFloat43 := TSFFloat.CreateUndefined(Script38, false, 'pierWidth');
SFFloat43.Appinfo := 'user or default input for pierWidth parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat43);
SFFloat44 := TSFFloat.CreateUndefined(Script38, false, 'pierHeight');
end;

procedure InitArchPrototypePart3;
begin

SFFloat44.Appinfo := 'user or default input for pierHeight parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat44);
SFBool45 := TSFBool.CreateUndefined(Script38, false, 'archHalf');
SFBool45.Appinfo := 'user or default input for archHalf parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFBool45);
SFFloat46 := TSFFloat.CreateUndefined(Script38, false, 'archHalfExtensionWidth');
SFFloat46.Appinfo := 'user or default input for archHalfExtensionWidth parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat46);
SFBool47 := TSFBool.CreateUndefined(Script38, false, 'onlyIntrados');
SFBool47.Appinfo := 'user or default input for onlyIntrados parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFBool47);
SFBool48 := TSFBool.CreateUndefined(Script38, false, 'archFilled');
SFBool48.Appinfo := 'user or default input for archFilled parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFBool48);
SFBool49 := TSFBool.CreateUndefined(Script38, false, 'archHalfFilled');
SFBool49.Appinfo := 'user or default input for archHalfFilled parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFBool49);
SFBool50 := TSFBool.CreateUndefined(Script38, false, 'lintel');
SFBool50.Appinfo := 'user or default input for lintel parameter';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFBool50);
SFVec3f51 := TSFVec3f.CreateUndefined(Script38, false, 'computedScale');
SFVec3f51.Appinfo := 'computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFVec3f51);
MFVec3f52 := TMFVec3f.CreateUndefined(Script38, false, 'pointOut');
MFVec3f52.Appinfo := 'send computed points to the Coordinate node';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(MFVec3f52);
MFInt3253 := TMFInt32.CreateUndefined(Script38, false, 'indexOut');
MFInt3253.Appinfo := 'send computed indices to the IndexedFaceSet node';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(MFInt3253);
{ METHOD .AddScript }
X3DPrototype30.AddScript([Script38]);
{ Original "ArchPrototypeScript.computedScale TO ArchTransform.scale }
{ Sample ArchPrototypeScript.computedScale TO ArchTransform.scale}
X3DPrototype30.AddRoute(ArchPrototypeScript.undefined, Transform31.scale);
{ METHOD .AddX3DROUTE }
{ Original "ArchPrototypeScript.pointOut TO ArchChord.point }
{ Sample ArchPrototypeScript.pointOut TO ArchChord.point}
X3DPrototype30.AddRoute(ArchPrototypeScript.undefined, Coordinate34.point);
{ METHOD .AddX3DROUTE }
{ Original "ArchPrototypeScript.indexOut TO ArchIndex.EventSet_coordIndex }
{ Sample ArchPrototypeScript.indexOut TO ArchIndex.EventSet_coordIndex}
X3DPrototype30.AddRoute(ArchPrototypeScript.undefined, IndexedFaceSet33.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype14.AddX3DPrototype([X3DPrototype30]);
{ METHOD .AddX3DPrototype }
Group13.AddX3DPrototype([X3DPrototype14]);
X3DPrototype58 := TX3DPrototypeNode;
SFColor59 := TSFColor.CreateUndefined(X3DPrototype58, false, 'diffuseColor');
SFColor59.Value := '0.5 0.3 0.6';
{ METHOD .AddSFColor }
X3DPrototype58.AddSFColor([SFColor59]);
SFColor60 := TSFColor.CreateUndefined(X3DPrototype58, false, 'emissiveColor');
end;

procedure InitArchPrototypePart4;
begin

SFColor60.Value := '0.5 0.3 0.6';
{ METHOD .AddSFColor }
X3DPrototype58.AddSFColor([SFColor60]);
SFFloat61 := TSFFloat.CreateUndefined(X3DPrototype58, false, 'clearSpanWidth');
SFFloat61.Value := '5';
{ METHOD .AddSFFloat }
X3DPrototype58.AddSFFloat([SFFloat61]);
SFFloat62 := TSFFloat.CreateUndefined(X3DPrototype58, false, 'riseHeight');
SFFloat62.Value := '2.5';
{ METHOD .AddSFFloat }
X3DPrototype58.AddSFFloat([SFFloat62]);
SFFloat63 := TSFFloat.CreateUndefined(X3DPrototype58, false, 'depth');
SFFloat63.Value := '2';
{ METHOD .AddSFFloat }
X3DPrototype58.AddSFFloat([SFFloat63]);
SFFloat64 := TSFFloat.CreateUndefined(X3DPrototype58, false, 'topAbutmentHeight');
SFFloat64.Value := '0.6';
{ METHOD .AddSFFloat }
X3DPrototype58.AddSFFloat([SFFloat64]);
SFFloat65 := TSFFloat.CreateUndefined(X3DPrototype58, false, 'pierWidth');
SFFloat65.Value := '1';
{ METHOD .AddSFFloat }
X3DPrototype58.AddSFFloat([SFFloat65]);
SFFloat66 := TSFFloat.CreateUndefined(X3DPrototype58, false, 'pierHeight');
SFFloat66.Value := '2';
{ METHOD .AddSFFloat }
X3DPrototype58.AddSFFloat([SFFloat66]);
{ METHOD .AddX3DPrototype }
Group13.AddX3DPrototype([X3DPrototype58]);
{ Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) }
Inline67 := TInlineNode.Create;;
Inline67.SetUrl(['../data/CoordinateAxes.x3d']);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Inline67);
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
Result := X3D0;
end;

begin
end.
