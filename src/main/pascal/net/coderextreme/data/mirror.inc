function mirror: TX3DRootNode;
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
field36: TfieldNode;
field37: TfieldNode;
field38: TfieldNode;
field39: TfieldNode;
field40: TfieldNode;
ShaderPart41: TShaderPartNode;
ShaderPart42: TShaderPartNode;
ComposedShader43: TComposedShaderNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
field48: TfieldNode;
ShaderPart49: TShaderPartNode;
ShaderPart50: TShaderPartNode;
Sphere51: TSphereNode;
Script52: TScriptNode;
field53: TfieldNode;
field54: TfieldNode;
field55: TfieldNode;
field56: TfieldNode;
field57: TfieldNode;
field58: TfieldNode;
field59: TfieldNode;
field60: TfieldNode;
field61: TfieldNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
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
field36 := TfieldNode.Create;
field36.NameField := 'chromaticDispertion';
field36.AccessType := 'inputOutput';
field36.Type := 'SFVec3f';
field36.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader35.Field := field36;
field37 := TfieldNode.Create;
field37.NameField := 'cube';
field37.AccessType := 'inputOutput';
field37.Type := 'SFInt32';
field37.Value := '0';
{ .AddField }
ComposedShader35.Field := field37;
field38 := TfieldNode.Create;
field38.NameField := 'bias';
field38.AccessType := 'inputOutput';
field38.Type := 'SFFloat';
field38.Value := '0.5';
{ .AddField }
ComposedShader35.Field := field38;
field39 := TfieldNode.Create;
field39.NameField := 'scale';
field39.AccessType := 'inputOutput';
field39.Type := 'SFFloat';
field39.Value := '0.5';
{ .AddField }
ComposedShader35.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'power';
field40.AccessType := 'inputOutput';
field40.Type := 'SFFloat';
field40.Value := '2';
{ .AddField }
ComposedShader35.Field := field40;
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
field44 := TfieldNode.Create;
field44.NameField := 'chromaticDispertion';
field44.AccessType := 'inputOutput';
field44.Type := 'SFVec3f';
field44.Value := '0.98 1 1.033';
{ .AddField }
ComposedShader43.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'cube';
field45.AccessType := 'inputOutput';
field45.Type := 'SFInt32';
field45.Value := '0';
{ .AddField }
ComposedShader43.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'bias';
field46.AccessType := 'inputOutput';
field46.Type := 'SFFloat';
field46.Value := '0.5';
{ .AddField }
ComposedShader43.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'scale';
field47.AccessType := 'inputOutput';
field47.Type := 'SFFloat';
field47.Value := '0.5';
{ .AddField }
ComposedShader43.Field := field47;
field48 := TfieldNode.Create;
field48.NameField := 'power';
field48.AccessType := 'inputOutput';
field48.Type := 'SFFloat';
field48.Value := '2';
{ .AddField }
ComposedShader43.Field := field48;
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
field53 := TfieldNode.Create;
field53.NameField := 'frontUrls';
field53.Type := 'MFString';
field53.AccessType := 'initializeOnly';
field53.Value := '\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"';
{ .AddField }
Script52.Field := field53;
field54 := TfieldNode.Create;
field54.NameField := 'backUrls';
field54.Type := 'MFString';
field54.AccessType := 'initializeOnly';
field54.Value := '\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"';
{ .AddField }
Script52.Field := field54;
field55 := TfieldNode.Create;
field55.NameField := 'leftUrls';
field55.Type := 'MFString';
field55.AccessType := 'initializeOnly';
field55.Value := '\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"';
{ .AddField }
Script52.Field := field55;
field56 := TfieldNode.Create;
field56.NameField := 'rightUrls';
field56.Type := 'MFString';
field56.AccessType := 'initializeOnly';
field56.Value := '\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"';
{ .AddField }
Script52.Field := field56;
field57 := TfieldNode.Create;
field57.NameField := 'topUrls';
field57.Type := 'MFString';
field57.AccessType := 'initializeOnly';
field57.Value := '\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"';
{ .AddField }
Script52.Field := field57;
field58 := TfieldNode.Create;
field58.NameField := 'bottomUrls';
field58.Type := 'MFString';
field58.AccessType := 'initializeOnly';
field58.Value := '\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"';
{ .AddField }
Script52.Field := field58;
field59 := TfieldNode.Create;
field59.NameField := 'front_changed';
field59.Type := 'MFString';
field59.AccessType := 'outputOnly';
{ .AddField }
Script52.Field := field59;
field60 := TfieldNode.Create;
field60.NameField := 'back_changed';
field60.Type := 'MFString';
field60.AccessType := 'outputOnly';
{ .AddField }
Script52.Field := field60;
field61 := TfieldNode.Create;
field61.NameField := 'left_changed';
field61.Type := 'MFString';
field61.AccessType := 'outputOnly';
{ .AddField }
Script52.Field := field61;
field62 := TfieldNode.Create;
field62.NameField := 'right_changed';
field62.Type := 'MFString';
field62.AccessType := 'outputOnly';
{ .AddField }
Script52.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'top_changed';
field63.Type := 'MFString';
field63.AccessType := 'outputOnly';
{ .AddField }
Script52.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'bottom_changed';
field64.Type := 'MFString';
field64.AccessType := 'outputOnly';
{ .AddField }
Script52.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'set_fraction';
field65.Type := 'SFFloat';
field65.AccessType := 'inputOnly';
{ .AddField }
Script52.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'old';
field66.Type := 'SFInt32';
field66.AccessType := 'inputOutput';
field66.Value := '-1';
{ .AddField }
Script52.Field := field66;

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
