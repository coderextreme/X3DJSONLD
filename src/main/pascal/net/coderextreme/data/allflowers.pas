unit allflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
ShaderPart45: TShaderPartNode;
Sphere47: TSphereNode;
Script48: TScriptNode;
SFVec3f49: TSFVec3f;
SFInt3250: TSFInt32;
SFInt3251: TSFInt32;
SFVec3f52: TSFVec3f;
SFFloat53: TSFFloat;
SFFloat54: TSFFloat;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
SFFloat59: TSFFloat;
Script60: TScriptNode;
SFVec3f61: TSFVec3f;
SFVec3f62: TSFVec3f;
SFFloat63: TSFFloat;
SFFloat64: TSFFloat;
SFFloat65: TSFFloat;
SFFloat66: TSFFloat;
SFFloat67: TSFFloat;
SFFloat68: TSFFloat;
SFFloat69: TSFFloat;
TimeSensor70: TTimeSensorNode;
NavigationInfo87: TNavigationInfoNode;
Background88: TBackgroundNode;
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
Group119: TGroupNode;
X3DPrototype120: TX3DPrototypeNode;
MFString121: TMFString;
MFString122: TMFString;
X3DPrototype123: TX3DPrototypeNode;
MFString124: TMFString;
MFString125: TMFString;
X3DPrototype126: TX3DPrototypeNode;
MFString127: TMFString;
MFString128: TMFString;
Group129: TGroupNode;
X3DPrototype130: TX3DPrototypeNode;
MFString131: TMFString;
MFString132: TMFString;
X3DPrototype133: TX3DPrototypeNode;
MFString134: TMFString;
MFString135: TMFString;
X3DPrototype136: TX3DPrototypeNode;
MFString137: TMFString;
MFString138: TMFString;

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

procedure InitallflowersPart1;
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

procedure InitallflowersPart2;
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
SFVec3f49 := TSFVec3f.CreateUndefined(Script48, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f49);
SFInt3250 := TSFInt32.CreateUndefined(Script48, false, 'choice');
SFInt3250.Value := '0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFInt3250);
SFInt3251 := TSFInt32.CreateUndefined(Script48, false, 'j');
SFInt3251.Value := '0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFInt3251);
SFVec3f52 := TSFVec3f.CreateUndefined(Script48, false, 'velocity');
end;

procedure InitallflowersPart3;
begin

{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f52);
SFFloat53 := TSFFloat.CreateUndefined(Script48, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat53);
SFFloat54 := TSFFloat.CreateUndefined(Script48, false, 'a');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat54);
SFFloat55 := TSFFloat.CreateUndefined(Script48, false, 'b');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script48, false, 'c');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script48, false, 'd');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script48, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat58);
SFFloat59 := TSFFloat.CreateUndefined(Script48, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat59);

Script48.SetSourceCode('''castlescript:\n"+
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
Transform20.FdChildren.Add(Script48);
Script60 := TScriptNode.Create;;
Script60.DirectOutput := True;
SFVec3f61 := TSFVec3f.CreateUndefined(Script60, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFVec3f61);
SFVec3f62 := TSFVec3f.CreateUndefined(Script60, false, 'velocity');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFVec3f62);
SFFloat63 := TSFFloat.CreateUndefined(Script60, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat63);
SFFloat64 := TSFFloat.CreateUndefined(Script60, false, 'a');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat64);
SFFloat65 := TSFFloat.CreateUndefined(Script60, false, 'b');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat65);
SFFloat66 := TSFFloat.CreateUndefined(Script60, false, 'c');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat66);
SFFloat67 := TSFFloat.CreateUndefined(Script60, false, 'd');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat67);
SFFloat68 := TSFFloat.CreateUndefined(Script60, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat68);
SFFloat69 := TSFFloat.CreateUndefined(Script60, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFFloat69);

Script60.SetSourceCode('''ecmascript:\n"+
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
Transform20.FdChildren.Add(Script60);
TimeSensor70 := TTimeSensorNode.Create;;
TimeSensor70.CycleInterval := 5;
TimeSensor70.Loop := True;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(TimeSensor70);
{ METHOD .AddTransform }
X3DPrototype19.AddTransform([Transform20]);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor70.EventFraction_changed, Script60.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO xform.FdTranslation.EventIn }
{ Sample Animate.EventTranslation_changed TO xform.FdTranslation.EventIn}
X3DPrototype19.AddRoute(Script60.EventTranslation_changed, Transform20.FdTranslation.EventIn);
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
{ Original "TourTime.EventFraction_changed TO AnimateCastle.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO AnimateCastle.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor70.EventFraction_changed, Script48.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.EventTranslation_changed TO xform.FdTranslation.EventIn }
{ Sample AnimateCastle.EventTranslation_changed TO xform.FdTranslation.EventIn}
X3DPrototype19.AddRoute(Script48.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.a TO shader.a }
{ Sample AnimateCastle.a TO shader.a}
X3DPrototype19.AddRoute(AnimateCastle.undefined, ComposedShader31.a);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.b TO shader.b }
{ Sample AnimateCastle.b TO shader.b}
X3DPrototype19.AddRoute(AnimateCastle.undefined, ComposedShader31.b);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.c TO shader.c }
{ Sample AnimateCastle.c TO shader.c}
X3DPrototype19.AddRoute(AnimateCastle.undefined, ComposedShader31.c);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.d TO shader.d }
{ Sample AnimateCastle.d TO shader.d}
X3DPrototype19.AddRoute(AnimateCastle.undefined, ComposedShader31.d);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.tdelta TO shader.tdelta }
{ Sample AnimateCastle.tdelta TO shader.tdelta}
X3DPrototype19.AddRoute(AnimateCastle.undefined, ComposedShader31.tdelta);
{ METHOD .AddX3DROUTE }
{ Original "AnimateCastle.pdelta TO shader.pdelta }
{ Sample AnimateCastle.pdelta TO shader.pdelta}
X3DPrototype19.AddRoute(AnimateCastle.undefined, ComposedShader31.pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype15.AddX3DPrototype([X3DPrototype19]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype15]);
NavigationInfo87 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo87);
Background88 := TBackgroundNode.Create;;
Background88.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background88.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background88.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background88.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background88.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background88.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background88);
Group89 := TGroupNode.Create;;
X3DPrototype90 := TX3DPrototypeNode;
MFString91 := TMFString.CreateUndefined(X3DPrototype90, false, 'vertex');
MFString91.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype90.AddMFString([MFString91]);
MFString92 := TMFString.CreateUndefined(X3DPrototype90, false, 'fragment');
MFString92.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype90.AddMFString([MFString92]);
{ METHOD .AddX3DPrototype }
Group89.AddX3DPrototype([X3DPrototype90]);
X3DPrototype93 := TX3DPrototypeNode;
MFString94 := TMFString.CreateUndefined(X3DPrototype93, false, 'vertex');
MFString94.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype93.AddMFString([MFString94]);
MFString95 := TMFString.CreateUndefined(X3DPrototype93, false, 'fragment');
MFString95.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype93.AddMFString([MFString95]);
{ METHOD .AddX3DPrototype }
Group89.AddX3DPrototype([X3DPrototype93]);
X3DPrototype96 := TX3DPrototypeNode;
MFString97 := TMFString.CreateUndefined(X3DPrototype96, false, 'vertex');
MFString97.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype96.AddMFString([MFString97]);
MFString98 := TMFString.CreateUndefined(X3DPrototype96, false, 'fragment');
MFString98.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype96.AddMFString([MFString98]);
{ METHOD .AddX3DPrototype }
Group89.AddX3DPrototype([X3DPrototype96]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group89);
Group99 := TGroupNode.Create;;
X3DPrototype100 := TX3DPrototypeNode;
MFString101 := TMFString.CreateUndefined(X3DPrototype100, false, 'vertex');
MFString101.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype100.AddMFString([MFString101]);
MFString102 := TMFString.CreateUndefined(X3DPrototype100, false, 'fragment');
MFString102.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype100.AddMFString([MFString102]);
{ METHOD .AddX3DPrototype }
Group99.AddX3DPrototype([X3DPrototype100]);
X3DPrototype103 := TX3DPrototypeNode;
MFString104 := TMFString.CreateUndefined(X3DPrototype103, false, 'vertex');
MFString104.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype103.AddMFString([MFString104]);
MFString105 := TMFString.CreateUndefined(X3DPrototype103, false, 'fragment');
MFString105.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype103.AddMFString([MFString105]);
{ METHOD .AddX3DPrototype }
Group99.AddX3DPrototype([X3DPrototype103]);
X3DPrototype106 := TX3DPrototypeNode;
MFString107 := TMFString.CreateUndefined(X3DPrototype106, false, 'vertex');
MFString107.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype106.AddMFString([MFString107]);
MFString108 := TMFString.CreateUndefined(X3DPrototype106, false, 'fragment');
MFString108.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype106.AddMFString([MFString108]);
{ METHOD .AddX3DPrototype }
Group99.AddX3DPrototype([X3DPrototype106]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group99);
Group109 := TGroupNode.Create;;
X3DPrototype110 := TX3DPrototypeNode;
MFString111 := TMFString.CreateUndefined(X3DPrototype110, false, 'vertex');
MFString111.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype110.AddMFString([MFString111]);
MFString112 := TMFString.CreateUndefined(X3DPrototype110, false, 'fragment');
MFString112.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype110.AddMFString([MFString112]);
{ METHOD .AddX3DPrototype }
Group109.AddX3DPrototype([X3DPrototype110]);
X3DPrototype113 := TX3DPrototypeNode;
MFString114 := TMFString.CreateUndefined(X3DPrototype113, false, 'vertex');
MFString114.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype113.AddMFString([MFString114]);
MFString115 := TMFString.CreateUndefined(X3DPrototype113, false, 'fragment');
MFString115.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype113.AddMFString([MFString115]);
{ METHOD .AddX3DPrototype }
Group109.AddX3DPrototype([X3DPrototype113]);
X3DPrototype116 := TX3DPrototypeNode;
MFString117 := TMFString.CreateUndefined(X3DPrototype116, false, 'vertex');
MFString117.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype116.AddMFString([MFString117]);
MFString118 := TMFString.CreateUndefined(X3DPrototype116, false, 'fragment');
MFString118.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype116.AddMFString([MFString118]);
{ METHOD .AddX3DPrototype }
Group109.AddX3DPrototype([X3DPrototype116]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group109);
Group119 := TGroupNode.Create;;
X3DPrototype120 := TX3DPrototypeNode;
MFString121 := TMFString.CreateUndefined(X3DPrototype120, false, 'vertex');
MFString121.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype120.AddMFString([MFString121]);
MFString122 := TMFString.CreateUndefined(X3DPrototype120, false, 'fragment');
MFString122.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype120.AddMFString([MFString122]);
{ METHOD .AddX3DPrototype }
Group119.AddX3DPrototype([X3DPrototype120]);
X3DPrototype123 := TX3DPrototypeNode;
MFString124 := TMFString.CreateUndefined(X3DPrototype123, false, 'vertex');
MFString124.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype123.AddMFString([MFString124]);
MFString125 := TMFString.CreateUndefined(X3DPrototype123, false, 'fragment');
MFString125.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype123.AddMFString([MFString125]);
{ METHOD .AddX3DPrototype }
Group119.AddX3DPrototype([X3DPrototype123]);
X3DPrototype126 := TX3DPrototypeNode;
MFString127 := TMFString.CreateUndefined(X3DPrototype126, false, 'vertex');
MFString127.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype126.AddMFString([MFString127]);
MFString128 := TMFString.CreateUndefined(X3DPrototype126, false, 'fragment');
MFString128.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype126.AddMFString([MFString128]);
{ METHOD .AddX3DPrototype }
Group119.AddX3DPrototype([X3DPrototype126]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group119);
Group129 := TGroupNode.Create;;
X3DPrototype130 := TX3DPrototypeNode;
MFString131 := TMFString.CreateUndefined(X3DPrototype130, false, 'vertex');
MFString131.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype130.AddMFString([MFString131]);
MFString132 := TMFString.CreateUndefined(X3DPrototype130, false, 'fragment');
MFString132.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype130.AddMFString([MFString132]);
{ METHOD .AddX3DPrototype }
Group129.AddX3DPrototype([X3DPrototype130]);
X3DPrototype133 := TX3DPrototypeNode;
MFString134 := TMFString.CreateUndefined(X3DPrototype133, false, 'vertex');
MFString134.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype133.AddMFString([MFString134]);
MFString135 := TMFString.CreateUndefined(X3DPrototype133, false, 'fragment');
MFString135.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype133.AddMFString([MFString135]);
{ METHOD .AddX3DPrototype }
Group129.AddX3DPrototype([X3DPrototype133]);
X3DPrototype136 := TX3DPrototypeNode;
MFString137 := TMFString.CreateUndefined(X3DPrototype136, false, 'vertex');
MFString137.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype136.AddMFString([MFString137]);
MFString138 := TMFString.CreateUndefined(X3DPrototype136, false, 'fragment');
MFString138.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype136.AddMFString([MFString138]);
{ METHOD .AddX3DPrototype }
Group129.AddX3DPrototype([X3DPrototype136]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group129);
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
