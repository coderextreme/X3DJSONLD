unit allflowers;

interface

uses X3DNodes;

function Createallflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createallflowers: TX3DRootNode;
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
Script62: TScriptNode;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DField67: TX3DField;
X3DField68: TX3DField;
X3DField69: TX3DField;
X3DField70: TX3DField;
X3DField71: TX3DField;
TimeSensor72: TTimeSensorNode;
NavigationInfo89: TNavigationInfoNode;
Background90: TBackgroundNode;
Group91: TGroupNode;
X3DPrototype92: TX3DPrototypeNode;
MFString93: TMFString;
MFString94: TMFString;
X3DPrototype95: TX3DPrototypeNode;
MFString96: TMFString;
MFString97: TMFString;
X3DPrototype98: TX3DPrototypeNode;
MFString99: TMFString;
MFString100: TMFString;
Group101: TGroupNode;
X3DPrototype102: TX3DPrototypeNode;
MFString103: TMFString;
MFString104: TMFString;
X3DPrototype105: TX3DPrototypeNode;
MFString106: TMFString;
MFString107: TMFString;
X3DPrototype108: TX3DPrototypeNode;
MFString109: TMFString;
MFString110: TMFString;
Group111: TGroupNode;
X3DPrototype112: TX3DPrototypeNode;
MFString113: TMFString;
MFString114: TMFString;
X3DPrototype115: TX3DPrototypeNode;
MFString116: TMFString;
MFString117: TMFString;
X3DPrototype118: TX3DPrototypeNode;
MFString119: TMFString;
MFString120: TMFString;
Group121: TGroupNode;
X3DPrototype122: TX3DPrototypeNode;
MFString123: TMFString;
MFString124: TMFString;
X3DPrototype125: TX3DPrototypeNode;
MFString126: TMFString;
MFString127: TMFString;
X3DPrototype128: TX3DPrototypeNode;
MFString129: TMFString;
MFString130: TMFString;
Group131: TGroupNode;
X3DPrototype132: TX3DPrototypeNode;
MFString133: TMFString;
MFString134: TMFString;
X3DPrototype135: TX3DPrototypeNode;
MFString136: TMFString;
MFString137: TMFString;
X3DPrototype138: TX3DPrototypeNode;
MFString139: TMFString;
MFString140: TMFString;
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
Script62 := TScriptNode.Create;
Script62.DirectOutput := True;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'translation';
X3DField63.AccessType := 'inputOutput';
X3DField63.Type := 'SFVec3f';
{ .SetX3DField }
Script62.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'velocity';
X3DField64.AccessType := 'outputOnly';
X3DField64.Type := 'SFVec3f';
{ .AddX3DField }
Script62.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'set_fraction';
X3DField65.AccessType := 'inputOnly';
X3DField65.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'a';
X3DField66.AccessType := 'outputOnly';
X3DField66.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'b';
X3DField67.AccessType := 'outputOnly';
X3DField67.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField67;
X3DField68 := TX3DField.Create;
X3DField68.NameField := 'c';
X3DField68.AccessType := 'outputOnly';
X3DField68.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField68;
X3DField69 := TX3DField.Create;
X3DField69.NameField := 'd';
X3DField69.AccessType := 'outputOnly';
X3DField69.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField69;
X3DField70 := TX3DField.Create;
X3DField70.NameField := 'tdelta';
X3DField70.AccessType := 'outputOnly';
X3DField70.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField70;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'pdelta';
X3DField71.AccessType := 'outputOnly';
X3DField71.Type := 'SFFloat';
{ .AddX3DField }
Script62.X3DField := X3DField71;

Script62.SetSourceCode('''ecmascript:\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}''');
{ .AddChildren }
Transform20.AddChildren([Script62]);
TimeSensor72 := TTimeSensorNode.Create;
TimeSensor72.CycleInterval := 5;
TimeSensor72.Loop := True;
{ .AddChildren }
Transform20.AddChildren([TimeSensor72]);
{ .SetTransform }
X3DPrototype19.Transform := Transform20;
X3DPrototype19.AddRoute(TimeSensor72.EventFraction_changed, Script62.EventSet_fraction);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.EventTranslation_changed, Transform20.FdTranslation);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.FdA, ComposedShader31.FdA);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.FdB, ComposedShader31.FdB);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.FdC, ComposedShader31.FdC);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.FdD, ComposedShader31.FdD);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.FdTdelta, ComposedShader31.FdTdelta);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(Script62.FdPdelta, ComposedShader31.FdPdelta);
{ .AddX3DRoute }
X3DPrototype19.AddRoute(TimeSensor72.EventFraction_changed, Script50.EventSet_fraction);
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
NavigationInfo89 := TNavigationInfoNode.Create;
{ .AddChildren }
Group14.AddChildren([NavigationInfo89]);
Background90 := TBackgroundNode.Create;
Background90.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background90.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background90.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background90.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background90.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background90.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group14.AddChildren([Background90]);
Group91 := TGroupNode.Create;
X3DPrototype92 := TX3DPrototypeNode.Create;
X3DPrototype92.NameField := 'FlowerProto';
MFString93 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString93.NameField := 'vertex';
MFString93.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype92.MFString := MFString93;
MFString94 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString94.NameField := 'fragment';
MFString94.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype92.MFString := MFString94;
{ .SetX3DPrototype }
Group91.X3DPrototype := X3DPrototype92;
X3DPrototype95 := TX3DPrototypeNode.Create;
X3DPrototype95.NameField := 'FlowerProto';
MFString96 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString96.NameField := 'vertex';
MFString96.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype95.MFString := MFString96;
MFString97 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString97.NameField := 'fragment';
MFString97.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype95.MFString := MFString97;
{ .AddX3DPrototype }
Group91.X3DPrototype := X3DPrototype95;
X3DPrototype98 := TX3DPrototypeNode.Create;
X3DPrototype98.NameField := 'FlowerProto';
MFString99 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString99.NameField := 'vertex';
MFString99.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype98.MFString := MFString99;
MFString100 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString100.NameField := 'fragment';
MFString100.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype98.MFString := MFString100;
{ .AddX3DPrototype }
Group91.X3DPrototype := X3DPrototype98;
{ .AddChildren }
Group14.AddChildren([Group91]);
Group101 := TGroupNode.Create;
X3DPrototype102 := TX3DPrototypeNode.Create;
X3DPrototype102.NameField := 'FlowerProto';
MFString103 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString103.NameField := 'vertex';
MFString103.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype102.MFString := MFString103;
MFString104 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString104.NameField := 'fragment';
MFString104.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype102.MFString := MFString104;
{ .SetX3DPrototype }
Group101.X3DPrototype := X3DPrototype102;
X3DPrototype105 := TX3DPrototypeNode.Create;
X3DPrototype105.NameField := 'FlowerProto';
MFString106 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString106.NameField := 'vertex';
MFString106.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype105.MFString := MFString106;
MFString107 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString107.NameField := 'fragment';
MFString107.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype105.MFString := MFString107;
{ .AddX3DPrototype }
Group101.X3DPrototype := X3DPrototype105;
X3DPrototype108 := TX3DPrototypeNode.Create;
X3DPrototype108.NameField := 'FlowerProto';
MFString109 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString109.NameField := 'vertex';
MFString109.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype108.MFString := MFString109;
MFString110 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString110.NameField := 'fragment';
MFString110.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype108.MFString := MFString110;
{ .AddX3DPrototype }
Group101.X3DPrototype := X3DPrototype108;
{ .AddChildren }
Group14.AddChildren([Group101]);
Group111 := TGroupNode.Create;
X3DPrototype112 := TX3DPrototypeNode.Create;
X3DPrototype112.NameField := 'FlowerProto';
MFString113 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString113.NameField := 'vertex';
MFString113.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype112.MFString := MFString113;
MFString114 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString114.NameField := 'fragment';
MFString114.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype112.MFString := MFString114;
{ .SetX3DPrototype }
Group111.X3DPrototype := X3DPrototype112;
X3DPrototype115 := TX3DPrototypeNode.Create;
X3DPrototype115.NameField := 'FlowerProto';
MFString116 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString116.NameField := 'vertex';
MFString116.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype115.MFString := MFString116;
MFString117 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString117.NameField := 'fragment';
MFString117.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype115.MFString := MFString117;
{ .AddX3DPrototype }
Group111.X3DPrototype := X3DPrototype115;
X3DPrototype118 := TX3DPrototypeNode.Create;
X3DPrototype118.NameField := 'FlowerProto';
MFString119 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString119.NameField := 'vertex';
MFString119.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype118.MFString := MFString119;
MFString120 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString120.NameField := 'fragment';
MFString120.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype118.MFString := MFString120;
{ .AddX3DPrototype }
Group111.X3DPrototype := X3DPrototype118;
{ .AddChildren }
Group14.AddChildren([Group111]);
Group121 := TGroupNode.Create;
X3DPrototype122 := TX3DPrototypeNode.Create;
X3DPrototype122.NameField := 'FlowerProto';
MFString123 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString123.NameField := 'vertex';
MFString123.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype122.MFString := MFString123;
MFString124 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString124.NameField := 'fragment';
MFString124.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype122.MFString := MFString124;
{ .SetX3DPrototype }
Group121.X3DPrototype := X3DPrototype122;
X3DPrototype125 := TX3DPrototypeNode.Create;
X3DPrototype125.NameField := 'FlowerProto';
MFString126 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString126.NameField := 'vertex';
MFString126.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype125.MFString := MFString126;
MFString127 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString127.NameField := 'fragment';
MFString127.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype125.MFString := MFString127;
{ .AddX3DPrototype }
Group121.X3DPrototype := X3DPrototype125;
X3DPrototype128 := TX3DPrototypeNode.Create;
X3DPrototype128.NameField := 'FlowerProto';
MFString129 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString129.NameField := 'vertex';
MFString129.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype128.MFString := MFString129;
MFString130 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString130.NameField := 'fragment';
MFString130.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype128.MFString := MFString130;
{ .AddX3DPrototype }
Group121.X3DPrototype := X3DPrototype128;
{ .AddChildren }
Group14.AddChildren([Group121]);
Group131 := TGroupNode.Create;
X3DPrototype132 := TX3DPrototypeNode.Create;
X3DPrototype132.NameField := 'FlowerProto';
MFString133 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString133.NameField := 'vertex';
MFString133.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype132.MFString := MFString133;
MFString134 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString134.NameField := 'fragment';
MFString134.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype132.MFString := MFString134;
{ .SetX3DPrototype }
Group131.X3DPrototype := X3DPrototype132;
X3DPrototype135 := TX3DPrototypeNode.Create;
X3DPrototype135.NameField := 'FlowerProto';
MFString136 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString136.NameField := 'vertex';
MFString136.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype135.MFString := MFString136;
MFString137 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString137.NameField := 'fragment';
MFString137.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype135.MFString := MFString137;
{ .AddX3DPrototype }
Group131.X3DPrototype := X3DPrototype135;
X3DPrototype138 := TX3DPrototypeNode.Create;
X3DPrototype138.NameField := 'FlowerProto';
MFString139 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString139.NameField := 'vertex';
MFString139.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype138.MFString := MFString139;
MFString140 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString140.NameField := 'fragment';
MFString140.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype138.MFString := MFString140;
{ .AddX3DPrototype }
Group131.X3DPrototype := X3DPrototype138;
{ .AddChildren }
Group14.AddChildren([Group131]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;

begin
end.
