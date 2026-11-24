unit flowerprotofreewrl;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowerprotofreewrl: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
NavigationInfo17: TNavigationInfoNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
MFString22: TMFString;
MFString23: TMFString;
X3DPrototype24: TX3DPrototype;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
ComposedCubeMapTexture29: TComposedCubeMapTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ImageTexture34: TImageTextureNode;
ImageTexture35: TImageTextureNode;
ComposedShader36: TComposedShaderNode;
SFInt3237: TSFInt32;
SFVec3f38: TSFVec3f;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFFloat46: TSFFloat;
SFFloat47: TSFFloat;
ShaderPart48: TShaderPartNode;
ShaderPart50: TShaderPartNode;
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
X3DPrototype72: TX3DPrototypeNode;
MFString73: TMFString;
MFString74: TMFString;

procedure InitflowerprotofreewrlPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
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
Group16 := TGroupNode.Create;;
NavigationInfo17 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(NavigationInfo17);
Viewpoint18 := TViewpointNode.Create;;
Viewpoint18.Description := 'Tour Views';
Viewpoint18.Position := Vector3(0,0,50);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background19);
X3DPrototype20 := TX3DPrototype.Create;;
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);
end;

procedure InitflowerprotofreewrlPart1;
begin
;
MFString22 := TMFString.CreateUndefined(X3DInterfaceDeclaration21, false, 'vertex');
MFString22.Value := '\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration21.AddMFString([MFString22]);
MFString23 := TMFString.CreateUndefined(X3DInterfaceDeclaration21, false, 'fragment');
MFString23.Value := '\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration21.AddMFString([MFString23]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype20.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration21]);
X3DPrototype24 := TX3DPrototype.Create;;
Transform25 := TTransformNode.Create;;
Shape26 := TShapeNode.Create;;
Appearance27 := TAppearanceNode.Create;;
Material28 := TMaterialNode.Create;;
Material28.DiffuseColor := Vector3(0.7,0.7,0.7);
Material28.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
ComposedCubeMapTexture29 := TComposedCubeMapTextureNode.Create;;
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture29.FdBackTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture29.FdBottomTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture29.FdFrontTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture29.FdLeftTexture.Set(ImageTexture33);
ImageTexture34 := TImageTextureNode.Create;
end;

procedure InitflowerprotofreewrlPart2;
begin
;
ImageTexture34.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture29.FdRightTexture.Set(ImageTexture34);
ImageTexture35 := TImageTextureNode.Create;;
ImageTexture35.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture29.FdTopTexture.Set(ImageTexture35);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance27.Texture := ComposedCubeMapTexture29;
ComposedShader36 := TComposedShaderNode.Create;;
ComposedShader36.Language := 'GLSL';
SFInt3237 := TSFInt32.CreateUndefined(ComposedShader36, false, 'fw_textureCoordGenType');
SFInt3237.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader36.AddSFInt32([SFInt3237]);
SFVec3f38 := TSFVec3f.CreateUndefined(ComposedShader36, false, 'chromaticDispertion');
SFVec3f38.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader36.AddSFVec3f([SFVec3f38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader36, false, 'bias');
SFFloat39.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader36, false, 'scale');
SFFloat40.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader36, false, 'power');
SFFloat41.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader36, false, 'a');
SFFloat42.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader36, false, 'b');
SFFloat43.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader36, false, 'c');
SFFloat44.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader36, false, 'd');
SFFloat45.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat45]);
SFFloat46 := TSFFloat.CreateUndefined(ComposedShader36, false, 'tdelta');
SFFloat46.Value := '0';
end;

procedure InitflowerprotofreewrlPart3;
begin

{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat46]);
SFFloat47 := TSFFloat.CreateUndefined(ComposedShader36, false, 'pdelta');
SFFloat47.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader36.AddSFFloat([SFFloat47]);
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart48 := TShaderPartNode.Create;;
ShaderPart48.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader36.Parts := ShaderPart48;
ShaderPart50 := TShaderPartNode.Create;;
ShaderPart50.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader36.Parts := ShaderPart50;
{ METHOD .AddChildren }
Appearance27.AddChildren([ComposedShader36]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape26.Appearance := Appearance27;
Sphere52 := TSphereNode.Create;;
Sphere52.Radius := 5;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape26.Geometry := Sphere52;
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(Shape26);
Script53 := TScriptNode.Create;;
Script53.DirectOutput := True;
SFVec3f54 := TSFVec3f.CreateUndefined(Script53, false, 'translation');
SFVec3f54.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script53.AddCustomField(SFVec3f54);
SFVec3f55 := TSFVec3f.CreateUndefined(Script53, false, 'velocity');
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
end;

procedure InitflowerprotofreewrlPart4;
begin

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
Transform25.FdChildren.Add(Script53);
TimeSensor63 := TTimeSensorNode.Create;;
TimeSensor63.CycleInterval := 5;
TimeSensor63.Loop := True;
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(TimeSensor63);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Transform25.AddRoute(TimeSensor63.EventFraction_changed, Script53.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO transform.FdTranslation.EventIn }
{ Sample Animate.EventTranslation_changed TO transform.FdTranslation.EventIn}
Transform25.AddRoute(Script53.EventTranslation_changed, Transform25.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
Transform25.AddRoute(Animate.undefined, ComposedShader36.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
Transform25.AddRoute(Animate.undefined, ComposedShader36.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
Transform25.AddRoute(Animate.undefined, ComposedShader36.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
Transform25.AddRoute(Animate.undefined, ComposedShader36.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
Transform25.AddRoute(Animate.undefined, ComposedShader36.tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
Transform25.AddRoute(Animate.undefined, ComposedShader36.pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype24.AddTransform([Transform25]);
{ METHOD .AddX3DPrototype }
X3DPrototype20.AddX3DPrototype([X3DPrototype24]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype20]);
X3DPrototype72 := TX3DPrototypeNode;
MFString73 := TMFString.CreateUndefined(X3DPrototype72, false, 'vertex');
MFString73.Value := '\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype72.AddMFString([MFString73]);
MFString74 := TMFString.CreateUndefined(X3DPrototype72, false, 'fragment');
MFString74.Value := '\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"';
{ METHOD .AddMFString }
X3DPrototype72.AddMFString([MFString74]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype72]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function Createflowerprotofreewrl: TX3DRootNode;
begin
InitflowerprotofreewrlPart0;
InitflowerprotofreewrlPart1;
InitflowerprotofreewrlPart2;
InitflowerprotofreewrlPart3;
InitflowerprotofreewrlPart4;
Result := X3D0;
end;

begin
end.
