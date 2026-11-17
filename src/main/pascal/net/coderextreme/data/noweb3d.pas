unit noweb3d;

interface

uses X3DNodes;

function Createnoweb3d: TX3DRootNode;

implementation

uses CastleVectors;

function Createnoweb3d: TX3DRootNode;
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
TimeSensor60: TTimeSensorNode;
NavigationInfo69: TNavigationInfoNode;
Background70: TBackgroundNode;
Group71: TGroupNode;
X3DPrototype72: TX3DPrototypeNode;
MFString73: TMFString;
MFString74: TMFString;
X3DPrototype75: TX3DPrototypeNode;
MFString76: TMFString;
MFString77: TMFString;
X3DPrototype78: TX3DPrototypeNode;
MFString79: TMFString;
MFString80: TMFString;
Group81: TGroupNode;
X3DPrototype82: TX3DPrototypeNode;
MFString83: TMFString;
MFString84: TMFString;
X3DPrototype85: TX3DPrototypeNode;
MFString86: TMFString;
MFString87: TMFString;
X3DPrototype88: TX3DPrototypeNode;
MFString89: TMFString;
MFString90: TMFString;
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
Script50.DirectOutput := True;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'translation';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFVec3f';
{ .SetX3DField }
Script50.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'velocity';
X3DField52.AccessType := 'outputOnly';
X3DField52.Type := 'SFVec3f';
{ .AddX3DField }
Script50.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'set_fraction';
X3DField53.AccessType := 'inputOnly';
X3DField53.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'a';
X3DField54.AccessType := 'outputOnly';
X3DField54.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'b';
X3DField55.AccessType := 'outputOnly';
X3DField55.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'c';
X3DField56.AccessType := 'outputOnly';
X3DField56.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'd';
X3DField57.AccessType := 'outputOnly';
X3DField57.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'tdelta';
X3DField58.AccessType := 'outputOnly';
X3DField58.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'pdelta';
X3DField59.AccessType := 'outputOnly';
X3DField59.Type := 'SFFloat';
{ .AddX3DField }
Script50.X3DField := X3DField59;

Script50.SetSourceCode('''ecmascript:\n"+
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
Transform20.AddChildren([Script50]);
TimeSensor60 := TTimeSensorNode.Create;
TimeSensor60.CycleInterval := 5;
TimeSensor60.Loop := True;
{ .AddChildren }
Transform20.AddChildren([TimeSensor60]);
{ .SetTransform }
X3DPrototype19.Transform := Transform20;
X3DPrototype19.AddRoute(TimeSensor60.EventFraction_changed, Script50.EventSet_fraction);
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
NavigationInfo69 := TNavigationInfoNode.Create;
{ .AddChildren }
Group14.AddChildren([NavigationInfo69]);
Background70 := TBackgroundNode.Create;
Background70.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background70.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background70.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background70.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background70.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background70.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .AddChildren }
Group14.AddChildren([Background70]);
Group71 := TGroupNode.Create;
X3DPrototype72 := TX3DPrototypeNode.Create;
X3DPrototype72.NameField := 'FlowerProto';
MFString73 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString73.NameField := 'vertex';
MFString73.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype72.MFString := MFString73;
MFString74 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString74.NameField := 'fragment';
MFString74.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype72.MFString := MFString74;
{ .SetX3DPrototype }
Group71.X3DPrototype := X3DPrototype72;
X3DPrototype75 := TX3DPrototypeNode.Create;
X3DPrototype75.NameField := 'FlowerProto';
MFString76 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString76.NameField := 'vertex';
MFString76.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype75.MFString := MFString76;
MFString77 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString77.NameField := 'fragment';
MFString77.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype75.MFString := MFString77;
{ .AddX3DPrototype }
Group71.X3DPrototype := X3DPrototype75;
X3DPrototype78 := TX3DPrototypeNode.Create;
X3DPrototype78.NameField := 'FlowerProto';
MFString79 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString79.NameField := 'vertex';
MFString79.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype78.MFString := MFString79;
MFString80 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/x_ite.fs']));
MFString80.NameField := 'fragment';
MFString80.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype78.MFString := MFString80;
{ .AddX3DPrototype }
Group71.X3DPrototype := X3DPrototype78;
{ .AddChildren }
Group14.AddChildren([Group71]);
Group81 := TGroupNode.Create;
X3DPrototype82 := TX3DPrototypeNode.Create;
X3DPrototype82.NameField := 'FlowerProto';
MFString83 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString83.NameField := 'vertex';
MFString83.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype82.MFString := MFString83;
MFString84 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString84.NameField := 'fragment';
MFString84.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype82.MFString := MFString84;
{ .SetX3DPrototype }
Group81.X3DPrototype := X3DPrototype82;
X3DPrototype85 := TX3DPrototypeNode.Create;
X3DPrototype85.NameField := 'FlowerProto';
MFString86 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString86.NameField := 'vertex';
MFString86.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype85.MFString := MFString86;
MFString87 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString87.NameField := 'fragment';
MFString87.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype85.MFString := MFString87;
{ .AddX3DPrototype }
Group81.X3DPrototype := X3DPrototype85;
X3DPrototype88 := TX3DPrototypeNode.Create;
X3DPrototype88.NameField := 'FlowerProto';
MFString89 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString89.NameField := 'vertex';
MFString89.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype88.MFString := MFString89;
MFString90 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/common.fs']));
MFString90.NameField := 'fragment';
MFString90.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype88.MFString := MFString90;
{ .AddX3DPrototype }
Group81.X3DPrototype := X3DPrototype88;
{ .AddChildren }
Group14.AddChildren([Group81]);
Group91 := TGroupNode.Create;
X3DPrototype92 := TX3DPrototypeNode.Create;
X3DPrototype92.NameField := 'FlowerProto';
MFString93 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString93.NameField := 'vertex';
MFString93.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype92.MFString := MFString93;
MFString94 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString94.NameField := 'fragment';
MFString94.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype92.MFString := MFString94;
{ .SetX3DPrototype }
Group91.X3DPrototype := X3DPrototype92;
X3DPrototype95 := TX3DPrototypeNode.Create;
X3DPrototype95.NameField := 'FlowerProto';
MFString96 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString96.NameField := 'vertex';
MFString96.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype95.MFString := MFString96;
MFString97 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString97.NameField := 'fragment';
MFString97.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype95.MFString := MFString97;
{ .AddX3DPrototype }
Group91.X3DPrototype := X3DPrototype95;
X3DPrototype98 := TX3DPrototypeNode.Create;
X3DPrototype98.NameField := 'FlowerProto';
MFString99 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/gl_flowers_plain.vs']));
MFString99.NameField := 'vertex';
MFString99.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ .SetMFString }
X3DPrototype98.MFString := MFString99;
MFString100 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/plain.fs']));
MFString100.NameField := 'fragment';
MFString100.Value := '\"../shaders/plain.fs\"';
{ .AddMFString }
X3DPrototype98.MFString := MFString100;
{ .AddX3DPrototype }
Group91.X3DPrototype := X3DPrototype98;
{ .AddChildren }
Group14.AddChildren([Group91]);
Group101 := TGroupNode.Create;
X3DPrototype102 := TX3DPrototypeNode.Create;
X3DPrototype102.NameField := 'FlowerProto';
MFString103 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString103.NameField := 'vertex';
MFString103.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype102.MFString := MFString103;
MFString104 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString104.NameField := 'fragment';
MFString104.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype102.MFString := MFString104;
{ .SetX3DPrototype }
Group101.X3DPrototype := X3DPrototype102;
X3DPrototype105 := TX3DPrototypeNode.Create;
X3DPrototype105.NameField := 'FlowerProto';
MFString106 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString106.NameField := 'vertex';
MFString106.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype105.MFString := MFString106;
MFString107 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString107.NameField := 'fragment';
MFString107.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype105.MFString := MFString107;
{ .AddX3DPrototype }
Group101.X3DPrototype := X3DPrototype105;
X3DPrototype108 := TX3DPrototypeNode.Create;
X3DPrototype108.NameField := 'FlowerProto';
MFString109 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/pc_flowers.vs']));
MFString109.NameField := 'vertex';
MFString109.Value := '\"../shaders/pc_flowers.vs\"';
{ .SetMFString }
X3DPrototype108.MFString := MFString109;
MFString110 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/pc_flowers.fs']));
MFString110.NameField := 'fragment';
MFString110.Value := '\"../shaders/pc_flowers.fs\"';
{ .AddMFString }
X3DPrototype108.MFString := MFString110;
{ .AddX3DPrototype }
Group101.X3DPrototype := X3DPrototype108;
{ .AddChildren }
Group14.AddChildren([Group101]);
Group111 := TGroupNode.Create;
X3DPrototype112 := TX3DPrototypeNode.Create;
X3DPrototype112.NameField := 'FlowerProto';
MFString113 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString113.NameField := 'vertex';
MFString113.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype112.MFString := MFString113;
MFString114 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString114.NameField := 'fragment';
MFString114.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype112.MFString := MFString114;
{ .SetX3DPrototype }
Group111.X3DPrototype := X3DPrototype112;
X3DPrototype115 := TX3DPrototypeNode.Create;
X3DPrototype115.NameField := 'FlowerProto';
MFString116 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString116.NameField := 'vertex';
MFString116.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype115.MFString := MFString116;
MFString117 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString117.NameField := 'fragment';
MFString117.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype115.MFString := MFString117;
{ .AddX3DPrototype }
Group111.X3DPrototype := X3DPrototype115;
X3DPrototype118 := TX3DPrototypeNode.Create;
X3DPrototype118.NameField := 'FlowerProto';
MFString119 := TMFString.Create(FlowerProto1, false, 'vertex', (['../shaders/castle_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs']));
MFString119.NameField := 'vertex';
MFString119.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype118.MFString := MFString119;
MFString120 := TMFString.Create(FlowerProto1, false, 'fragment', (['../shaders/castle.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']));
MFString120.NameField := 'fragment';
MFString120.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ .AddMFString }
X3DPrototype118.MFString := MFString120;
{ .AddX3DPrototype }
Group111.X3DPrototype := X3DPrototype118;
{ .AddChildren }
Group14.AddChildren([Group111]);
{ .AddGroup }
X3D0.AddChildren([Group14]);
Result := X3D0;
end;

begin
end.
