unit flowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Background18: TBackgroundNode;
X3DPrototype19: TX3DPrototype;
X3DPrototype20: TX3DPrototype;
Transform21: TTransformNode;
Shape22: TShapeNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
ComposedCubeMapTexture25: TComposedCubeMapTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ComposedShader32: TComposedShaderNode;
SFNode33: TSFNode;
ComposedCubeMapTexture34: TComposedCubeMapTextureNode;
SFVec3f35: TSFVec3f;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
ShaderPart45: TShaderPartNode;
ShaderPart46: TShaderPartNode;
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
X3DPrototype67: TX3DPrototypeNode;
X3DPrototype68: TX3DPrototypeNode;
X3DPrototype69: TX3DPrototypeNode;

procedure InitflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Shape'] := 4;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'flowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := '5 or more prismatic flowers';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;;
NavigationInfo17 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(NavigationInfo17);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background18 := TBackgroundNode.Create;;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background18);
X3DPrototype19 := TX3DPrototype.Create;;
X3DPrototype20 := TX3DPrototype.Create;;
Transform21 := TTransformNode.Create;;
Shape22 := TShapeNode.Create;;
end;

procedure InitflowersPart1;
begin

Appearance23 := TAppearanceNode.Create;;
Material24 := TMaterialNode.Create;;
Material24.DiffuseColor := Vector3(0.7,0.7,0.7);
Material24.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
ComposedCubeMapTexture25 := TComposedCubeMapTextureNode.Create;;
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture25.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture25.FdBottomTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture25.FdFrontTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture25.FdLeftTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture25.FdRightTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture25.FdTopTexture.Set(ImageTexture31);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance23.Texture := ComposedCubeMapTexture25;
{ <ComposedShader DEF='x3dom' language="GLSL"> }
{ <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> }
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"'></ShaderPart> }
{ <ShaderPart url='"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"' type='FRAGMENT'></ShaderPart> }
{ </ComposedShader> }
ComposedShader32 := TComposedShaderNode.Create;;
ComposedShader32.Language := 'GLSL';
SFNode33 := TSFNode.CreateUndefined(ComposedShader32, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode33.AddComposedCubeMapTexture([ComposedCubeMapTexture25]);
{ METHOD .AddSFNode }
ComposedShader32.AddSFNode([SFNode33]);
end;

procedure InitflowersPart2;
begin

SFVec3f35 := TSFVec3f.CreateUndefined(ComposedShader32, false, 'chromaticDispertion');
SFVec3f35.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader32.AddSFVec3f([SFVec3f35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader32, false, 'bias');
SFFloat36.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader32, false, 'scale');
SFFloat37.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader32, false, 'power');
SFFloat38.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader32, false, 'a');
SFFloat39.Value := '10';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader32, false, 'b');
SFFloat40.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader32, false, 'c');
SFFloat41.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader32, false, 'd');
SFFloat42.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader32, false, 'tdelta');
SFFloat43.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader32, false, 'pdelta');
SFFloat44.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader32.AddSFFloat([SFFloat44]);
ShaderPart45 := TShaderPartNode.Create;;
ShaderPart45.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart45.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader32.Parts := ShaderPart45;
ShaderPart46 := TShaderPartNode.Create;;
ShaderPart46.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart46.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader32.Parts := ShaderPart46;
end;

procedure InitflowersPart3;
begin

{ METHOD .AddChildren }
Appearance23.AddChildren([ComposedShader32]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape22.Appearance := Appearance23;
Sphere47 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape22.Geometry := Sphere47;
{ METHOD .FdChildren.Add }
Transform21.FdChildren.Add(Shape22);
{ METHOD .AddTransform }
X3DPrototype20.AddTransform([Transform21]);
Script48 := TScriptNode.Create;;
SFVec3f49 := TSFVec3f.CreateUndefined(Script48, false, 'translation');
SFVec3f49.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f49);
SFVec3f50 := TSFVec3f.CreateUndefined(Script48, false, 'velocity');
SFVec3f50.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f50);
SFFloat51 := TSFFloat.CreateUndefined(Script48, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat51);
SFFloat52 := TSFFloat.CreateUndefined(Script48, false, 'a');
SFFloat52.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat52);
SFFloat53 := TSFFloat.CreateUndefined(Script48, false, 'b');
SFFloat53.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat53);
SFFloat54 := TSFFloat.CreateUndefined(Script48, false, 'c');
SFFloat54.Value := '3';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat54);
SFFloat55 := TSFFloat.CreateUndefined(Script48, false, 'd');
SFFloat55.Value := '3';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script48, false, 'tdelta');
SFFloat56.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script48, false, 'pdelta');
SFFloat57.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat57);

Script48.SetSourceCode('''ecmascript:\n"+
"\n"+
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
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
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
{ METHOD .AddScript }
X3DPrototype20.AddScript([Script48]);
TimeSensor58 := TTimeSensorNode.Create;;
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
{ METHOD .AddTimeSensor }
X3DPrototype20.AddTimeSensor([TimeSensor58]);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
X3DPrototype20.AddRoute(TimeSensor58.EventFraction_changed, Script48.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO animate_transform.FdTranslation.EventIn }
{ Sample Animate.EventTranslation_changed TO animate_transform.FdTranslation.EventIn}
X3DPrototype20.AddRoute(Script48.EventTranslation_changed, Transform21.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO x_ite.a }
{ Sample Animate.a TO x_ite.a}
X3DPrototype20.AddRoute(Animate.undefined, ComposedShader32.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO x_ite.b }
{ Sample Animate.b TO x_ite.b}
X3DPrototype20.AddRoute(Animate.undefined, ComposedShader32.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO x_ite.c }
{ Sample Animate.c TO x_ite.c}
X3DPrototype20.AddRoute(Animate.undefined, ComposedShader32.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO x_ite.d }
{ Sample Animate.d TO x_ite.d}
X3DPrototype20.AddRoute(Animate.undefined, ComposedShader32.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO x_ite.pdelta }
{ Sample Animate.pdelta TO x_ite.pdelta}
X3DPrototype20.AddRoute(Animate.undefined, ComposedShader32.pdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO x_ite.tdelta }
{ Sample Animate.tdelta TO x_ite.tdelta}
X3DPrototype20.AddRoute(Animate.undefined, ComposedShader32.tdelta);
{ METHOD .AddX3DROUTE }
{ <ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> }
{ <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> }
{ <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> }
{ <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> }
{ <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> }
{ <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/> }
{ METHOD .AddX3DPrototype }
X3DPrototype19.AddX3DPrototype([X3DPrototype20]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype19]);
X3DPrototype67 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype67]);
X3DPrototype68 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype68]);
X3DPrototype69 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype69]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function Createflowers: TX3DRootNode;
begin
InitflowersPart0;
InitflowersPart1;
InitflowersPart2;
InitflowersPart3;
Result := X3D0;
end;

begin
end.
