unit flowerproto;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createflowerproto: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
X3DPrototype17: TX3DPrototype;
X3DInterfaceDeclaration18: TX3DInterfaceDeclaration;
MFString19: TMFString;
MFString20: TMFString;
X3DPrototype21: TX3DPrototype;
Transform22: TTransformNode;
Shape23: TShapeNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ComposedShader33: TComposedShaderNode;
SFNode34: TSFNode;
ComposedCubeMapTexture35: TComposedCubeMapTextureNode;
SFVec3f36: TSFVec3f;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
ShaderPart46: TShaderPartNode;
IS47: TIS;
connect48: Tconnect;
ShaderPart49: TShaderPartNode;
IS50: TIS;
connect51: Tconnect;
Sphere52: TSphereNode;
Script53: TScriptNode;
SFVec3f54: TSFVec3f;
SFVec3f55: TSFVec3f;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
SFFloat59: TSFFloat;
SFFloat60: TSFFloat;
SFFloat61: TSFFloat;
SFFloat62: TSFFloat;
TimeSensor63: TTimeSensorNode;

procedure InitflowerprotoPart0;
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
X3D0.Meta['title'] := 'flowerproto.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;
X3DPrototype17 := TX3DPrototype.Create;
X3DInterfaceDeclaration18 := TX3DInterfaceDeclaration.Create(nil);
MFString19 := TMFString.CreateUndefined(X3DInterfaceDeclaration18, false, 'vertex');
MFString19.Value := '\"../shaders/gl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration18.AddMFString([MFString19]);
MFString20 := TMFString.CreateUndefined(X3DInterfaceDeclaration18, false, 'fragment');
MFString20.Value := '\"../shaders/pc_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration18.AddMFString([MFString20]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype17.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration18]);
X3DPrototype21 := TX3DPrototype.Create;
Transform22 := TTransformNode.Create;
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7,0.7,0.7);
Material25.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture26.BackTexture := ImageTexture27;
end;

procedure InitflowerprotoPart1;
begin

ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture26.BottomTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture26.FrontTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture26.LeftTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture26.RightTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture26.TopTexture := ImageTexture32;
{ METHOD .Texture }
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.Language := 'GLSL';
{ <field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field> }
SFNode34 := TSFNode.CreateUndefined(ComposedShader33, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode34.AddComposedCubeMapTexture([ComposedCubeMapTexture26]);
{ METHOD .AddSFNode }
ComposedShader33.AddSFNode([SFNode34]);
SFVec3f36 := TSFVec3f.CreateUndefined(ComposedShader33, false, 'chromaticDispertion');
SFVec3f36.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader33.AddSFVec3f([SFVec3f36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader33, false, 'bias');
SFFloat37.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader33, false, 'scale');
SFFloat38.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader33, false, 'power');
SFFloat39.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader33, false, 'a');
SFFloat40.Value := '10';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader33, false, 'b');
SFFloat41.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader33, false, 'c');
end;

procedure InitflowerprotoPart2;
begin

SFFloat42.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader33, false, 'd');
SFFloat43.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader33, false, 'tdelta');
SFFloat44.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader33, false, 'pdelta');
SFFloat45.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader33.AddSFFloat([SFFloat45]);
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.FdType.Value := 'VERTEX';
IS47 := TIS.Create;
connect48 := Tconnect.Create;
connect48.NodeField := 'url';
connect48.ProtoField := 'vertex';
{ METHOD .Connect }
IS47.Connect := connect48;
{ METHOD .IS }
ShaderPart46.IS := IS47;
{ METHOD .Parts }
ComposedShader33.Parts := ShaderPart46;
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.FdType.Value := 'FRAGMENT';
IS50 := TIS.Create;
connect51 := Tconnect.Create;
connect51.NodeField := 'url';
connect51.ProtoField := 'fragment';
{ METHOD .Connect }
IS50.Connect := connect51;
{ METHOD .IS }
ShaderPart49.IS := IS50;
{ METHOD .Parts }
ComposedShader33.Parts := ShaderPart49;
{ METHOD .AddChildren }
Appearance24.AddChildren([ComposedShader33]);
{ METHOD .Appearance }
Shape23.Appearance := Appearance24;
Sphere52 := TSphereNode.Create;
{ METHOD .Geometry }
Shape23.Geometry := Sphere52;
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(Shape23);
Script53 := TScriptNode.Create;
Script53.DirectOutput := True;
SFVec3f54 := TSFVec3f.CreateUndefined(Script53, false, 'translation');
SFVec3f54.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFVec3f54);
SFVec3f55 := TSFVec3f.CreateUndefined(Script53, false, 'velocity');
end;

procedure InitflowerprotoPart3;
begin

SFVec3f55.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFVec3f55);
SFFloat56 := TSFFloat.CreateUndefined(Script53, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script53, false, 'a');
SFFloat57.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script53, false, 'b');
SFFloat58.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat58);
SFFloat59 := TSFFloat.CreateUndefined(Script53, false, 'c');
SFFloat59.Value := '3';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat59);
SFFloat60 := TSFFloat.CreateUndefined(Script53, false, 'd');
SFFloat60.Value := '3';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat60);
SFFloat61 := TSFFloat.CreateUndefined(Script53, false, 'tdelta');
SFFloat61.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat61);
SFFloat62 := TSFFloat.CreateUndefined(Script53, false, 'pdelta');
SFFloat62.Value := '0.5';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFFloat62);

Script53.SetSourceCode('''ecmascript:\n"+
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
Transform22.FdChildren.Add(Script53);
TimeSensor63 := TTimeSensorNode.Create;
TimeSensor63.CycleInterval := 5;
TimeSensor63.Loop := True;
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(TimeSensor63);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Transform22.AddRoute(TimeSensor63.EventFraction_changed, Script53.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO transform.EventSet_translation }
{ Sample Animate.EventTranslation_changed TO transform.EventSet_translation}
Transform22.AddRoute(Script53.EventTranslation_changed, Transform22.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
Transform22.AddRoute(Animate.[object Object], ComposedShader33.set_a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
Transform22.AddRoute(Animate.[object Object], ComposedShader33.set_b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
Transform22.AddRoute(Animate.[object Object], ComposedShader33.set_c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
Transform22.AddRoute(Animate.[object Object], ComposedShader33.set_d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
Transform22.AddRoute(Animate.[object Object], ComposedShader33.set_tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
Transform22.AddRoute(Animate.[object Object], ComposedShader33.set_pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype21.AddTransform([Transform22]);
{ METHOD .AddX3DPrototype }
X3DPrototype17.AddX3DPrototype([X3DPrototype21]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype17]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function Createflowerproto: TX3DRootNode;
begin
InitflowerprotoPart0;
InitflowerprotoPart1;
InitflowerprotoPart2;
InitflowerprotoPart3;
Result := X3D0;
end;

begin
end.
