unit noweb3d;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createnoweb3d: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group14: TGroupNode;
X3DPrototype15: TX3DPrototype;
X3DInterfaceDeclaration16: TX3DInterfaceDeclaration;
MFString17: TMFString;
MFString18: TMFString;
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
SFNode32: TSFNode;
SFVec3f33: TSFVec3f;
SFFloat34: TSFFloat;
SFFloat35: TSFFloat;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
ShaderPart43: TShaderPartNode;
ShaderPart45: TShaderPartNode;
Sphere47: TSphereNode;
Script48: TScriptNode;
SFVec3f49: TSFVec3f;
SFVec3f50: TSFVec3f;
SFFloat51: TSFFloat;
SFFloat52: TSFFloat;
SFFloat53: TSFFloat;
SFFloat54: TSFFloat;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
TimeSensor58: TTimeSensorNode;
NavigationInfo67: TNavigationInfoNode;
Background68: TBackgroundNode;
Group69: TGroupNode;
X3DPrototype70: TX3DPrototypeNode;
MFString71: TMFString;
MFString72: TMFString;
X3DPrototype73: TX3DPrototypeNode;
MFString74: TMFString;
MFString75: TMFString;
X3DPrototype76: TX3DPrototypeNode;
MFString77: TMFString;
MFString78: TMFString;
Group79: TGroupNode;
X3DPrototype80: TX3DPrototypeNode;
MFString81: TMFString;
MFString82: TMFString;
X3DPrototype83: TX3DPrototypeNode;
MFString84: TMFString;
MFString85: TMFString;
X3DPrototype86: TX3DPrototypeNode;
MFString87: TMFString;
MFString88: TMFString;
Group89: TGroupNode;
X3DPrototype90: TX3DPrototypeNode;
MFString91: TMFString;
MFString92: TMFString;
X3DPrototype93: TX3DPrototypeNode;
MFString94: TMFString;
MFString95: TMFString;
X3DPrototype96: TX3DPrototypeNode;
MFString97: TMFString;
MFString98: TMFString;
Group99: TGroupNode;
X3DPrototype100: TX3DPrototypeNode;
MFString101: TMFString;
MFString102: TMFString;
X3DPrototype103: TX3DPrototypeNode;
MFString104: TMFString;
MFString105: TMFString;
X3DPrototype106: TX3DPrototypeNode;
MFString107: TMFString;
MFString108: TMFString;
Group109: TGroupNode;
X3DPrototype110: TX3DPrototypeNode;
MFString111: TMFString;
MFString112: TMFString;
X3DPrototype113: TX3DPrototypeNode;
MFString114: TMFString;
MFString115: TMFString;
X3DPrototype116: TX3DPrototypeNode;
MFString117: TMFString;
MFString118: TMFString;

procedure Initnoweb3dPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['Core'] := 2;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 2;
{ METHOD .Component }
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'allflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'Nov 13 2022';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 Composed Shaders';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/allflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'Fri, 13 Nov 2026 21:19:45 GMT';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Sunrize X3D Editor V2.6.6, https://create3000.github.io/sunrize/';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;;
X3DPrototype15 := TX3DPrototype.Create;;
X3DInterfaceDeclaration16 := TX3DInterfaceDeclaration.Create(nil);;
MFString17 := TMFString.CreateUndefined(X3DInterfaceDeclaration16, false, 'vertex');
MFString17.Value := '\"../shaders/x_ite_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration16.AddMFString([MFString17]);
MFString18 := TMFString.CreateUndefined(X3DInterfaceDeclaration16, false, 'fragment');
MFString18.Value := '\"../shaders/x_ite.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration16.AddMFString([MFString18]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype15.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration16]);
X3DPrototype19 := TX3DPrototype.Create;;
Transform20 := TTransformNode.Create;;
Shape21 := TShapeNode.Create;;
Appearance22 := TAppearanceNode.Create;;
Material23 := TMaterialNode.Create;;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
end;

procedure Initnoweb3dPart1;
begin

Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;;
ImageTexture25 := TImageTextureNode.Create;;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture24.FdFrontTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture24.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture24.FdLeftTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture24.FdRightTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture24.FdTopTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture24.FdBottomTexture.Set(ImageTexture30);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;;
ComposedShader31.Language := 'GLSL';
SFNode32 := TSFNode.CreateUndefined(ComposedShader31, false, 'cube');
{ METHOD .AddSFNode }
ComposedShader31.AddSFNode([SFNode32]);
SFVec3f33 := TSFVec3f.CreateUndefined(ComposedShader31, false, 'chromaticDispertion');
SFVec3f33.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader31.AddSFVec3f([SFVec3f33]);
SFFloat34 := TSFFloat.CreateUndefined(ComposedShader31, false, 'bias');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat34]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader31, false, 'scale');
end;

procedure Initnoweb3dPart2;
begin

{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader31, false, 'power');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader31, false, 'a');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader31, false, 'b');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader31, false, 'c');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader31, false, 'd');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader31, false, 'tdelta');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader31, false, 'pdelta');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat42]);
ShaderPart43 := TShaderPartNode.Create;;
ShaderPart43.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart43;
ShaderPart45 := TShaderPartNode.Create;;
ShaderPart45.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart45;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader31]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape21.Appearance := Appearance22;
Sphere47 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape21.Geometry := Sphere47;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
Script48 := TScriptNode.Create;;
Script48.DirectOutput := True;
SFVec3f49 := TSFVec3f.CreateUndefined(Script48, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f49);
SFVec3f50 := TSFVec3f.CreateUndefined(Script48, false, 'velocity');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f50);
SFFloat51 := TSFFloat.CreateUndefined(Script48, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat51);
SFFloat52 := TSFFloat.CreateUndefined(Script48, false, 'a');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat52);
end;

procedure Initnoweb3dPart3;
begin

SFFloat53 := TSFFloat.CreateUndefined(Script48, false, 'b');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat53);
SFFloat54 := TSFFloat.CreateUndefined(Script48, false, 'c');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat54);
SFFloat55 := TSFFloat.CreateUndefined(Script48, false, 'd');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script48, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script48, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat57);

Script48.SetSourceCode('''ecmascript:\n"+
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
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Script48);
TimeSensor58 := TTimeSensorNode.Create;;
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(TimeSensor58);
{ METHOD .AddTransform }
X3DPrototype19.AddTransform([Transform20]);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor58.EventFraction_changed, Script48.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO transform.FdTranslation.EventIn }
{ Sample Animate.EventTranslation_changed TO transform.FdTranslation.EventIn}
X3DPrototype19.AddRoute(Script48.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype15.AddX3DPrototype([X3DPrototype19]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype15]);
NavigationInfo67 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo67);
Background68 := TBackgroundNode.Create;;
Background68.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background68.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background68.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background68.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background68.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background68.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background68);
Group69 := TGroupNode.Create;;
X3DPrototype70 := TX3DPrototypeNode;
MFString71 := TMFString.CreateUndefined(X3DPrototype70, false, 'vertex');
MFString71.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype70.AddMFString([MFString71]);
MFString72 := TMFString.CreateUndefined(X3DPrototype70, false, 'fragment');
MFString72.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype70.AddMFString([MFString72]);
{ METHOD .AddX3DPrototype }
Group69.AddX3DPrototype([X3DPrototype70]);
X3DPrototype73 := TX3DPrototypeNode;
MFString74 := TMFString.CreateUndefined(X3DPrototype73, false, 'vertex');
MFString74.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype73.AddMFString([MFString74]);
MFString75 := TMFString.CreateUndefined(X3DPrototype73, false, 'fragment');
MFString75.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype73.AddMFString([MFString75]);
{ METHOD .AddX3DPrototype }
Group69.AddX3DPrototype([X3DPrototype73]);
X3DPrototype76 := TX3DPrototypeNode;
MFString77 := TMFString.CreateUndefined(X3DPrototype76, false, 'vertex');
MFString77.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype76.AddMFString([MFString77]);
MFString78 := TMFString.CreateUndefined(X3DPrototype76, false, 'fragment');
MFString78.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype76.AddMFString([MFString78]);
{ METHOD .AddX3DPrototype }
Group69.AddX3DPrototype([X3DPrototype76]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group69);
Group79 := TGroupNode.Create;;
X3DPrototype80 := TX3DPrototypeNode;
MFString81 := TMFString.CreateUndefined(X3DPrototype80, false, 'vertex');
MFString81.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype80.AddMFString([MFString81]);
MFString82 := TMFString.CreateUndefined(X3DPrototype80, false, 'fragment');
MFString82.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype80.AddMFString([MFString82]);
{ METHOD .AddX3DPrototype }
Group79.AddX3DPrototype([X3DPrototype80]);
X3DPrototype83 := TX3DPrototypeNode;
MFString84 := TMFString.CreateUndefined(X3DPrototype83, false, 'vertex');
MFString84.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype83.AddMFString([MFString84]);
MFString85 := TMFString.CreateUndefined(X3DPrototype83, false, 'fragment');
MFString85.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype83.AddMFString([MFString85]);
{ METHOD .AddX3DPrototype }
Group79.AddX3DPrototype([X3DPrototype83]);
X3DPrototype86 := TX3DPrototypeNode;
MFString87 := TMFString.CreateUndefined(X3DPrototype86, false, 'vertex');
MFString87.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype86.AddMFString([MFString87]);
MFString88 := TMFString.CreateUndefined(X3DPrototype86, false, 'fragment');
MFString88.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype86.AddMFString([MFString88]);
{ METHOD .AddX3DPrototype }
Group79.AddX3DPrototype([X3DPrototype86]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group79);
Group89 := TGroupNode.Create;;
X3DPrototype90 := TX3DPrototypeNode;
MFString91 := TMFString.CreateUndefined(X3DPrototype90, false, 'vertex');
MFString91.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype90.AddMFString([MFString91]);
MFString92 := TMFString.CreateUndefined(X3DPrototype90, false, 'fragment');
MFString92.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype90.AddMFString([MFString92]);
{ METHOD .AddX3DPrototype }
Group89.AddX3DPrototype([X3DPrototype90]);
X3DPrototype93 := TX3DPrototypeNode;
MFString94 := TMFString.CreateUndefined(X3DPrototype93, false, 'vertex');
MFString94.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype93.AddMFString([MFString94]);
MFString95 := TMFString.CreateUndefined(X3DPrototype93, false, 'fragment');
MFString95.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype93.AddMFString([MFString95]);
{ METHOD .AddX3DPrototype }
Group89.AddX3DPrototype([X3DPrototype93]);
X3DPrototype96 := TX3DPrototypeNode;
MFString97 := TMFString.CreateUndefined(X3DPrototype96, false, 'vertex');
MFString97.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype96.AddMFString([MFString97]);
MFString98 := TMFString.CreateUndefined(X3DPrototype96, false, 'fragment');
MFString98.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype96.AddMFString([MFString98]);
{ METHOD .AddX3DPrototype }
Group89.AddX3DPrototype([X3DPrototype96]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group89);
Group99 := TGroupNode.Create;;
X3DPrototype100 := TX3DPrototypeNode;
MFString101 := TMFString.CreateUndefined(X3DPrototype100, false, 'vertex');
MFString101.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype100.AddMFString([MFString101]);
MFString102 := TMFString.CreateUndefined(X3DPrototype100, false, 'fragment');
MFString102.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype100.AddMFString([MFString102]);
{ METHOD .AddX3DPrototype }
Group99.AddX3DPrototype([X3DPrototype100]);
X3DPrototype103 := TX3DPrototypeNode;
MFString104 := TMFString.CreateUndefined(X3DPrototype103, false, 'vertex');
MFString104.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype103.AddMFString([MFString104]);
MFString105 := TMFString.CreateUndefined(X3DPrototype103, false, 'fragment');
MFString105.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype103.AddMFString([MFString105]);
{ METHOD .AddX3DPrototype }
Group99.AddX3DPrototype([X3DPrototype103]);
X3DPrototype106 := TX3DPrototypeNode;
MFString107 := TMFString.CreateUndefined(X3DPrototype106, false, 'vertex');
MFString107.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype106.AddMFString([MFString107]);
MFString108 := TMFString.CreateUndefined(X3DPrototype106, false, 'fragment');
MFString108.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype106.AddMFString([MFString108]);
{ METHOD .AddX3DPrototype }
Group99.AddX3DPrototype([X3DPrototype106]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group99);
Group109 := TGroupNode.Create;;
X3DPrototype110 := TX3DPrototypeNode;
MFString111 := TMFString.CreateUndefined(X3DPrototype110, false, 'vertex');
MFString111.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype110.AddMFString([MFString111]);
MFString112 := TMFString.CreateUndefined(X3DPrototype110, false, 'fragment');
MFString112.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype110.AddMFString([MFString112]);
{ METHOD .AddX3DPrototype }
Group109.AddX3DPrototype([X3DPrototype110]);
X3DPrototype113 := TX3DPrototypeNode;
MFString114 := TMFString.CreateUndefined(X3DPrototype113, false, 'vertex');
MFString114.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype113.AddMFString([MFString114]);
MFString115 := TMFString.CreateUndefined(X3DPrototype113, false, 'fragment');
MFString115.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype113.AddMFString([MFString115]);
{ METHOD .AddX3DPrototype }
Group109.AddX3DPrototype([X3DPrototype113]);
X3DPrototype116 := TX3DPrototypeNode;
MFString117 := TMFString.CreateUndefined(X3DPrototype116, false, 'vertex');
MFString117.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype116.AddMFString([MFString117]);
MFString118 := TMFString.CreateUndefined(X3DPrototype116, false, 'fragment');
MFString118.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype116.AddMFString([MFString118]);
{ METHOD .AddX3DPrototype }
Group109.AddX3DPrototype([X3DPrototype116]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group109);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createnoweb3d: TX3DRootNode;
begin
Initnoweb3dPart0;
Initnoweb3dPart1;
Initnoweb3dPart2;
Initnoweb3dPart3;
Result := X3D0;
end;

begin
end.
