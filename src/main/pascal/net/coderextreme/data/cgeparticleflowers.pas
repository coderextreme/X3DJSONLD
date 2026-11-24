unit cgeparticleflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createcgeparticleflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Viewpoint17: TViewpointNode;
Background18: TBackgroundNode;
Transform19: TTransformNode;
ParticleSystem20: TParticleSystemNode;
BoundedPhysicsModel21: TBoundedPhysicsModelNode;
Sphere22: TSphereNode;
ExplosionEmitter23: TExplosionEmitterNode;
Sphere24: TSphereNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
ComposedCubeMapTexture27: TComposedCubeMapTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ComposedShader34: TComposedShaderNode;
SFInt3235: TSFInt32;
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
ShaderPart47: TShaderPartNode;
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

procedure InitcgeparticleflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Components['ParticleSystems'] := 3;
{ METHOD .Component }
X3D0.Meta['title'] := 'particleflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;;
WorldInfo15 := TWorldInfoNode.Create;;
WorldInfo15.Title := 'particleflowers.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;;
NavigationInfo16.SetType(['ANY','EXAMINE','FLY','LOOKAT']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Viewpoint17 := TViewpointNode.Create;;
Viewpoint17.Description := 'Tour Views';
Viewpoint17.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint17);
Background18 := TBackgroundNode.Create;;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background18);
end;

procedure InitcgeparticleflowersPart1;
begin

Transform19 := TTransformNode.Create;;
ParticleSystem20 := TParticleSystemNode.Create;;
ParticleSystem20.MaxParticles := 20;
ParticleSystem20.GeometryType := 'GEOMETRY';
BoundedPhysicsModel21 := TBoundedPhysicsModelNode.Create;;
Sphere22 := TSphereNode.Create;;
Sphere22.Radius := 100;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
BoundedPhysicsModel21.Geometry := Sphere22;
{ METHOD .Physics }
{ METHOD.SET .Physics }
ParticleSystem20.Physics := BoundedPhysicsModel21;
ExplosionEmitter23 := TExplosionEmitterNode.Create;;
ExplosionEmitter23.Speed := 2;
ExplosionEmitter23.Variation := 0.75;
{ METHOD .Emitter }
{ METHOD.SET .Emitter }
ParticleSystem20.Emitter := ExplosionEmitter23;
Sphere24 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
ParticleSystem20.Geometry := Sphere24;
Appearance25 := TAppearanceNode.Create;;
Material26 := TMaterialNode.Create;;
Material26.DiffuseColor := Vector3(0.7,0.7,0.7);
Material26.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
ComposedCubeMapTexture27 := TComposedCubeMapTextureNode.Create;;
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture27.FdBackTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture27.FdBottomTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
end;

procedure InitcgeparticleflowersPart2;
begin

ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_from.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture27.FdFrontTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture27.FdLeftTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture27.FdRightTexture.Set(ImageTexture32);
ImageTexture33 := TImageTextureNode.Create;;
ImageTexture33.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture27.FdTopTexture.Set(ImageTexture33);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance25.Texture := ComposedCubeMapTexture27;
ComposedShader34 := TComposedShaderNode.Create;;
ComposedShader34.Language := 'GLSL';
SFInt3235 := TSFInt32.CreateUndefined(ComposedShader34, false, 'cube');
SFInt3235.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader34.AddSFInt32([SFInt3235]);
SFVec3f36 := TSFVec3f.CreateUndefined(ComposedShader34, false, 'chromaticDispertion');
SFVec3f36.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader34.AddSFVec3f([SFVec3f36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader34, false, 'bias');
SFFloat37.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader34, false, 'scale');
SFFloat38.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader34, false, 'power');
SFFloat39.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader34, false, 'a');
SFFloat40.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader34, false, 'b');
SFFloat41.Value := '1';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader34, false, 'c');
end;

procedure InitcgeparticleflowersPart3;
begin

SFFloat42.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat42]);
SFFloat43 := TSFFloat.CreateUndefined(ComposedShader34, false, 'd');
SFFloat43.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat43]);
SFFloat44 := TSFFloat.CreateUndefined(ComposedShader34, false, 'tdelta');
SFFloat44.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat44]);
SFFloat45 := TSFFloat.CreateUndefined(ComposedShader34, false, 'pdelta');
SFFloat45.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader34.AddSFFloat([SFFloat45]);
{ <field name='cube' type='SFNode' accessType="initializeOnly"> }
{ <ComposedCubeMapTexture USE="texture"></ComposedCubeMapTexture> }
{ </field> }
ShaderPart46 := TShaderPartNode.Create;;
ShaderPart46.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs']);
ShaderPart46.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader34.Parts := ShaderPart46;
ShaderPart47 := TShaderPartNode.Create;;
ShaderPart47.FdType.Value := 'FRAGMENT';
ShaderPart47.SetUrl(['https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs']);
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader34.Parts := ShaderPart47;
{ METHOD .AddChildren }
Appearance25.AddChildren([ComposedShader34]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
ParticleSystem20.Appearance := Appearance25;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(ParticleSystem20);
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
end;

procedure InitcgeparticleflowersPart4;
begin

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
"				tdelta = tdelta + 0.05;\n"+
"				pdelta = pdelta + 0.05;\n"+
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
Transform19.FdChildren.Add(Script48);
TimeSensor58 := TTimeSensorNode.Create;;
TimeSensor58.CycleInterval := 5;
TimeSensor58.Loop := True;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(TimeSensor58);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
Transform19.AddRoute(TimeSensor58.EventFraction_changed, Script48.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
Transform19.AddRoute(Animate.undefined, ComposedShader34.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
Transform19.AddRoute(Animate.undefined, ComposedShader34.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
Transform19.AddRoute(Animate.undefined, ComposedShader34.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
Transform19.AddRoute(Animate.undefined, ComposedShader34.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
Transform19.AddRoute(Animate.undefined, ComposedShader34.pdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
Transform19.AddRoute(Animate.undefined, ComposedShader34.tdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createcgeparticleflowers: TX3DRootNode;
begin
InitcgeparticleflowersPart0;
InitcgeparticleflowersPart1;
InitcgeparticleflowersPart2;
InitcgeparticleflowersPart3;
InitcgeparticleflowersPart4;
Result := X3D0;
end;

begin
end.
