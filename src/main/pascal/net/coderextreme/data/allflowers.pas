unit allflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createallflowers: TX3DRootNode;

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
IS44: TIS;
connect45: Tconnect;
ShaderPart46: TShaderPartNode;
IS47: TIS;
connect48: Tconnect;
Sphere49: TSphereNode;
Script50: TScriptNode;
SFVec3f51: TSFVec3f;
SFInt3252: TSFInt32;
SFInt3253: TSFInt32;
SFVec3f54: TSFVec3f;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
SFFloat59: TSFFloat;
SFFloat60: TSFFloat;
SFFloat61: TSFFloat;
Script62: TScriptNode;
SFVec3f63: TSFVec3f;
SFVec3f64: TSFVec3f;
SFFloat65: TSFFloat;
SFFloat66: TSFFloat;
SFFloat67: TSFFloat;
SFFloat68: TSFFloat;
SFFloat69: TSFFloat;
SFFloat70: TSFFloat;
SFFloat71: TSFFloat;
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

procedure InitallflowersPart0;
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
Group14 := TGroupNode.Create;
X3DPrototype15 := TX3DPrototype.Create;
X3DInterfaceDeclaration16 := TX3DInterfaceDeclaration.Create(nil);
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
X3DPrototype19 := TX3DPrototype.Create;
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
end;

procedure InitallflowersPart1;
begin

{ METHOD .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture30;
{ METHOD .Texture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
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
ShaderPart43 := TShaderPartNode.Create;
end;

procedure InitallflowersPart2;
begin

ShaderPart43.FdType.Value := 'VERTEX';
IS44 := TIS.Create;
connect45 := Tconnect.Create;
connect45.NodeField := 'url';
connect45.ProtoField := 'vertex';
{ METHOD .Connect }
IS44.Connect := connect45;
{ METHOD .IS }
ShaderPart43.IS := IS44;
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart43;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.FdType.Value := 'FRAGMENT';
IS47 := TIS.Create;
connect48 := Tconnect.Create;
connect48.NodeField := 'url';
connect48.ProtoField := 'fragment';
{ METHOD .Connect }
IS47.Connect := connect48;
{ METHOD .IS }
ShaderPart46.IS := IS47;
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart46;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader31]);
{ METHOD .Appearance }
Shape21.Appearance := Appearance22;
Sphere49 := TSphereNode.Create;
{ METHOD .Geometry }
Shape21.Geometry := Sphere49;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
Script50 := TScriptNode.Create;
SFVec3f51 := TSFVec3f.CreateUndefined(Script50, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f51);
SFInt3252 := TSFInt32.CreateUndefined(Script50, false, 'choice');
SFInt3252.Value := '0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFInt3252);
SFInt3253 := TSFInt32.CreateUndefined(Script50, false, 'j');
SFInt3253.Value := '0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFInt3253);
SFVec3f54 := TSFVec3f.CreateUndefined(Script50, false, 'velocity');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f54);
SFFloat55 := TSFFloat.CreateUndefined(Script50, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script50, false, 'a');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script50, false, 'b');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script50, false, 'c');
end;

procedure InitallflowersPart3;
begin

{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat58);
SFFloat59 := TSFFloat.CreateUndefined(Script50, false, 'd');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat59);
SFFloat60 := TSFFloat.CreateUndefined(Script50, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat60);
SFFloat61 := TSFFloat.CreateUndefined(Script50, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat61);

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
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Script50);
Script62 := TScriptNode.Create;
Script62.DirectOutput := True;
SFVec3f63 := TSFVec3f.CreateUndefined(Script62, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFVec3f63);
SFVec3f64 := TSFVec3f.CreateUndefined(Script62, false, 'velocity');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFVec3f64);
SFFloat65 := TSFFloat.CreateUndefined(Script62, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat65);
SFFloat66 := TSFFloat.CreateUndefined(Script62, false, 'a');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat66);
SFFloat67 := TSFFloat.CreateUndefined(Script62, false, 'b');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat67);
SFFloat68 := TSFFloat.CreateUndefined(Script62, false, 'c');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat68);
SFFloat69 := TSFFloat.CreateUndefined(Script62, false, 'd');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat69);
SFFloat70 := TSFFloat.CreateUndefined(Script62, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat70);
SFFloat71 := TSFFloat.CreateUndefined(Script62, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script62.AddCustomField(SFFloat71);

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
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Script62);
TimeSensor72 := TTimeSensorNode.Create;
TimeSensor72.CycleInterval := 5;
TimeSensor72.Loop := True;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(TimeSensor72);
{ METHOD .AddTransform }
X3DPrototype19.AddTransform([Transform20]);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor72.EventFraction_changed, Script62.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO xform.FdTranslation.EventIn }
{ Sample Animate.EventTranslation_changed TO xform.FdTranslation.EventIn}
X3DPrototype19.AddRoute(Script62.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.pdelta);
{ METHOD .AddX3DROUTE }
{ Original "TourTime.EventFraction_changed TO AnimateCastle.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO AnimateCastle.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor72.EventFraction_changed, Script50.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.EventTranslation_changed TO xform.FdTranslation.EventIn }
{ Sample AnimateCastle.EventTranslation_changed TO xform.FdTranslation.EventIn}
X3DPrototype19.AddRoute(Script50.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.a TO shader.a }
{ Sample AnimateCastle.a TO shader.a}
X3DPrototype19.AddRoute(AnimateCastle.[object Object], ComposedShader31.a);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.b TO shader.b }
{ Sample AnimateCastle.b TO shader.b}
X3DPrototype19.AddRoute(AnimateCastle.[object Object], ComposedShader31.b);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.c TO shader.c }
{ Sample AnimateCastle.c TO shader.c}
X3DPrototype19.AddRoute(AnimateCastle.[object Object], ComposedShader31.c);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.d TO shader.d }
{ Sample AnimateCastle.d TO shader.d}
X3DPrototype19.AddRoute(AnimateCastle.[object Object], ComposedShader31.d);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.tdelta TO shader.tdelta }
{ Sample AnimateCastle.tdelta TO shader.tdelta}
X3DPrototype19.AddRoute(AnimateCastle.[object Object], ComposedShader31.tdelta);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.pdelta TO shader.pdelta }
{ Sample AnimateCastle.pdelta TO shader.pdelta}
X3DPrototype19.AddRoute(AnimateCastle.[object Object], ComposedShader31.pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype15.AddX3DPrototype([X3DPrototype19]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype15]);
NavigationInfo89 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo89);
Background90 := TBackgroundNode.Create;
Background90.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background90.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background90.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background90.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background90.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background90.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background90);
Group91 := TGroupNode.Create;
X3DPrototype92 := TX3DPrototypeNode.Create;
MFString93 := TMFString.CreateUndefined(X3DPrototype92, false, 'vertex');
MFString93.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype92.AddMFString([MFString93]);
MFString94 := TMFString.CreateUndefined(X3DPrototype92, false, 'fragment');
MFString94.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype92.AddMFString([MFString94]);
{ METHOD .AddX3DPrototype }
Group91.AddX3DPrototype([X3DPrototype92]);
X3DPrototype95 := TX3DPrototypeNode.Create;
MFString96 := TMFString.CreateUndefined(X3DPrototype95, false, 'vertex');
MFString96.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype95.AddMFString([MFString96]);
MFString97 := TMFString.CreateUndefined(X3DPrototype95, false, 'fragment');
MFString97.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype95.AddMFString([MFString97]);
{ METHOD .AddX3DPrototype }
Group91.AddX3DPrototype([X3DPrototype95]);
X3DPrototype98 := TX3DPrototypeNode.Create;
MFString99 := TMFString.CreateUndefined(X3DPrototype98, false, 'vertex');
MFString99.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype98.AddMFString([MFString99]);
MFString100 := TMFString.CreateUndefined(X3DPrototype98, false, 'fragment');
MFString100.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype98.AddMFString([MFString100]);
{ METHOD .AddX3DPrototype }
Group91.AddX3DPrototype([X3DPrototype98]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group91);
Group101 := TGroupNode.Create;
X3DPrototype102 := TX3DPrototypeNode.Create;
MFString103 := TMFString.CreateUndefined(X3DPrototype102, false, 'vertex');
MFString103.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype102.AddMFString([MFString103]);
MFString104 := TMFString.CreateUndefined(X3DPrototype102, false, 'fragment');
MFString104.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype102.AddMFString([MFString104]);
{ METHOD .AddX3DPrototype }
Group101.AddX3DPrototype([X3DPrototype102]);
X3DPrototype105 := TX3DPrototypeNode.Create;
MFString106 := TMFString.CreateUndefined(X3DPrototype105, false, 'vertex');
MFString106.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype105.AddMFString([MFString106]);
MFString107 := TMFString.CreateUndefined(X3DPrototype105, false, 'fragment');
MFString107.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype105.AddMFString([MFString107]);
{ METHOD .AddX3DPrototype }
Group101.AddX3DPrototype([X3DPrototype105]);
X3DPrototype108 := TX3DPrototypeNode.Create;
MFString109 := TMFString.CreateUndefined(X3DPrototype108, false, 'vertex');
MFString109.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype108.AddMFString([MFString109]);
MFString110 := TMFString.CreateUndefined(X3DPrototype108, false, 'fragment');
MFString110.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype108.AddMFString([MFString110]);
{ METHOD .AddX3DPrototype }
Group101.AddX3DPrototype([X3DPrototype108]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group101);
Group111 := TGroupNode.Create;
X3DPrototype112 := TX3DPrototypeNode.Create;
MFString113 := TMFString.CreateUndefined(X3DPrototype112, false, 'vertex');
MFString113.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype112.AddMFString([MFString113]);
MFString114 := TMFString.CreateUndefined(X3DPrototype112, false, 'fragment');
MFString114.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype112.AddMFString([MFString114]);
{ METHOD .AddX3DPrototype }
Group111.AddX3DPrototype([X3DPrototype112]);
X3DPrototype115 := TX3DPrototypeNode.Create;
MFString116 := TMFString.CreateUndefined(X3DPrototype115, false, 'vertex');
MFString116.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype115.AddMFString([MFString116]);
MFString117 := TMFString.CreateUndefined(X3DPrototype115, false, 'fragment');
MFString117.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype115.AddMFString([MFString117]);
{ METHOD .AddX3DPrototype }
Group111.AddX3DPrototype([X3DPrototype115]);
X3DPrototype118 := TX3DPrototypeNode.Create;
MFString119 := TMFString.CreateUndefined(X3DPrototype118, false, 'vertex');
MFString119.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype118.AddMFString([MFString119]);
MFString120 := TMFString.CreateUndefined(X3DPrototype118, false, 'fragment');
MFString120.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype118.AddMFString([MFString120]);
{ METHOD .AddX3DPrototype }
Group111.AddX3DPrototype([X3DPrototype118]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group111);
Group121 := TGroupNode.Create;
X3DPrototype122 := TX3DPrototypeNode.Create;
MFString123 := TMFString.CreateUndefined(X3DPrototype122, false, 'vertex');
MFString123.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype122.AddMFString([MFString123]);
MFString124 := TMFString.CreateUndefined(X3DPrototype122, false, 'fragment');
MFString124.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype122.AddMFString([MFString124]);
{ METHOD .AddX3DPrototype }
Group121.AddX3DPrototype([X3DPrototype122]);
X3DPrototype125 := TX3DPrototypeNode.Create;
MFString126 := TMFString.CreateUndefined(X3DPrototype125, false, 'vertex');
MFString126.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype125.AddMFString([MFString126]);
MFString127 := TMFString.CreateUndefined(X3DPrototype125, false, 'fragment');
MFString127.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype125.AddMFString([MFString127]);
{ METHOD .AddX3DPrototype }
Group121.AddX3DPrototype([X3DPrototype125]);
X3DPrototype128 := TX3DPrototypeNode.Create;
MFString129 := TMFString.CreateUndefined(X3DPrototype128, false, 'vertex');
MFString129.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype128.AddMFString([MFString129]);
MFString130 := TMFString.CreateUndefined(X3DPrototype128, false, 'fragment');
MFString130.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype128.AddMFString([MFString130]);
{ METHOD .AddX3DPrototype }
Group121.AddX3DPrototype([X3DPrototype128]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group121);
Group131 := TGroupNode.Create;
X3DPrototype132 := TX3DPrototypeNode.Create;
MFString133 := TMFString.CreateUndefined(X3DPrototype132, false, 'vertex');
MFString133.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype132.AddMFString([MFString133]);
MFString134 := TMFString.CreateUndefined(X3DPrototype132, false, 'fragment');
MFString134.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype132.AddMFString([MFString134]);
{ METHOD .AddX3DPrototype }
Group131.AddX3DPrototype([X3DPrototype132]);
X3DPrototype135 := TX3DPrototypeNode.Create;
MFString136 := TMFString.CreateUndefined(X3DPrototype135, false, 'vertex');
MFString136.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype135.AddMFString([MFString136]);
MFString137 := TMFString.CreateUndefined(X3DPrototype135, false, 'fragment');
MFString137.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype135.AddMFString([MFString137]);
{ METHOD .AddX3DPrototype }
Group131.AddX3DPrototype([X3DPrototype135]);
X3DPrototype138 := TX3DPrototypeNode.Create;
MFString139 := TMFString.CreateUndefined(X3DPrototype138, false, 'vertex');
MFString139.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype138.AddMFString([MFString139]);
MFString140 := TMFString.CreateUndefined(X3DPrototype138, false, 'fragment');
MFString140.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype138.AddMFString([MFString140]);
{ METHOD .AddX3DPrototype }
Group131.AddX3DPrototype([X3DPrototype138]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group131);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createallflowers: TX3DRootNode;
begin
InitallflowersPart0;
InitallflowersPart1;
InitallflowersPart2;
InitallflowersPart3;
Result := X3D0;
end;

begin
end.
