unit mirror;

interface

uses X3DNodes;

function Createmirror: TX3DRootNode;

implementation

uses CastleVectors;

function Createmirror: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
Viewpoint16: TViewpointNode;
TextureBackground17: TTextureBackgroundNode;
ImageTexture18: TImageTextureNode;
ImageTexture19: TImageTextureNode;
ImageTexture20: TImageTextureNode;
ImageTexture21: TImageTextureNode;
ImageTexture22: TImageTextureNode;
ImageTexture23: TImageTextureNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Appearance26: TAppearanceNode;
Material27: TMaterialNode;
ComposedCubeMapTexture28: TComposedCubeMapTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ImageTexture31: TImageTextureNode;
ImageTexture32: TImageTextureNode;
ImageTexture33: TImageTextureNode;
ImageTexture34: TImageTextureNode;
ComposedShader35: TComposedShaderNode;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
X3DField40: TX3DField;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;
ComposedShader43: TComposedShaderNode;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
X3DField48: TX3DField;
ShaderPart49: TShaderPartNode;
ShaderPart50: TShaderPartNode;
Sphere51: TSphereNode;
Script52: TScriptNode;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
X3DField59: TX3DField;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
TimeSensor67: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'mirror.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d';
X3D0.Meta['description'] := 'sphere with alternating backgrounds';
Group15 := TGroupNode.Create;
Viewpoint16 := TViewpointNode.Create;
Viewpoint16.Position := Vector3(0,5,100);
Viewpoint16.Description := 'Switch background and images texture';
{ .AddChildren }
Group15.AddChildren([Viewpoint16]);
TextureBackground17 := TTextureBackgroundNode.Create;
ImageTexture18 := TImageTextureNode.Create;
ImageTexture18.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ .SetLeftTexture }
TextureBackground17.LeftTexture := ImageTexture18;
ImageTexture19 := TImageTextureNode.Create;
ImageTexture19.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ .SetRightTexture }
TextureBackground17.RightTexture := ImageTexture19;
ImageTexture20 := TImageTextureNode.Create;
ImageTexture20.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ .SetFrontTexture }
TextureBackground17.FrontTexture := ImageTexture20;
ImageTexture21 := TImageTextureNode.Create;
ImageTexture21.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ .SetBackTexture }
TextureBackground17.BackTexture := ImageTexture21;
ImageTexture22 := TImageTextureNode.Create;
ImageTexture22.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ .SetTopTexture }
TextureBackground17.TopTexture := ImageTexture22;
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ .SetBottomTexture }
TextureBackground17.BottomTexture := ImageTexture23;
{ .AddChildren }
Group15.AddChildren([TextureBackground17]);
Transform24 := TTransformNode.Create;
Shape25 := TShapeNode.Create;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.DiffuseColor := Vector3(0.7,0.7,0.7);
Material27.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance26.Material := Material27;
ComposedCubeMapTexture28 := TComposedCubeMapTextureNode.Create;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/beach_cross/beach_back.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture28.BackTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/beach_cross/beach_bottom.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture28.BottomTexture := ImageTexture30;
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/beach_cross/beach_front.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture28.FrontTexture := ImageTexture31;
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/beach_cross/beach_left.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture28.LeftTexture := ImageTexture32;
ImageTexture33 := TImageTextureNode.Create;
ImageTexture33.SetUrl(['../resources/images/all_probes/beach_cross/beach_right.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture28.RightTexture := ImageTexture33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['../resources/images/all_probes/beach_cross/beach_top.png','https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture28.TopTexture := ImageTexture34;
{ .SetTexture }
Appearance26.Texture := ComposedCubeMapTexture28;
ComposedShader35 := TComposedShaderNode.Create;
ComposedShader35.Language := 'GLSL';
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'chromaticDispertion';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'SFVec3f';
X3DField36.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader35.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'cube';
X3DField37.AccessType := 'inputOutput';
X3DField37.Type := 'SFInt32';
X3DField37.Value := '0';
{ .AddX3DField }
ComposedShader35.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'bias';
X3DField38.AccessType := 'inputOutput';
X3DField38.Type := 'SFFloat';
X3DField38.Value := '0.5';
{ .AddX3DField }
ComposedShader35.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'scale';
X3DField39.AccessType := 'inputOutput';
X3DField39.Type := 'SFFloat';
X3DField39.Value := '0.5';
{ .AddX3DField }
ComposedShader35.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'power';
X3DField40.AccessType := 'inputOutput';
X3DField40.Type := 'SFFloat';
X3DField40.Value := '2';
{ .AddX3DField }
ComposedShader35.X3DField := X3DField40;
ShaderPart41 := TShaderPartNode.Create;
ShaderPart41.SetUrl(['../shaders/x3dom.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs']);
ShaderPart41.Type := 'VERTEX';
{ .AddParts }
ComposedShader35.Parts := ShaderPart41;
ShaderPart42 := TShaderPartNode.Create;
ShaderPart42.SetUrl(['../shaders/mix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs']);
ShaderPart42.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader35.Parts := ShaderPart42;
{ .AddShaders }
Appearance26.Shaders := ComposedShader35;
ComposedShader43 := TComposedShaderNode.Create;
ComposedShader43.Language := 'GLSL';
{ http://hypertextbook.com/facts/2005/JustinChe.shtml }
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'chromaticDispertion';
X3DField44.AccessType := 'inputOutput';
X3DField44.Type := 'SFVec3f';
X3DField44.Value := '0.98 1 1.033';
{ .AddX3DField }
ComposedShader43.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'cube';
X3DField45.AccessType := 'inputOutput';
X3DField45.Type := 'SFInt32';
X3DField45.Value := '0';
{ .AddX3DField }
ComposedShader43.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'bias';
X3DField46.AccessType := 'inputOutput';
X3DField46.Type := 'SFFloat';
X3DField46.Value := '0.5';
{ .AddX3DField }
ComposedShader43.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'scale';
X3DField47.AccessType := 'inputOutput';
X3DField47.Type := 'SFFloat';
X3DField47.Value := '0.5';
{ .AddX3DField }
ComposedShader43.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'power';
X3DField48.AccessType := 'inputOutput';
X3DField48.Type := 'SFFloat';
X3DField48.Value := '2';
{ .AddX3DField }
ComposedShader43.X3DField := X3DField48;
ShaderPart49 := TShaderPartNode.Create;
ShaderPart49.SetUrl(['../shaders/x_ite.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart49.Type := 'VERTEX';
{ .AddParts }
ComposedShader43.Parts := ShaderPart49;
ShaderPart50 := TShaderPartNode.Create;
ShaderPart50.SetUrl(['../shaders/x_itemix.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs']);
ShaderPart50.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader43.Parts := ShaderPart50;
{ .AddShaders }
Appearance26.Shaders := ComposedShader43;
{ .SetAppearance }
Shape25.Appearance := Appearance26;
Sphere51 := TSphereNode.Create;
Sphere51.Radius := 30;
{ .SetGeometry }
Shape25.Geometry := Sphere51;
{ .AddChild }
Transform24.AddChildren([Shape25]);
Script52 := TScriptNode.Create;
Script52.DirectOutput := True;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'frontUrls';
X3DField53.Type := 'MFString';
X3DField53.AccessType := 'initializeOnly';
X3DField53.Value := '\'../resources/images/all_probes/beach_cross/beach_front.png\' \'../resources/images/all_probes/building_cross/building_front.png\' \'../resources/images/all_probes/campus_cross/campus_front.png\' \'../resources/images/all_probes/galileo_cross/galileo_front.png\' \'../resources/images/all_probes/grace_cross/grace_front.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_front.png\' \'../resources/images/all_probes/rnl_cross/rnl_front.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_front.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_front.png\'';
{ .SetX3DField }
Script52.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'backUrls';
X3DField54.Type := 'MFString';
X3DField54.AccessType := 'initializeOnly';
X3DField54.Value := '\'../resources/images/all_probes/beach_cross/beach_back.png\' \'../resources/images/all_probes/building_cross/building_back.png\' \'../resources/images/all_probes/campus_cross/campus_back.png\' \'../resources/images/all_probes/galileo_cross/galileo_back.png\' \'../resources/images/all_probes/grace_cross/grace_back.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_back.png\' \'../resources/images/all_probes/rnl_cross/rnl_back.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_back.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_back.png\'';
{ .AddX3DField }
Script52.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'leftUrls';
X3DField55.Type := 'MFString';
X3DField55.AccessType := 'initializeOnly';
X3DField55.Value := '\'../resources/images/all_probes/beach_cross/beach_left.png\' \'../resources/images/all_probes/building_cross/building_left.png\' \'../resources/images/all_probes/campus_cross/campus_left.png\' \'../resources/images/all_probes/galileo_cross/galileo_left.png\' \'../resources/images/all_probes/grace_cross/grace_left.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_left.png\' \'../resources/images/all_probes/rnl_cross/rnl_left.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_left.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_left.png\'';
{ .AddX3DField }
Script52.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'rightUrls';
X3DField56.Type := 'MFString';
X3DField56.AccessType := 'initializeOnly';
X3DField56.Value := '\'../resources/images/all_probes/beach_cross/beach_right.png\' \'../resources/images/all_probes/building_cross/building_right.png\' \'../resources/images/all_probes/campus_cross/campus_right.png\' \'../resources/images/all_probes/galileo_cross/galileo_right.png\' \'../resources/images/all_probes/grace_cross/grace_right.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_right.png\' \'../resources/images/all_probes/rnl_cross/rnl_right.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_right.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_right.png\'';
{ .AddX3DField }
Script52.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'topUrls';
X3DField57.Type := 'MFString';
X3DField57.AccessType := 'initializeOnly';
X3DField57.Value := '\'../resources/images/all_probes/beach_cross/beach_top.png\' \'../resources/images/all_probes/building_cross/building_top.png\' \'../resources/images/all_probes/campus_cross/campus_top.png\' \'../resources/images/all_probes/galileo_cross/galileo_top.png\' \'../resources/images/all_probes/grace_cross/grace_top.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_top.png\' \'../resources/images/all_probes/rnl_cross/rnl_top.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_top.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_top.png\'';
{ .AddX3DField }
Script52.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'bottomUrls';
X3DField58.Type := 'MFString';
X3DField58.AccessType := 'initializeOnly';
X3DField58.Value := '\'../resources/images/all_probes/beach_cross/beach_bottom.png\' \'../resources/images/all_probes/building_cross/building_bottom.png\' \'../resources/images/all_probes/campus_cross/campus_bottom.png\' \'../resources/images/all_probes/galileo_cross/galileo_bottom.png\' \'../resources/images/all_probes/grace_cross/grace_bottom.png\' \'../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\' \'../resources/images/all_probes/rnl_cross/rnl_bottom.png\' \'../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\' \'../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\'';
{ .AddX3DField }
Script52.X3DField := X3DField58;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'front_changed';
X3DField59.Type := 'MFString';
X3DField59.AccessType := 'outputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField59;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'back_changed';
X3DField60.Type := 'MFString';
X3DField60.AccessType := 'outputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'left_changed';
X3DField61.Type := 'MFString';
X3DField61.AccessType := 'outputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'right_changed';
X3DField62.Type := 'MFString';
X3DField62.AccessType := 'outputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'top_changed';
X3DField63.Type := 'MFString';
X3DField63.AccessType := 'outputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'bottom_changed';
X3DField64.Type := 'MFString';
X3DField64.AccessType := 'outputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'set_fraction';
X3DField65.Type := 'SFFloat';
X3DField65.AccessType := 'inputOnly';
{ .AddX3DField }
Script52.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'old';
X3DField66.Type := 'SFInt32';
X3DField66.AccessType := 'inputOutput';
X3DField66.Value := '-1';
{ .AddX3DField }
Script52.X3DField := X3DField66;

Script52.SetSourceCode('''ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }''');
{ .AddChildren }
Transform24.AddChildren([Script52]);
TimeSensor67 := TTimeSensorNode.Create;
TimeSensor67.CycleInterval := 45;
TimeSensor67.Loop := True;
{ .AddChildren }
Transform24.AddChildren([TimeSensor67]);
Transform24.AddRoute(TimeSensor67.EventFraction_changed, Script52.EventSet_fraction);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventFront_changed, ImageTexture20.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventBack_changed, ImageTexture21.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventLeft_changed, ImageTexture18.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventRight_changed, ImageTexture19.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventTop_changed, ImageTexture22.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventBottom_changed, ImageTexture23.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventFront_changed, ImageTexture31.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventBack_changed, ImageTexture29.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventLeft_changed, ImageTexture32.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventRight_changed, ImageTexture33.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventTop_changed, ImageTexture34.FdUrl);
{ .AddX3DRoute }
Transform24.AddRoute(Script52.EventBottom_changed, ImageTexture30.FdUrl);
{ .AddX3DRoute }
{ .AddChildren }
Group15.AddChildren([Transform24]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;

begin
end.
