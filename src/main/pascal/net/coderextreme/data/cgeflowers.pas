unit cgeflowers;

interface

uses X3DNodes;

function Createcgeflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createcgeflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group14: TGroupNode;
X3DPrototype15: TX3DPrototype;
X3DInterfaceDeclaration16: TX3DInterfaceDeclaration;
X3DField17: TX3DField;
X3DField18: TX3DField;
X3DPrototype19: TX3DPrototype;
Transform20: TTransformNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ComposedCubeMapTexture24: TComposedCubeMapTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ComposedShader31: TComposedShaderNode;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
ShaderPart43: TShaderPartNode;
IS44: TIS;
connect45: Tconnect;
ShaderPart46: TShaderPartNode;
IS47: TIS;
connect48: Tconnect;
Sphere49: TSphereNode;
Script50: TScriptNode;
X3DField51: TX3DField;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
TimeSensor62: TTimeSensorNode;
NavigationInfo71: TNavigationInfoNode;
Background72: TBackgroundNode;
Group73: TGroupNode;
X3DPrototype74: TX3DPrototypeNode;
MFString75: TMFString;
MFString76: TMFString;
X3DPrototype77: TX3DPrototypeNode;
MFString78: TMFString;
MFString79: TMFString;
X3DPrototype80: TX3DPrototypeNode;
MFString81: TMFString;
MFString82: TMFString;
Group83: TGroupNode;
X3DPrototype84: TX3DPrototypeNode;
MFString85: TMFString;
MFString86: TMFString;
X3DPrototype87: TX3DPrototypeNode;
MFString88: TMFString;
MFString89: TMFString;
X3DPrototype90: TX3DPrototypeNode;
MFString91: TMFString;
MFString92: TMFString;
Group93: TGroupNode;
X3DPrototype94: TX3DPrototypeNode;
MFString95: TMFString;
MFString96: TMFString;
X3DPrototype97: TX3DPrototypeNode;
MFString98: TMFString;
MFString99: TMFString;
X3DPrototype100: TX3DPrototypeNode;
MFString101: TMFString;
MFString102: TMFString;
Group103: TGroupNode;
X3DPrototype104: TX3DPrototypeNode;
MFString105: TMFString;
MFString106: TMFString;
X3DPrototype107: TX3DPrototypeNode;
MFString108: TMFString;
MFString109: TMFString;
X3DPrototype110: TX3DPrototypeNode;
MFString111: TMFString;
MFString112: TMFString;
Group113: TGroupNode;
X3DPrototype114: TX3DPrototypeNode;
MFString115: TMFString;
MFString116: TMFString;
X3DPrototype117: TX3DPrototypeNode;
MFString118: TMFString;
MFString119: TMFString;
X3DPrototype120: TX3DPrototypeNode;
MFString121: TMFString;
MFString122: TMFString;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['Core'] := 2;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Grouping'] := 2;
X3D0.Components['Scripting'] := 1;
X3D0.Components['Shaders'] := 1;
X3D0.Meta['title'] := 'allflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := 'Nov 13 2022';
X3D0.Meta['description'] := '3 Composed Shaders';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/allflowers.x3d';
X3D0.Meta['modified'] := 'Fri, 13 Nov 2026 21:19:45 GMT';
X3D0.Meta['generator'] := 'Sunrize X3D Editor V2.6.6, https://create3000.github.io/sunrize/';
Group14 := TGroupNode.Create;
X3DPrototype15 := TX3DPrototype.Create;
X3DPrototype15.NameField := 'FlowerProto';
X3DInterfaceDeclaration16 := TX3DInterfaceDeclaration.Create(nil);
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'vertex';
X3DField17.AccessType := 'inputOutput';
X3DField17.Type := 'MFString';
X3DField17.Value := '\'../shaders/x_ite_flowers_chromatic.vs\' \'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs\'';
{ .SetX3DField }
X3DInterfaceDeclaration16.X3DField := X3DField17;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'fragment';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'MFString';
X3DField18.Value := '\'../shaders/x_ite.fs\' \'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs\'';
{ .AddX3DField }
X3DInterfaceDeclaration16.X3DField := X3DField18;
{ .SetX3DInterfaceDeclaration }
X3DPrototype15.X3DInterfaceDeclaration := X3DInterfaceDeclaration16;
X3DPrototype19 := TX3DPrototype.Create;
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture30;
{ .SetTexture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'cube';
X3DField32.AccessType := 'inputOnly';
X3DField32.Type := 'SFNode';
{ .SetX3DField }
ComposedShader31.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'chromaticDispertion';
X3DField33.AccessType := 'initializeOnly';
X3DField33.Type := 'SFVec3f';
X3DField33.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'bias';
X3DField34.AccessType := 'inputOnly';
X3DField34.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'scale';
X3DField35.AccessType := 'inputOnly';
X3DField35.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'power';
X3DField36.AccessType := 'inputOnly';
X3DField36.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'a';
X3DField37.AccessType := 'inputOnly';
X3DField37.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'b';
X3DField38.AccessType := 'inputOnly';
X3DField38.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'c';
X3DField39.AccessType := 'inputOnly';
X3DField39.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'd';
X3DField40.AccessType := 'inputOnly';
X3DField40.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'tdelta';
X3DField41.AccessType := 'inputOnly';
X3DField41.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'pdelta';
X3DField42.AccessType := 'inputOnly';
X3DField42.Type := 'SFFloat';
{ .AddX3DField }
ComposedShader31.X3DField := X3DField42;
ShaderPart43 := TShaderPartNode.Create;
ShaderPart43.Type := 'VERTEX';
IS44 := TIS.Create;
connect45 := Tconnect.Create;
connect45.NodeField := 'url';
connect45.ProtoField := 'vertex';
{ .AddConnect }
IS44.Connect := connect45;
{ .SetIS }
ShaderPart43.IS := IS44;
{ .AddParts }
ComposedShader31.Parts := ShaderPart43;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.Type := 'FRAGMENT';
IS47 := TIS.Create;
connect48 := Tconnect.Create;
connect48.NodeField := 'url';
connect48.ProtoField := 'fragment';
{ .AddConnect }
IS47.Connect := connect48;
{ .SetIS }
ShaderPart46.IS := IS47;
{ .AddParts }
ComposedShader31.Parts := ShaderPart46;
{ .AddShaders }
Appearance22.Shaders := ComposedShader31;
{ .SetAppearance }
Shape21.Appearance := Appearance22;
Sphere49 := TSphereNode.Create;
{ .SetGeometry }
Shape21.Geometry := Sphere49;
{ .AddChild }
Transform20.AddChildren([Shape21]);
Script50 := TScriptNode.Create;
Script50.Type := 'text/x-castlescript';
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'translation';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFVec3f';
{ .SetX3DField }
Script50.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'choice';
X3DField52.AccessType := 'initializeOnly';
X3DField52.Type := 'SFInt32';
X3DField52.Value := '0';
{ .AddX3DField }
Script50.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'j';
X3DField53.AccessType := 'initializeOnly';
X3DField53.Type := 'SFInt32';
X3DField53.Value := '0';
{ .AddX3DField }
Script50.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'velocity';
X3DField54.AccessType := 'outputOnly';
X3DField54.Type := 'SFVec3f';
{ .AddX3DField }
Script50.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'set_fraction';
X3DField55.AccessType := 'inputOnly';
X3DField55.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'a';
X3DField56.AccessType := 'outputOnly';
X3DField56.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'b';
X3DField57.AccessType := 'outputOnly';
X3DField57.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'c';
X3DField58.AccessType := 'outputOnly';
X3DField58.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'd';
X3DField59.AccessType := 'outputOnly';
X3DField59.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'tdelta';
X3DField60.AccessType := 'outputOnly';
X3DField60.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'pdelta';
X3DField61.AccessType := 'outputOnly';
X3DField61.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField61;

Script50.SetSourceCode('''castlescript:\n"+
"\n"+
"{ CastleScript cannot call user-defined functions, only built-ins,\n"+
"  so everything is inlined into the two event handlers. }\n"+
"\n"+
"function initialize(timestamp)\n"+
"  (\n"+
"  translation := vector(0.0, 0.0, 0.0);\n"+
"  velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)\n"+
"  )\n"+
"\n"+
"function set_fraction(value, timestamp)\n"+
"  (\n"+
"  { move, bouncing back to a fresh start when out of the +-10 box }\n"+
"  translation := translation + velocity;\n"+
"  j := 0;\n"+
"  while(j < 3,\n"+
"    (\n"+
"    if(abs(vector_get(translation, 0)) > 10,\n"+
"      (translation := vector(0.0, 0.0, 0.0);\n"+
"         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),\n"+
"    if(abs(vector_get(translation, 1)) > 10,\n"+
"      (translation := vector(0.0, 0.0, 0.0);\n"+
"         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),\n"+
"    if(abs(vector_get(translation, 2)) > 10,\n"+
"      (translation := vector(0.0, 0.0, 0.0);\n"+
"         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),\n"+
"      velocity := vector(\n"+
"        vector_get(velocity, 0) + random() * 0.2 - 0.1,\n"+
"        vector_get(velocity, 1) + random() * 0.2 - 0.1,\n"+
"        vector_get(velocity, 2) + random() * 0.2 - 0.1))));\n"+
"    j := j + 1\n"+
"    )\n"+
"  );\n"+
"\n"+
"  { animate the shader parameters }\n"+
"  choice := floor(random() * 4);\n"+
"  if(choice = 0, a := a + random() * 0.2 - 0.1,\n"+
"  if(choice = 1, b := b + random() * 0.2 - 0.1,\n"+
"  if(choice = 2, c := c + random() * 2 - 1,\n"+
"                 d := d + random() * 2 - 1)));\n"+
"  tdelta := tdelta + 0.5;\n"+
"  pdelta := pdelta + 0.5;\n"+
"  when(a > 1, a := 0.5);\n"+
"  when(b > 1, b := 0.5);\n"+
"  when(c < 1, c := 4);\n"+
"  when(d < 1, d := 4);\n"+
"  when(c > 10, c := 4);\n"+
"  when(d > 10, d := 4)\n"+
"  )''');
{ .AddChildren }
Transform20.AddChildren([Script50]);
TimeSensor62 := TTimeSensorNode.Create;
TimeSensor62.CycleInterval := 5;
TimeSensor62.Loop := True;
{ .AddChildren }
Transform20.AddChildren([TimeSensor62]);
{ .SetTransform }
X3DPrototype19.Transform := Transform20;
X3DPrototype19.AddRoute(TimeSensor62.EventFraction_changed, Script50.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.EventTranslation_changed, Transform20.FdTranslation);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.FdA, ComposedShader31.FdA);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.FdB, ComposedShader31.FdB);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.FdC, ComposedShader31.FdC);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.FdD, ComposedShader31.FdD);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.FdTdelta, ComposedShader31.FdTdelta);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script50.FdPdelta, ComposedShader31.FdPdelta);
{ .AddX3DRoute }
{ .AddX3DPrototype }
X3DPrototype15.X3DPrototype := X3DPrototype19;
{ .SetX3DPrototype }
Group14.X3DPrototype := X3DPrototype15;
NavigationInfo71 := TNavigationInfoNode.Create;
{ .AddChildren }
Group14.AddChildren([NavigationInfo71]);
Background72 := TBackgroundNode.Create;
Background72.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background72.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background72.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background72.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background72.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background72.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group14.AddChildren([Background72]);
Group73 := TGroupNode.Create;
X3DPrototype74 := TX3DPrototypeNode.Create;
X3DPrototype74.NameField := 'FlowerProto';
MFString75 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString75.NameField := 'vertex';
MFString75.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype74.MFString := MFString75;
MFString76 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString76.NameField := 'fragment';
MFString76.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype74.MFString := MFString76;
{ .SetX3DPrototype }
Group73.X3DPrototype := X3DPrototype74;
X3DPrototype77 := TX3DPrototypeNode.Create;
X3DPrototype77.NameField := 'FlowerProto';
MFString78 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString78.NameField := 'vertex';
MFString78.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype77.MFString := MFString78;
MFString79 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString79.NameField := 'fragment';
MFString79.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype77.MFString := MFString79;
{ .AddX3DPrototype }
Group73.X3DPrototype := X3DPrototype77;
X3DPrototype80 := TX3DPrototypeNode.Create;
X3DPrototype80.NameField := 'FlowerProto';
MFString81 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString81.NameField := 'vertex';
MFString81.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype80.MFString := MFString81;
MFString82 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString82.NameField := 'fragment';
MFString82.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype80.MFString := MFString82;
{ .AddX3DPrototype }
Group73.X3DPrototype := X3DPrototype80;
{ .AddChildren }
Group14.AddChildren([Group73]);
Group83 := TGroupNode.Create;
X3DPrototype84 := TX3DPrototypeNode.Create;
X3DPrototype84.NameField := 'FlowerProto';
MFString85 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString85.NameField := 'vertex';
MFString85.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype84.MFString := MFString85;
MFString86 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString86.NameField := 'fragment';
MFString86.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype84.MFString := MFString86;
{ .SetX3DPrototype }
Group83.X3DPrototype := X3DPrototype84;
X3DPrototype87 := TX3DPrototypeNode.Create;
X3DPrototype87.NameField := 'FlowerProto';
MFString88 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString88.NameField := 'vertex';
MFString88.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype87.MFString := MFString88;
MFString89 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString89.NameField := 'fragment';
MFString89.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype87.MFString := MFString89;
{ .AddX3DPrototype }
Group83.X3DPrototype := X3DPrototype87;
X3DPrototype90 := TX3DPrototypeNode.Create;
X3DPrototype90.NameField := 'FlowerProto';
MFString91 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString91.NameField := 'vertex';
MFString91.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype90.MFString := MFString91;
MFString92 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString92.NameField := 'fragment';
MFString92.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype90.MFString := MFString92;
{ .AddX3DPrototype }
Group83.X3DPrototype := X3DPrototype90;
{ .AddChildren }
Group14.AddChildren([Group83]);
Group93 := TGroupNode.Create;
X3DPrototype94 := TX3DPrototypeNode.Create;
X3DPrototype94.NameField := 'FlowerProto';
MFString95 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString95.NameField := 'vertex';
MFString95.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype94.MFString := MFString95;
MFString96 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString96.NameField := 'fragment';
MFString96.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype94.MFString := MFString96;
{ .SetX3DPrototype }
Group93.X3DPrototype := X3DPrototype94;
X3DPrototype97 := TX3DPrototypeNode.Create;
X3DPrototype97.NameField := 'FlowerProto';
MFString98 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString98.NameField := 'vertex';
MFString98.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype97.MFString := MFString98;
MFString99 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString99.NameField := 'fragment';
MFString99.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype97.MFString := MFString99;
{ .AddX3DPrototype }
Group93.X3DPrototype := X3DPrototype97;
X3DPrototype100 := TX3DPrototypeNode.Create;
X3DPrototype100.NameField := 'FlowerProto';
MFString101 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString101.NameField := 'vertex';
MFString101.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype100.MFString := MFString101;
MFString102 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString102.NameField := 'fragment';
MFString102.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype100.MFString := MFString102;
{ .AddX3DPrototype }
Group93.X3DPrototype := X3DPrototype100;
{ .AddChildren }
Group14.AddChildren([Group93]);
Group103 := TGroupNode.Create;
X3DPrototype104 := TX3DPrototypeNode.Create;
X3DPrototype104.NameField := 'FlowerProto';
MFString105 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString105.NameField := 'vertex';
MFString105.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype104.MFString := MFString105;
MFString106 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString106.NameField := 'fragment';
MFString106.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype104.MFString := MFString106;
{ .SetX3DPrototype }
Group103.X3DPrototype := X3DPrototype104;
X3DPrototype107 := TX3DPrototypeNode.Create;
X3DPrototype107.NameField := 'FlowerProto';
MFString108 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString108.NameField := 'vertex';
MFString108.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype107.MFString := MFString108;
MFString109 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString109.NameField := 'fragment';
MFString109.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype107.MFString := MFString109;
{ .AddX3DPrototype }
Group103.X3DPrototype := X3DPrototype107;
X3DPrototype110 := TX3DPrototypeNode.Create;
X3DPrototype110.NameField := 'FlowerProto';
MFString111 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString111.NameField := 'vertex';
MFString111.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype110.MFString := MFString111;
MFString112 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString112.NameField := 'fragment';
MFString112.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype110.MFString := MFString112;
{ .AddX3DPrototype }
Group103.X3DPrototype := X3DPrototype110;
{ .AddChildren }
Group14.AddChildren([Group103]);
Group113 := TGroupNode.Create;
X3DPrototype114 := TX3DPrototypeNode.Create;
X3DPrototype114.NameField := 'FlowerProto';
MFString115 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString115.NameField := 'vertex';
MFString115.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype114.MFString := MFString115;
MFString116 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString116.NameField := 'fragment';
MFString116.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype114.MFString := MFString116;
{ .SetX3DPrototype }
Group113.X3DPrototype := X3DPrototype114;
X3DPrototype117 := TX3DPrototypeNode.Create;
X3DPrototype117.NameField := 'FlowerProto';
MFString118 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString118.NameField := 'vertex';
MFString118.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype117.MFString := MFString118;
MFString119 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString119.NameField := 'fragment';
MFString119.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype117.MFString := MFString119;
{ .AddX3DPrototype }
Group113.X3DPrototype := X3DPrototype117;
X3DPrototype120 := TX3DPrototypeNode.Create;
X3DPrototype120.NameField := 'FlowerProto';
MFString121 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString121.NameField := 'vertex';
MFString121.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype120.MFString := MFString121;
MFString122 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString122.NameField := 'fragment';
MFString122.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype120.MFString := MFString122;
{ .AddX3DPrototype }
Group113.X3DPrototype := X3DPrototype120;
{ .AddChildren }
Group14.AddChildren([Group113]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;

begin
end.
