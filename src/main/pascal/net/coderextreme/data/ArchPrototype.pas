unit ArchPrototype;

interface

uses X3DNodes;

function CreateArchPrototype: TX3DRootNode;

implementation

uses CastleVectors;

function CreateArchPrototype: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
X3DPrototype14: TX3DPrototype;
X3DInterfaceDeclaration15: TX3DInterfaceDeclaration;
X3DField16: TX3DField;
X3DField17: TX3DField;
X3DField18: TX3DField;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
X3DField27: TX3DField;
X3DField28: TX3DField;
X3DField29: TX3DField;
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
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
X3DField48: TX3DField;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
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
X3DPrototype14 := TX3DPrototype.Create;
X3DPrototype14.NameField := 'ArchPrototype';
X3DPrototype14.Appinfo := 'Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.';
X3DInterfaceDeclaration15 := TX3DInterfaceDeclaration.Create(nil);
{ COLOR OF ARCH }
{ INPUT PARAMETERS }
{ General parameters: measures in meters }
{ Parameters to create to create shapes related to arch: put true to apply }
X3DField16 := TX3DField.Create;
X3DField16.NameField := 'diffuseColor';
X3DField16.AccessType := 'inputOutput';
X3DField16.Appinfo := 'color of arch';
X3DField16.Type := 'SFColor';
X3DField16.Value := '0.2 0.8 0.8';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField16;
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'emissiveColor';
X3DField17.AccessType := 'inputOutput';
X3DField17.Appinfo := 'color of arch';
X3DField17.Type := 'SFColor';
X3DField17.Value := '0.2 0.8 0.8';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField17;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'clearSpanWidth';
X3DField18.AccessType := 'initializeOnly';
X3DField18.Appinfo := 'clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference';
X3DField18.Type := 'SFFloat';
X3DField18.Value := '4';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'riseHeight';
X3DField19.AccessType := 'initializeOnly';
X3DField19.Appinfo := 'riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference';
X3DField19.Type := 'SFFloat';
X3DField19.Value := '2';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'depth';
X3DField20.AccessType := 'initializeOnly';
X3DField20.Appinfo := 'depth';
X3DField20.Type := 'SFFloat';
X3DField20.Value := '3';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'topAbutmentHeight';
X3DField21.AccessType := 'initializeOnly';
X3DField21.Appinfo := 'topAbutmentHeight:topAbutmentHeight=0 means no topAbutment';
X3DField21.Type := 'SFFloat';
X3DField21.Value := '0.5';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'pierWidth';
X3DField22.AccessType := 'initializeOnly';
X3DField22.Appinfo := 'pierWidth:pierWidtht=0 means no pierWidth';
X3DField22.Type := 'SFFloat';
X3DField22.Value := '0.5';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'pierHeight';
X3DField23.AccessType := 'initializeOnly';
X3DField23.Appinfo := 'pierHeight: pierHeight=0 means no pierHeight';
X3DField23.Type := 'SFFloat';
X3DField23.Value := '1';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'archHalf';
X3DField24.AccessType := 'initializeOnly';
X3DField24.Appinfo := 'archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width';
X3DField24.Type := 'SFBool';
X3DField24.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'archHalfExtensionWidth';
X3DField25.AccessType := 'initializeOnly';
X3DField25.Appinfo := 'archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.';
X3DField25.Type := 'SFFloat';
X3DField25.Value := '0';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'onlyIntrados';
X3DField26.AccessType := 'initializeOnly';
X3DField26.Appinfo := 'onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.';
X3DField26.Type := 'SFBool';
X3DField26.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'archFilled';
X3DField27.AccessType := 'initializeOnly';
X3DField27.Appinfo := 'archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.';
X3DField27.Type := 'SFBool';
X3DField27.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField27;
X3DField28 := TX3DField.Create;
X3DField28.NameField := 'archHalfFilled';
X3DField28.AccessType := 'initializeOnly';
X3DField28.Appinfo := 'archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.';
X3DField28.Type := 'SFBool';
X3DField28.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField28;
X3DField29 := TX3DField.Create;
X3DField29.NameField := 'lintel';
X3DField29.AccessType := 'initializeOnly';
X3DField29.Appinfo := 'lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.';
X3DField29.Type := 'SFBool';
X3DField29.Value := 'false';
{ .AddX3DField }
X3DInterfaceDeclaration15.X3DField := X3DField29;
{ .SetX3DInterfaceDeclaration }
X3DPrototype14.X3DInterfaceDeclaration := X3DInterfaceDeclaration15;
X3DPrototype30 := TX3DPrototype.Create;
{ First node determines node type of this prototype }
{ IndexedFaceset creates arch }
Transform31 := TTransformNode.Create;
Shape32 := TShapeNode.Create;
{ note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly }
IndexedFaceSet33 := TIndexedFaceSetNode.Create;
IndexedFaceSet33.Convex := False;
IndexedFaceSet33.Solid := False;
Coordinate34 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet33.Coord := Coordinate34;
{ .SetGeometry }
Shape32.Geometry := IndexedFaceSet33;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
IS37 := TIS.Create;
connect38 := Tconnect.Create;
connect38.NodeField := 'emissiveColor';
connect38.ProtoField := 'emissiveColor';
{ .AddConnect }
IS37.Connect := connect38;
connect39 := Tconnect.Create;
connect39.NodeField := 'diffuseColor';
connect39.ProtoField := 'diffuseColor';
{ .AddConnect }
IS37.Connect := connect39;
{ .SetIS }
Material36.IS := IS37;
{ .SetMaterial }
Appearance35.Material := Material36;
{ .SetAppearance }
Shape32.Appearance := Appearance35;
{ .AddChild }
Transform31.AddChildren([Shape32]);
{ .AddTransform }
X3DPrototype30.Transform := Transform31;
{ Subsequent nodes do not render, but still must be a valid X3D subgraph }
{ This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs }
Script40 := TScriptNode.Create;
Script40.SetUrl(['../node/ArchPrototypeScript.js','https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js']);
{ INPUT PARAMETERS }
{ General parameters }
{ Parameters to create to create shapes related to arch: put true to apply }
{ OUTPUT PARAMETERS }
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'clearSpanWidth';
X3DField41.AccessType := 'initializeOnly';
X3DField41.Appinfo := 'user or default input for clearSpanWidth parameter';
X3DField41.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'riseHeight';
X3DField42.AccessType := 'initializeOnly';
X3DField42.Appinfo := 'user or default input for riseHeight parameter';
X3DField42.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'depth';
X3DField43.AccessType := 'initializeOnly';
X3DField43.Appinfo := 'user or default input for depth parameter';
X3DField43.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'topAbutmentHeight';
X3DField44.AccessType := 'initializeOnly';
X3DField44.Appinfo := 'user or default input for topAbutmentHeight parameter';
X3DField44.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'pierWidth';
X3DField45.AccessType := 'initializeOnly';
X3DField45.Appinfo := 'user or default input for pierWidth parameter';
X3DField45.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'pierHeight';
X3DField46.AccessType := 'initializeOnly';
X3DField46.Appinfo := 'user or default input for pierHeight parameter';
X3DField46.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'archHalf';
X3DField47.AccessType := 'initializeOnly';
X3DField47.Appinfo := 'user or default input for archHalf parameter';
X3DField47.Type := 'SFBool';
{ .AddX3DField }
Script40.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'archHalfExtensionWidth';
X3DField48.AccessType := 'initializeOnly';
X3DField48.Appinfo := 'user or default input for archHalfExtensionWidth parameter';
X3DField48.Type := 'SFFloat';
{ .AddX3DField }
Script40.X3DField := X3DField48;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'onlyIntrados';
X3DField49.AccessType := 'initializeOnly';
X3DField49.Appinfo := 'user or default input for onlyIntrados parameter';
X3DField49.Type := 'SFBool';
{ .AddX3DField }
Script40.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'archFilled';
X3DField50.AccessType := 'initializeOnly';
X3DField50.Appinfo := 'user or default input for archFilled parameter';
X3DField50.Type := 'SFBool';
{ .AddX3DField }
Script40.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'archHalfFilled';
X3DField51.AccessType := 'initializeOnly';
X3DField51.Appinfo := 'user or default input for archHalfFilled parameter';
X3DField51.Type := 'SFBool';
{ .AddX3DField }
Script40.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'lintel';
X3DField52.AccessType := 'initializeOnly';
X3DField52.Appinfo := 'user or default input for lintel parameter';
X3DField52.Type := 'SFBool';
{ .AddX3DField }
Script40.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'computedScale';
X3DField53.AccessType := 'outputOnly';
X3DField53.Appinfo := 'computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth';
X3DField53.Type := 'SFVec3f';
{ .AddX3DField }
Script40.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'pointOut';
X3DField54.AccessType := 'outputOnly';
X3DField54.Appinfo := 'send computed points to the Coordinate node';
X3DField54.Type := 'MFVec3f';
{ .AddX3DField }
Script40.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'indexOut';
X3DField55.AccessType := 'outputOnly';
X3DField55.Appinfo := 'send computed indices to the IndexedFaceSet node';
X3DField55.Type := 'MFInt32';
{ .AddX3DField }
Script40.X3DField := X3DField55;
IS56 := TIS.Create;
connect57 := Tconnect.Create;
connect57.NodeField := 'clearSpanWidth';
connect57.ProtoField := 'clearSpanWidth';
{ .AddConnect }
IS56.Connect := connect57;
connect58 := Tconnect.Create;
connect58.NodeField := 'riseHeight';
connect58.ProtoField := 'riseHeight';
{ .AddConnect }
IS56.Connect := connect58;
connect59 := Tconnect.Create;
connect59.NodeField := 'depth';
connect59.ProtoField := 'depth';
{ .AddConnect }
IS56.Connect := connect59;
connect60 := Tconnect.Create;
connect60.NodeField := 'pierWidth';
connect60.ProtoField := 'pierWidth';
{ .AddConnect }
IS56.Connect := connect60;
connect61 := Tconnect.Create;
connect61.NodeField := 'topAbutmentHeight';
connect61.ProtoField := 'topAbutmentHeight';
{ .AddConnect }
IS56.Connect := connect61;
connect62 := Tconnect.Create;
connect62.NodeField := 'pierHeight';
connect62.ProtoField := 'pierHeight';
{ .AddConnect }
IS56.Connect := connect62;
connect63 := Tconnect.Create;
connect63.NodeField := 'archHalf';
connect63.ProtoField := 'archHalf';
{ .AddConnect }
IS56.Connect := connect63;
connect64 := Tconnect.Create;
connect64.NodeField := 'archHalfExtensionWidth';
connect64.ProtoField := 'archHalfExtensionWidth';
{ .AddConnect }
IS56.Connect := connect64;
connect65 := Tconnect.Create;
connect65.NodeField := 'onlyIntrados';
connect65.ProtoField := 'onlyIntrados';
{ .AddConnect }
IS56.Connect := connect65;
connect66 := Tconnect.Create;
connect66.NodeField := 'archFilled';
connect66.ProtoField := 'archFilled';
{ .AddConnect }
IS56.Connect := connect66;
connect67 := Tconnect.Create;
connect67.NodeField := 'archHalfFilled';
connect67.ProtoField := 'archHalfFilled';
{ .AddConnect }
IS56.Connect := connect67;
connect68 := Tconnect.Create;
connect68.NodeField := 'lintel';
connect68.ProtoField := 'lintel';
{ .AddConnect }
IS56.Connect := connect68;
{ .SetIS }
Script40.IS := IS56;
{ .AddScript }
X3DPrototype30.Script := Script40;
X3DPrototype30.AddRoute(Script40.FdComputedscale, Transform31.FdScale);
{ .AddX3DRoute }
X3DPrototype30.AddRoute(Script40.FdPointout, Coordinate34.FdPoint);
{ .AddX3DRoute }
X3DPrototype30.AddRoute(Script40.FdIndexout, IndexedFaceSet33.EventSet_coordindex);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype14.X3DPrototype := X3DPrototype30;
{ .SetX3DPrototype }
Group13.X3DPrototype := X3DPrototype14;
X3DPrototype72 := TX3DPrototypeNode.Create;
X3DPrototype72.NameField := 'ArchPrototype';
SFColor73 := TSFColor.Create(ArchPrototype1, false, 'diffuseColor', Vector3(0.5,0.3,0.6));
SFColor73.NameField := 'diffuseColor';
SFColor73.Value := '0.5 0.3 0.6';
{ .SetSFColor }
X3DPrototype72.SFColor := SFColor73;
SFColor74 := TSFColor.Create(ArchPrototype1, false, 'emissiveColor', Vector3(0.5,0.3,0.6));
SFColor74.NameField := 'emissiveColor';
SFColor74.Value := '0.5 0.3 0.6';
{ .AddSFColor }
X3DPrototype72.SFColor := SFColor74;
SFFloat75 := TSFFloat.Create(ArchPrototype1, false, 'clearSpanWidth', 5);
SFFloat75.NameField := 'clearSpanWidth';
SFFloat75.Value := '5';
{ .AddSFFloat }
X3DPrototype72.SFFloat := SFFloat75;
SFFloat76 := TSFFloat.Create(ArchPrototype1, false, 'riseHeight', 2.5);
SFFloat76.NameField := 'riseHeight';
SFFloat76.Value := '2.5';
{ .AddSFFloat }
X3DPrototype72.SFFloat := SFFloat76;
SFFloat77 := TSFFloat.Create(ArchPrototype1, false, 'depth', 2);
SFFloat77.NameField := 'depth';
SFFloat77.Value := '2';
{ .AddSFFloat }
X3DPrototype72.SFFloat := SFFloat77;
SFFloat78 := TSFFloat.Create(ArchPrototype1, false, 'topAbutmentHeight', 0.6);
SFFloat78.NameField := 'topAbutmentHeight';
SFFloat78.Value := '0.6';
{ .AddSFFloat }
X3DPrototype72.SFFloat := SFFloat78;
SFFloat79 := TSFFloat.Create(ArchPrototype1, false, 'pierWidth', 1);
SFFloat79.NameField := 'pierWidth';
SFFloat79.Value := '1';
{ .AddSFFloat }
X3DPrototype72.SFFloat := SFFloat79;
SFFloat80 := TSFFloat.Create(ArchPrototype1, false, 'pierHeight', 2);
SFFloat80.NameField := 'pierHeight';
SFFloat80.Value := '2';
{ .AddSFFloat }
X3DPrototype72.SFFloat := SFFloat80;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype72;
{ Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) }
Inline81 := TInlineNode.Create;
Inline81.SetUrl(['../data/CoordinateAxes.x3d']);
{ .AddChildren }
Group13.AddChildren([Inline81]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;

begin
end.
