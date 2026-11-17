unit bumpyfreewrljsonverse;

interface

uses X3DNodes;

function Createbumpyfreewrljsonverse: TX3DRootNode;

implementation

uses CastleVectors;

function Createbumpyfreewrljsonverse: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group30: TGroupNode;
NavigationInfo31: TNavigationInfoNode;
DirectionalLight32: TDirectionalLightNode;
DirectionalLight33: TDirectionalLightNode;
Viewpoint34: TViewpointNode;
LayerSet35: TLayerSetNode;
Layer36: TLayerNode;
Group37: TGroupNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Cylinder40: TCylinderNode;
Appearance41: TAppearanceNode;
Material42: TMaterialNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Cone45: TConeNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
Cylinder50: TCylinderNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
Cone55: TConeNode;
Appearance56: TAppearanceNode;
Material57: TMaterialNode;
Transform58: TTransformNode;
Shape59: TShapeNode;
Cylinder60: TCylinderNode;
Appearance61: TAppearanceNode;
Material62: TMaterialNode;
Transform63: TTransformNode;
Shape64: TShapeNode;
Cone65: TConeNode;
Appearance66: TAppearanceNode;
Material67: TMaterialNode;
Transform68: TTransformNode;
Background69: TBackgroundNode;
Transform70: TTransformNode;
Shape71: TShapeNode;
IndexedFaceSet72: TIndexedFaceSetNode;
Coordinate73: TCoordinateNode;
Appearance74: TAppearanceNode;
Material75: TMaterialNode;
ComposedCubeMapTexture76: TComposedCubeMapTextureNode;
ImageTexture77: TImageTextureNode;
ImageTexture78: TImageTextureNode;
ImageTexture79: TImageTextureNode;
ImageTexture80: TImageTextureNode;
ImageTexture81: TImageTextureNode;
ImageTexture82: TImageTextureNode;
ComposedShader83: TComposedShaderNode;
X3DField84: TX3DField;
X3DField85: TX3DField;
X3DField86: TX3DField;
X3DField87: TX3DField;
X3DField88: TX3DField;
X3DField89: TX3DField;
X3DField90: TX3DField;
X3DField91: TX3DField;
X3DField92: TX3DField;
X3DField93: TX3DField;
X3DField94: TX3DField;
ShaderPart95: TShaderPartNode;
ShaderPart96: TShaderPartNode;
Script97: TScriptNode;
X3DField98: TX3DField;
X3DField99: TX3DField;
X3DField100: TX3DField;
X3DField101: TX3DField;
X3DField102: TX3DField;
X3DField103: TX3DField;
X3DField104: TX3DField;
X3DField105: TX3DField;
DISEntityManager108: TDISEntityManagerNode;
DISEntityTypeMapping109: TDISEntityTypeMappingNode;
DISEntityTypeMapping110: TDISEntityTypeMappingNode;
DISEntityTypeMapping111: TDISEntityTypeMappingNode;
DISEntityTypeMapping112: TDISEntityTypeMappingNode;
Collision113: TCollisionNode;
Group114: TGroupNode;
LayoutLayer117: TLayoutLayerNode;
Transform118: TTransformNode;
Shape119: TShapeNode;
Appearance120: TAppearanceNode;
Material121: TMaterialNode;
Box122: TBoxNode;
Transform123: TTransformNode;
Transform124: TTransformNode;
Shape125: TShapeNode;
Text126: TTextNode;
FontStyle127: TFontStyleNode;
Appearance128: TAppearanceNode;
Material129: TMaterialNode;
X3DPrototype130: TX3DPrototype;
X3DInterfaceDeclaration131: TX3DInterfaceDeclaration;
X3DField132: TX3DField;
X3DField133: TX3DField;
X3DField134: TX3DField;
X3DField135: TX3DField;
X3DField136: TX3DField;
X3DField137: TX3DField;
X3DField138: TX3DField;
X3DPrototype139: TX3DPrototype;
Group140: TGroupNode;
Transform141: TTransformNode;
IS142: TIS;
connect143: Tconnect;
Transform144: TTransformNode;
IS145: TIS;
connect146: Tconnect;
PlaneSensor147: TPlaneSensorNode;
Transform148: TTransformNode;
TouchSensor149: TTouchSensorNode;
Transform150: TTransformNode;
Shape151: TShapeNode;
Text152: TTextNode;
IS153: TIS;
connect154: Tconnect;
FontStyle155: TFontStyleNode;
Appearance156: TAppearanceNode;
Material157: TMaterialNode;
Script158: TScriptNode;
X3DField159: TX3DField;
X3DField160: TX3DField;
X3DField161: TX3DField;
X3DField162: TX3DField;
X3DField163: TX3DField;
X3DField164: TX3DField;
IS165: TIS;
connect166: Tconnect;
connect167: Tconnect;
connect168: Tconnect;
X3DPrototype172: TX3DPrototypeNode;
SFVec3f173: TSFVec3f;
SFVec3f174: TSFVec3f;
SFVec3f175: TSFVec3f;
MFString176: TMFString;
SFFloat177: TSFFloat;
SFString178: TSFString;
SFNode179: TSFNode;
ComposedShader180: TComposedShaderNode;
X3DPrototype181: TX3DPrototypeNode;
SFVec3f182: TSFVec3f;
SFVec3f183: TSFVec3f;
SFVec3f184: TSFVec3f;
MFString185: TMFString;
SFFloat186: TSFFloat;
SFString187: TSFString;
SFNode188: TSFNode;
ComposedShader189: TComposedShaderNode;
X3DPrototype190: TX3DPrototypeNode;
SFVec3f191: TSFVec3f;
SFVec3f192: TSFVec3f;
SFVec3f193: TSFVec3f;
MFString194: TMFString;
SFFloat195: TSFFloat;
SFString196: TSFString;
SFNode197: TSFNode;
ComposedShader198: TComposedShaderNode;
X3DPrototype199: TX3DPrototypeNode;
SFVec3f200: TSFVec3f;
SFVec3f201: TSFVec3f;
SFVec3f202: TSFVec3f;
MFString203: TMFString;
SFFloat204: TSFFloat;
SFString205: TSFString;
SFNode206: TSFNode;
ComposedShader207: TComposedShaderNode;
X3DPrototype208: TX3DPrototypeNode;
SFVec3f209: TSFVec3f;
SFVec3f210: TSFVec3f;
SFVec3f211: TSFVec3f;
MFString212: TMFString;
SFFloat213: TSFFloat;
SFString214: TSFString;
SFNode215: TSFNode;
ComposedShader216: TComposedShaderNode;
X3DPrototype217: TX3DPrototypeNode;
SFVec3f218: TSFVec3f;
SFVec3f219: TSFVec3f;
SFVec3f220: TSFVec3f;
MFString221: TMFString;
SFFloat222: TSFFloat;
SFString223: TSFString;
SFNode224: TSFNode;
ComposedShader225: TComposedShaderNode;
Layout226: TLayoutNode;
Viewport227: TViewportNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
{ Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces https://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Components['DIS'] := 2;
X3D0.Meta['title'] := 'bumpyfreewrljsonverse.x3d';
X3D0.Meta['description'] := '*enter description here, short-sentence summaries preferred*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['translator'] := '*if manually translating VRML-to-X3D, enter name of person translating here*';
X3D0.Meta['created'] := '*enter date of initial version here*';
X3D0.Meta['translated'] := '*enter date of translation here*';
X3D0.Meta['modified'] := '*enter date of latest revision here*';
X3D0.Meta['version'] := '*enter version here, if any*';
X3D0.Meta['reference'] := '*enter reference citation or relative/online url here*';
X3D0.Meta['reference'] := '*enter additional url/bibliographic reference information here*';
X3D0.Meta['requires'] := '*enter reference resource here if required to support function, delivery, or coherence of content*';
X3D0.Meta['drawing'] := '*enter drawing filename/url here*';
X3D0.Meta['MovingImage'] := '*enter movie filename/url here*';
X3D0.Meta['photo'] := '*enter photo filename/url here*';
X3D0.Meta['subject'] := '*enter subject keywords here*';
X3D0.Meta['accessRights'] := '*enter permission statements or url here*';
X3D0.Meta['identifier'] := '*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*';
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
X3D0.Meta['license'] := 'license.html';
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, }
{ It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) }
{ open for their "discussion about the teapot" }
Group30 := TGroupNode.Create;
{ basic nodes, which might be present in any scene }
NavigationInfo31 := TNavigationInfoNode.Create;
NavigationInfo31.SetType(['EXAMINE']);
NavigationInfo31.SetAvatarSize([0.25,1.75,0.75]);
{ .AddChildren }
Group30.AddChildren([NavigationInfo31]);
DirectionalLight32 := TDirectionalLightNode.Create;
DirectionalLight32.AmbientIntensity := 0.2;
DirectionalLight32.Direction := Vector3(0,-1,0);
{ .AddChildren }
Group30.AddChildren([DirectionalLight32]);
DirectionalLight33 := TDirectionalLightNode.Create;
DirectionalLight33.AmbientIntensity := 0.2;
DirectionalLight33.Direction := Vector3(-1,-0.1,-1);
{ .AddChildren }
Group30.AddChildren([DirectionalLight33]);
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'My Overview';
Viewpoint34.FieldOfView := 1.570796;
Viewpoint34.Position := Vector3(0,1.75,60);
{ .AddChildren }
Group30.AddChildren([Viewpoint34]);
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet35 := TLayerSetNode.Create;
LayerSet35.ActiveLayer := 1;
LayerSet35.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer36 := TLayerNode.Create;
Layer36.Pickable := True;
Layer36.SetObjectType(['ALL']);
{ this group contains the red/green/blue 3D crosshair }
Group37 := TGroupNode.Create;
{ Arrow X }
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(25,0,0);
Transform38.Rotation := Vector4(0,0,-1,1.57);
Shape39 := TShapeNode.Create;
Cylinder40 := TCylinderNode.Create;
Cylinder40.Radius := 0.35;
Cylinder40.Height := 50;
{ .SetGeometry }
Shape39.Geometry := Cylinder40;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.DiffuseColor := Vector3(1,0,0);
Material42.EmissiveColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance41.Material := Material42;
{ .SetAppearance }
Shape39.Appearance := Appearance41;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
Group37.AddChildren([Transform38]);
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(50,0,0);
Transform43.Rotation := Vector4(0,0,-1,1.57);
Shape44 := TShapeNode.Create;
Cone45 := TConeNode.Create;
Cone45.BottomRadius := 0.8;
Cone45.Height := 3;
{ .SetGeometry }
Shape44.Geometry := Cone45;
Appearance46 := TAppearanceNode.Create;
Material47 := Material42;
{ .SetMaterial }
Appearance46.Material := Material47;
{ .SetAppearance }
Shape44.Appearance := Appearance46;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
Group37.AddChildren([Transform43]);
{ Arrow Y }
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0,25,0);
Shape49 := TShapeNode.Create;
Cylinder50 := Cylinder40;
{ .SetGeometry }
Shape49.Geometry := Cylinder50;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0,1,0);
Material52.EmissiveColor := Vector3(0,1,0);
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape49.Appearance := Appearance51;
{ .AddChild }
Transform48.AddChildren([Shape49]);
{ .AddChildren }
Group37.AddChildren([Transform48]);
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0,50,0);
Shape54 := TShapeNode.Create;
Cone55 := Cone45;
{ .SetGeometry }
Shape54.Geometry := Cone55;
Appearance56 := TAppearanceNode.Create;
Material57 := Material52;
{ .SetMaterial }
Appearance56.Material := Material57;
{ .SetAppearance }
Shape54.Appearance := Appearance56;
{ .AddChild }
Transform53.AddChildren([Shape54]);
{ .AddChildren }
Group37.AddChildren([Transform53]);
{ Arrow Z }
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0,0,25);
Transform58.Rotation := Vector4(1,0,0,1.57);
Shape59 := TShapeNode.Create;
Cylinder60 := Cylinder40;
{ .SetGeometry }
Shape59.Geometry := Cylinder60;
Appearance61 := TAppearanceNode.Create;
Material62 := TMaterialNode.Create;
Material62.DiffuseColor := Vector3(0,0,1);
Material62.EmissiveColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance61.Material := Material62;
{ .SetAppearance }
Shape59.Appearance := Appearance61;
{ .AddChild }
Transform58.AddChildren([Shape59]);
{ .AddChildren }
Group37.AddChildren([Transform58]);
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(0,0,50);
Transform63.Rotation := Vector4(1,0,0,1.57);
Shape64 := TShapeNode.Create;
Cone65 := Cone45;
{ .SetGeometry }
Shape64.Geometry := Cone65;
Appearance66 := TAppearanceNode.Create;
Material67 := Material62;
{ .SetMaterial }
Appearance66.Material := Material67;
{ .SetAppearance }
Shape64.Appearance := Appearance66;
{ .AddChild }
Transform63.AddChildren([Shape64]);
{ .AddChildren }
Group37.AddChildren([Transform63]);
{ .AddChildren }
Layer36.AddChildren([Group37]);
{ the model that is being reviewed by the users of this scene }
Transform68 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background69 := TBackgroundNode.Create;
Background69.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background69.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background69.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background69.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background69.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background69.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Transform68.AddChildren([Background69]);
Transform70 := TTransformNode.Create;
Shape71 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet72 := TIndexedFaceSetNode.Create;
IndexedFaceSet72.Convex := False;
Coordinate73 := TCoordinateNode.Create;
{ .SetCoord }
IndexedFaceSet72.Coord := Coordinate73;
{ .SetGeometry }
Shape71.Geometry := IndexedFaceSet72;
Appearance74 := TAppearanceNode.Create;
Material75 := TMaterialNode.Create;
Material75.DiffuseColor := Vector3(0.7,0.7,0.7);
Material75.SpecularColor := Vector3(0.5,0.5,0.5);
{ .SetMaterial }
Appearance74.Material := Material75;
ComposedCubeMapTexture76 := TComposedCubeMapTextureNode.Create;
ImageTexture77 := TImageTextureNode.Create;
ImageTexture77.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ .SetBackTexture }
ComposedCubeMapTexture76.BackTexture := ImageTexture77;
ImageTexture78 := TImageTextureNode.Create;
ImageTexture78.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ .SetBottomTexture }
ComposedCubeMapTexture76.BottomTexture := ImageTexture78;
ImageTexture79 := TImageTextureNode.Create;
ImageTexture79.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ .SetFrontTexture }
ComposedCubeMapTexture76.FrontTexture := ImageTexture79;
ImageTexture80 := TImageTextureNode.Create;
ImageTexture80.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ .SetLeftTexture }
ComposedCubeMapTexture76.LeftTexture := ImageTexture80;
ImageTexture81 := TImageTextureNode.Create;
ImageTexture81.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ .SetRightTexture }
ComposedCubeMapTexture76.RightTexture := ImageTexture81;
ImageTexture82 := TImageTextureNode.Create;
ImageTexture82.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .SetTopTexture }
ComposedCubeMapTexture76.TopTexture := ImageTexture82;
{ .SetTexture }
Appearance74.Texture := ComposedCubeMapTexture76;
ComposedShader83 := TComposedShaderNode.Create;
ComposedShader83.Language := 'GLSL';
X3DField84 := TX3DField.Create;
X3DField84.NameField := 'chromaticDispertion';
X3DField84.AccessType := 'inputOnly';
X3DField84.Type := 'SFVec3f';
X3DField84.Value := '0.98 1 1.033';
{ .SetX3DField }
ComposedShader83.X3DField := X3DField84;
X3DField85 := TX3DField.Create;
X3DField85.NameField := 'fw_textureCoordGenType';
X3DField85.AccessType := 'inputOnly';
X3DField85.Type := 'SFInt32';
X3DField85.Value := '0';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField85;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'bias';
X3DField86.Type := 'SFFloat';
X3DField86.AccessType := 'inputOnly';
X3DField86.Value := '0.5';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'scale';
X3DField87.Type := 'SFFloat';
X3DField87.AccessType := 'inputOnly';
X3DField87.Value := '0.5';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField87;
X3DField88 := TX3DField.Create;
X3DField88.NameField := 'power';
X3DField88.Type := 'SFFloat';
X3DField88.AccessType := 'inputOnly';
X3DField88.Value := '2';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField88;
X3DField89 := TX3DField.Create;
X3DField89.NameField := 'a';
X3DField89.Type := 'SFFloat';
X3DField89.AccessType := 'inputOutput';
X3DField89.Value := '15';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField89;
X3DField90 := TX3DField.Create;
X3DField90.NameField := 'b';
X3DField90.Type := 'SFFloat';
X3DField90.AccessType := 'inputOutput';
X3DField90.Value := '5';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField90;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'c';
X3DField91.Type := 'SFFloat';
X3DField91.AccessType := 'inputOutput';
X3DField91.Value := '5';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'd';
X3DField92.Type := 'SFFloat';
X3DField92.AccessType := 'inputOutput';
X3DField92.Value := '5';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField92;
X3DField93 := TX3DField.Create;
X3DField93.NameField := 'tdelta';
X3DField93.Type := 'SFFloat';
X3DField93.AccessType := 'inputOutput';
X3DField93.Value := '0';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField93;
X3DField94 := TX3DField.Create;
X3DField94.NameField := 'pdelta';
X3DField94.Type := 'SFFloat';
X3DField94.AccessType := 'inputOutput';
X3DField94.Value := '0';
{ .AddX3DField }
ComposedShader83.X3DField := X3DField94;
ShaderPart95 := TShaderPartNode.Create;
ShaderPart95.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart95.Type := 'VERTEX';
{ .AddParts }
ComposedShader83.Parts := ShaderPart95;
ShaderPart96 := TShaderPartNode.Create;
ShaderPart96.SetUrl(['../shaders/freewrl.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart96.Type := 'FRAGMENT';
{ .AddParts }
ComposedShader83.Parts := ShaderPart96;
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/freewrl_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ .AddShaders }
Appearance74.Shaders := ComposedShader83;
{ .SetAppearance }
Shape71.Appearance := Appearance74;
{ .AddChild }
Transform70.AddChildren([Shape71]);
{ .AddChildren }
Transform68.AddChildren([Transform70]);
{ .AddChildren }
Layer36.AddChildren([Transform68]);
Script97 := TScriptNode.Create;
X3DField98 := TX3DField.Create;
X3DField98.NameField := 'coordinates';
X3DField98.AccessType := 'inputOutput';
X3DField98.Type := 'MFVec3f';
{ .SetX3DField }
Script97.X3DField := X3DField98;
X3DField99 := TX3DField.Create;
X3DField99.NameField := 'coordIndexes';
X3DField99.AccessType := 'outputOnly';
X3DField99.Type := 'MFInt32';
{ .AddX3DField }
Script97.X3DField := X3DField99;
X3DField100 := TX3DField.Create;
X3DField100.NameField := 'a';
X3DField100.Type := 'SFFloat';
X3DField100.AccessType := 'inputOutput';
X3DField100.Value := '10';
{ .AddX3DField }
Script97.X3DField := X3DField100;
X3DField101 := TX3DField.Create;
X3DField101.NameField := 'b';
X3DField101.Type := 'SFFloat';
X3DField101.AccessType := 'inputOutput';
X3DField101.Value := '10';
{ .AddX3DField }
Script97.X3DField := X3DField101;
X3DField102 := TX3DField.Create;
X3DField102.NameField := 'c';
X3DField102.Type := 'SFFloat';
X3DField102.AccessType := 'inputOutput';
X3DField102.Value := '2';
{ .AddX3DField }
Script97.X3DField := X3DField102;
X3DField103 := TX3DField.Create;
X3DField103.NameField := 'd';
X3DField103.Type := 'SFFloat';
X3DField103.AccessType := 'inputOutput';
X3DField103.Value := '2';
{ .AddX3DField }
Script97.X3DField := X3DField103;
X3DField104 := TX3DField.Create;
X3DField104.NameField := 'pdelta';
X3DField104.Type := 'SFFloat';
X3DField104.AccessType := 'inputOutput';
X3DField104.Value := '0';
{ .AddX3DField }
Script97.X3DField := X3DField104;
X3DField105 := TX3DField.Create;
X3DField105.NameField := 'tdelta';
X3DField105.Type := 'SFFloat';
X3DField105.AccessType := 'inputOutput';
X3DField105.Value := '0';
{ .AddX3DField }
Script97.X3DField := X3DField105;

Script97.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}''');
{ .AddChildren }
Layer36.AddChildren([Script97]);
Layer36.AddRoute(Script97.FdCoordindexes, IndexedFaceSet72.EventSet_coordindex);
{ .AddX3DRoute }
Layer36.AddRoute(Script97.FdCoordinates, Coordinate73.EventSet_point);
{ .AddX3DRoute }
{ DIS multiuser facilities }
DISEntityManager108 := TDISEntityManagerNode.Create;
DISEntityTypeMapping109 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping109.Category := 77;
DISEntityTypeMapping109.Specific := 1;
DISEntityTypeMapping109.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ .AddChildren }
DISEntityManager108.AddChildren([DISEntityTypeMapping109]);
DISEntityTypeMapping110 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping110.Category := 77;
DISEntityTypeMapping110.Specific := 2;
DISEntityTypeMapping110.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ .AddChildren }
DISEntityManager108.AddChildren([DISEntityTypeMapping110]);
DISEntityTypeMapping111 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping111.Category := 77;
DISEntityTypeMapping111.Specific := 3;
DISEntityTypeMapping111.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ .AddChildren }
DISEntityManager108.AddChildren([DISEntityTypeMapping111]);
DISEntityTypeMapping112 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping112.Category := 77;
DISEntityTypeMapping112.Specific := 4;
DISEntityTypeMapping112.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ .AddChildren }
DISEntityManager108.AddChildren([DISEntityTypeMapping112]);
{ .AddChildren }
Layer36.AddChildren([DISEntityManager108]);
Collision113 := TCollisionNode.Create;
Collision113.Enabled := False;
Group114 := TGroupNode.Create;
{ .SetProxy }
Collision113.Proxy := Group114;
{ .AddChildren }
Layer36.AddChildren([Collision113]);
Layer36.AddRoute(DISEntityManager108.FdAddedentities, Group114.FdAddchildren);
{ .AddX3DRoute }
Layer36.AddRoute(DISEntityManager108.FdRemovedentities, Group114.FdRemovechildren);
{ .AddX3DRoute }
{ .AddLayers }
LayerSet35.Layers := Layer36;
LayoutLayer117 := TLayoutLayerNode.Create;
LayoutLayer117.Pickable := True;
LayoutLayer117.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform118 := TTransformNode.Create;
Transform118.Translation := Vector3(0,0,-3);
Shape119 := TShapeNode.Create;
Appearance120 := TAppearanceNode.Create;
Material121 := TMaterialNode.Create;
Material121.DiffuseColor := Vector3(0,0,0);
Material121.Transparency := 0.7;
{ .SetMaterial }
Appearance120.Material := Material121;
{ .SetAppearance }
Shape119.Appearance := Appearance120;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(100,100,0.02);
{ .SetGeometry }
Shape119.Geometry := Box122;
{ .AddChild }
Transform118.AddChildren([Shape119]);
{ .AddChildren }
LayoutLayer117.AddChildren([Transform118]);
Transform123 := TTransformNode.Create;
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0,0,-20);
Shape125 := TShapeNode.Create;
Text126 := TTextNode.Create;
Text126.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle127 := TFontStyleNode.Create;
FontStyle127.Size := 0.09;
{ .SetFontStyle }
Text126.FontStyle := FontStyle127;
{ .SetGeometry }
Shape125.Geometry := Text126;
Appearance128 := TAppearanceNode.Create;
Material129 := TMaterialNode.Create;
Material129.DiffuseColor := Vector3(1,1,0);
{ .SetMaterial }
Appearance128.Material := Material129;
{ .SetAppearance }
Shape125.Appearance := Appearance128;
{ .AddChild }
Transform124.AddChildren([Shape125]);
{ .AddChildren }
Transform123.AddChildren([Transform124]);
{ .AddChildren }
LayoutLayer117.AddChildren([Transform123]);
X3DPrototype130 := TX3DPrototype.Create;
X3DPrototype130.NameField := 'SliderProto';
X3DInterfaceDeclaration131 := TX3DInterfaceDeclaration.Create(nil);
X3DField132 := TX3DField.Create;
X3DField132.NameField := 'sliderTranslation';
X3DField132.AccessType := 'inputOutput';
X3DField132.Type := 'SFVec3f';
X3DField132.Value := '0 0.7 0';
{ .SetX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField132;
X3DField133 := TX3DField.Create;
X3DField133.NameField := 'transformTranslation';
X3DField133.AccessType := 'inputOutput';
X3DField133.Type := 'SFVec3f';
X3DField133.Value := '0 0 0.1';
{ .AddX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField133;
X3DField134 := TX3DField.Create;
X3DField134.NameField := 'sensorTranslation';
X3DField134.AccessType := 'inputOutput';
X3DField134.Type := 'SFVec3f';
X3DField134.Value := '0 0 0';
{ .AddX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField134;
X3DField135 := TX3DField.Create;
X3DField135.NameField := 'textString';
X3DField135.AccessType := 'inputOutput';
X3DField135.Type := 'MFString';
X3DField135.Value := '\'a=\'';
{ .AddX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField135;
X3DField136 := TX3DField.Create;
X3DField136.NameField := 'parameterScale';
X3DField136.AccessType := 'inputOutput';
X3DField136.Type := 'SFFloat';
X3DField136.Value := '30';
{ .AddX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField136;
X3DField137 := TX3DField.Create;
X3DField137.NameField := 'parameterName';
X3DField137.AccessType := 'inputOutput';
X3DField137.Type := 'SFString';
X3DField137.Value := 'a';
{ .AddX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField137;
X3DField138 := TX3DField.Create;
X3DField138.NameField := 'shaderNode';
X3DField138.AccessType := 'inputOutput';
X3DField138.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration131.X3DField := X3DField138;
{ .SetX3DInterfaceDeclaration }
X3DPrototype130.X3DInterfaceDeclaration := X3DInterfaceDeclaration131;
X3DPrototype139 := TX3DPrototype.Create;
Group140 := TGroupNode.Create;
Transform141 := TTransformNode.Create;
Transform141.Translation := Vector3(0,0.7,0);
IS142 := TIS.Create;
connect143 := Tconnect.Create;
connect143.NodeField := 'translation';
connect143.ProtoField := 'sliderTranslation';
{ .AddConnect }
IS142.Connect := connect143;
{ .SetIS }
Transform141.IS := IS142;
Transform144 := TTransformNode.Create;
Transform144.Translation := Vector3(0,0,0.1);
IS145 := TIS.Create;
connect146 := Tconnect.Create;
connect146.NodeField := 'translation';
connect146.ProtoField := 'sensorTranslation';
{ .AddConnect }
IS145.Connect := connect146;
{ .SetIS }
Transform144.IS := IS145;
PlaneSensor147 := TPlaneSensorNode.Create;
PlaneSensor147.MaxPosition := Vector2Single(1,0);
{ .AddChildren }
Transform144.AddChildren([PlaneSensor147]);
Transform148 := TTransformNode.Create;
Transform148.Translation := Vector3(0,0,0);
TouchSensor149 := TTouchSensorNode.Create;
{ .AddChildren }
Transform148.AddChildren([TouchSensor149]);
{ .AddChildren }
Transform144.AddChildren([Transform148]);
Transform150 := TTransformNode.Create;
Shape151 := TShapeNode.Create;
Text152 := TTextNode.Create;
Text152.SetText(['a=']);
IS153 := TIS.Create;
connect154 := Tconnect.Create;
connect154.NodeField := 'string';
connect154.ProtoField := 'textString';
{ .AddConnect }
IS153.Connect := connect154;
{ .SetIS }
Text152.IS := IS153;
FontStyle155 := TFontStyleNode.Create;
FontStyle155.Size := 0.23;
{ .SetFontStyle }
Text152.FontStyle := FontStyle155;
{ .SetGeometry }
Shape151.Geometry := Text152;
Appearance156 := TAppearanceNode.Create;
Material157 := TMaterialNode.Create;
{ .SetMaterial }
Appearance156.Material := Material157;
{ .SetAppearance }
Shape151.Appearance := Appearance156;
{ .AddChild }
Transform150.AddChildren([Shape151]);
{ .AddChildren }
Transform144.AddChildren([Transform150]);
{ .AddChildren }
Transform141.AddChildren([Transform144]);
{ .AddChildren }
Group140.AddChildren([Transform141]);
Script158 := TScriptNode.Create;
Script158.DirectOutput := True;
Script158.MustEvaluate := True;
X3DField159 := TX3DField.Create;
X3DField159.NameField := 'protoScale';
X3DField159.AccessType := 'inputOutput';
X3DField159.Type := 'SFFloat';
X3DField159.Value := '30';
{ .SetX3DField }
Script158.X3DField := X3DField159;
X3DField160 := TX3DField.Create;
X3DField160.NameField := 'protoParameterName';
X3DField160.AccessType := 'inputOutput';
X3DField160.Type := 'SFString';
X3DField160.Value := 'a';
{ .AddX3DField }
Script158.X3DField := X3DField160;
X3DField161 := TX3DField.Create;
X3DField161.NameField := 'shader';
X3DField161.AccessType := 'inputOutput';
X3DField161.Type := 'SFNode';
{ .AddX3DField }
Script158.X3DField := X3DField161;
X3DField162 := TX3DField.Create;
X3DField162.NameField := 'newTranslation';
X3DField162.AccessType := 'inputOnly';
X3DField162.Type := 'SFVec3f';
X3DField162.Value := '1 1 1';
{ .AddX3DField }
Script158.X3DField := X3DField162;
X3DField163 := TX3DField.Create;
X3DField163.NameField := 'protoValue_changed';
X3DField163.AccessType := 'outputOnly';
X3DField163.Type := 'SFFloat';
X3DField163.Value := '1';
{ .AddX3DField }
Script158.X3DField := X3DField163;
X3DField164 := TX3DField.Create;
X3DField164.NameField := 'protoText_changed';
X3DField164.AccessType := 'outputOnly';
X3DField164.Type := 'MFString';
X3DField164.Value := '\'1.0\'';
{ .AddX3DField }
Script158.X3DField := X3DField164;
IS165 := TIS.Create;
connect166 := Tconnect.Create;
connect166.NodeField := 'protoScale';
connect166.ProtoField := 'parameterScale';
{ .AddConnect }
IS165.Connect := connect166;
connect167 := Tconnect.Create;
connect167.NodeField := 'protoParameterName';
connect167.ProtoField := 'parameterName';
{ .AddConnect }
IS165.Connect := connect167;
connect168 := Tconnect.Create;
connect168.NodeField := 'shader';
connect168.ProtoField := 'shaderNode';
{ .AddConnect }
IS165.Connect := connect168;
{ .SetIS }
Script158.IS := IS165;

Script158.SetSourceCode('''ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\\n	protoValue_changed = Value.x * protoScale;\\n	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}''');
{ .AddChildren }
Group140.AddChildren([Script158]);
Group140.AddRoute(PlaneSensor147.EventTranslation_changed, Transform144.FdTranslation);
{ .AddX3DRoute }
Group140.AddRoute(PlaneSensor147.EventTranslation_changed, Script158.FdNewtranslation);
{ .AddX3DRoute }
Group140.AddRoute(Script158.EventPrototext_changed, Text152.FdString);
{ .AddX3DRoute }
{ .SetGroup }
X3DPrototype139.Group := Group140;
{ .AddX3DPrototype }
X3DPrototype130.X3DPrototype := X3DPrototype139;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype130;
X3DPrototype172 := TX3DPrototypeNode.Create;
X3DPrototype172.NameField := 'SliderProto';
SFVec3f173 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.7,0));
SFVec3f173.NameField := 'sliderTranslation';
SFVec3f173.Value := '0 0.7 0';
{ .SetSFVec3f }
X3DPrototype172.SFVec3f := SFVec3f173;
SFVec3f174 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f174.NameField := 'transformTranslation';
SFVec3f174.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype172.SFVec3f := SFVec3f174;
SFVec3f175 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f175.NameField := 'sensorTranslation';
SFVec3f175.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype172.SFVec3f := SFVec3f175;
MFString176 := TMFString.Create(SliderProto1, false, 'textString', (['a=']));
MFString176.NameField := 'textString';
MFString176.Value := '\"a=\"';
{ .AddMFString }
X3DPrototype172.MFString := MFString176;
SFFloat177 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat177.NameField := 'parameterScale';
SFFloat177.Value := '30';
{ .AddSFFloat }
X3DPrototype172.SFFloat := SFFloat177;
SFString178 := TSFString.Create(SliderProto1, false, 'parameterName', 'a');
SFString178.NameField := 'parameterName';
SFString178.Value := 'a';
{ .AddSFString }
X3DPrototype172.SFString := SFString178;
SFNode179 := TSFNode.Create;
SFNode179.NameField := 'shaderNode';
ComposedShader180 := ComposedShader83;
{ .SetComposedShader }
SFNode179.ComposedShader := ComposedShader180;
{ .AddSFNode }
X3DPrototype172.SFNode := SFNode179;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype172;
X3DPrototype181 := TX3DPrototypeNode.Create;
X3DPrototype181.NameField := 'SliderProto';
SFVec3f182 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.4,0));
SFVec3f182.NameField := 'sliderTranslation';
SFVec3f182.Value := '0 0.4 0';
{ .SetSFVec3f }
X3DPrototype181.SFVec3f := SFVec3f182;
SFVec3f183 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f183.NameField := 'transformTranslation';
SFVec3f183.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype181.SFVec3f := SFVec3f183;
SFVec3f184 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f184.NameField := 'sensorTranslation';
SFVec3f184.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype181.SFVec3f := SFVec3f184;
MFString185 := TMFString.Create(SliderProto1, false, 'textString', (['b=']));
MFString185.NameField := 'textString';
MFString185.Value := '\"b=\"';
{ .AddMFString }
X3DPrototype181.MFString := MFString185;
SFFloat186 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 30);
SFFloat186.NameField := 'parameterScale';
SFFloat186.Value := '30';
{ .AddSFFloat }
X3DPrototype181.SFFloat := SFFloat186;
SFString187 := TSFString.Create(SliderProto1, false, 'parameterName', 'b');
SFString187.NameField := 'parameterName';
SFString187.Value := 'b';
{ .AddSFString }
X3DPrototype181.SFString := SFString187;
SFNode188 := TSFNode.Create;
SFNode188.NameField := 'shaderNode';
ComposedShader189 := ComposedShader83;
{ .SetComposedShader }
SFNode188.ComposedShader := ComposedShader189;
{ .AddSFNode }
X3DPrototype181.SFNode := SFNode188;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype181;
X3DPrototype190 := TX3DPrototypeNode.Create;
X3DPrototype190.NameField := 'SliderProto';
SFVec3f191 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,0.1,0));
SFVec3f191.NameField := 'sliderTranslation';
SFVec3f191.Value := '0 0.1 0';
{ .SetSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f191;
SFVec3f192 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f192.NameField := 'transformTranslation';
SFVec3f192.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f192;
SFVec3f193 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f193.NameField := 'sensorTranslation';
SFVec3f193.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype190.SFVec3f := SFVec3f193;
MFString194 := TMFString.Create(SliderProto1, false, 'textString', (['c=']));
MFString194.NameField := 'textString';
MFString194.Value := '\"c=\"';
{ .AddMFString }
X3DPrototype190.MFString := MFString194;
SFFloat195 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat195.NameField := 'parameterScale';
SFFloat195.Value := '20';
{ .AddSFFloat }
X3DPrototype190.SFFloat := SFFloat195;
SFString196 := TSFString.Create(SliderProto1, false, 'parameterName', 'c');
SFString196.NameField := 'parameterName';
SFString196.Value := 'c';
{ .AddSFString }
X3DPrototype190.SFString := SFString196;
SFNode197 := TSFNode.Create;
SFNode197.NameField := 'shaderNode';
ComposedShader198 := ComposedShader83;
{ .SetComposedShader }
SFNode197.ComposedShader := ComposedShader198;
{ .AddSFNode }
X3DPrototype190.SFNode := SFNode197;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype190;
X3DPrototype199 := TX3DPrototypeNode.Create;
X3DPrototype199.NameField := 'SliderProto';
SFVec3f200 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.2,0));
SFVec3f200.NameField := 'sliderTranslation';
SFVec3f200.Value := '0 -0.2 0';
{ .SetSFVec3f }
X3DPrototype199.SFVec3f := SFVec3f200;
SFVec3f201 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f201.NameField := 'transformTranslation';
SFVec3f201.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype199.SFVec3f := SFVec3f201;
SFVec3f202 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f202.NameField := 'sensorTranslation';
SFVec3f202.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype199.SFVec3f := SFVec3f202;
MFString203 := TMFString.Create(SliderProto1, false, 'textString', (['d=']));
MFString203.NameField := 'textString';
MFString203.Value := '\"d=\"';
{ .AddMFString }
X3DPrototype199.MFString := MFString203;
SFFloat204 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 20);
SFFloat204.NameField := 'parameterScale';
SFFloat204.Value := '20';
{ .AddSFFloat }
X3DPrototype199.SFFloat := SFFloat204;
SFString205 := TSFString.Create(SliderProto1, false, 'parameterName', 'd');
SFString205.NameField := 'parameterName';
SFString205.Value := 'd';
{ .AddSFString }
X3DPrototype199.SFString := SFString205;
SFNode206 := TSFNode.Create;
SFNode206.NameField := 'shaderNode';
ComposedShader207 := ComposedShader83;
{ .SetComposedShader }
SFNode206.ComposedShader := ComposedShader207;
{ .AddSFNode }
X3DPrototype199.SFNode := SFNode206;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype199;
X3DPrototype208 := TX3DPrototypeNode.Create;
X3DPrototype208.NameField := 'SliderProto';
SFVec3f209 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.5,0));
SFVec3f209.NameField := 'sliderTranslation';
SFVec3f209.Value := '0 -0.5 0';
{ .SetSFVec3f }
X3DPrototype208.SFVec3f := SFVec3f209;
SFVec3f210 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f210.NameField := 'transformTranslation';
SFVec3f210.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype208.SFVec3f := SFVec3f210;
SFVec3f211 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f211.NameField := 'sensorTranslation';
SFVec3f211.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype208.SFVec3f := SFVec3f211;
MFString212 := TMFString.Create(SliderProto1, false, 'textString', (['tdelta=']));
MFString212.NameField := 'textString';
MFString212.Value := '\"tdelta=\"';
{ .AddMFString }
X3DPrototype208.MFString := MFString212;
SFFloat213 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat213.NameField := 'parameterScale';
SFFloat213.Value := '6.28';
{ .AddSFFloat }
X3DPrototype208.SFFloat := SFFloat213;
SFString214 := TSFString.Create(SliderProto1, false, 'parameterName', 'tdelta');
SFString214.NameField := 'parameterName';
SFString214.Value := 'tdelta';
{ .AddSFString }
X3DPrototype208.SFString := SFString214;
SFNode215 := TSFNode.Create;
SFNode215.NameField := 'shaderNode';
ComposedShader216 := ComposedShader83;
{ .SetComposedShader }
SFNode215.ComposedShader := ComposedShader216;
{ .AddSFNode }
X3DPrototype208.SFNode := SFNode215;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype208;
X3DPrototype217 := TX3DPrototypeNode.Create;
X3DPrototype217.NameField := 'SliderProto';
SFVec3f218 := TSFVec3f.Create(SliderProto1, false, 'sliderTranslation', Vector3(0,-0.8,0));
SFVec3f218.NameField := 'sliderTranslation';
SFVec3f218.Value := '0 -0.8 0';
{ .SetSFVec3f }
X3DPrototype217.SFVec3f := SFVec3f218;
SFVec3f219 := TSFVec3f.Create(SliderProto1, false, 'transformTranslation', Vector3(0,0,0.1));
SFVec3f219.NameField := 'transformTranslation';
SFVec3f219.Value := '0 0 0.1';
{ .AddSFVec3f }
X3DPrototype217.SFVec3f := SFVec3f219;
SFVec3f220 := TSFVec3f.Create(SliderProto1, false, 'sensorTranslation', Vector3(0,0,0));
SFVec3f220.NameField := 'sensorTranslation';
SFVec3f220.Value := '0 0 0';
{ .AddSFVec3f }
X3DPrototype217.SFVec3f := SFVec3f220;
MFString221 := TMFString.Create(SliderProto1, false, 'textString', (['pdelta=']));
MFString221.NameField := 'textString';
MFString221.Value := '\"pdelta=\"';
{ .AddMFString }
X3DPrototype217.MFString := MFString221;
SFFloat222 := TSFFloat.Create(SliderProto1, false, 'parameterScale', 6.28);
SFFloat222.NameField := 'parameterScale';
SFFloat222.Value := '6.28';
{ .AddSFFloat }
X3DPrototype217.SFFloat := SFFloat222;
SFString223 := TSFString.Create(SliderProto1, false, 'parameterName', 'pdelta');
SFString223.NameField := 'parameterName';
SFString223.Value := 'pdelta';
{ .AddSFString }
X3DPrototype217.SFString := SFString223;
SFNode224 := TSFNode.Create;
SFNode224.NameField := 'shaderNode';
ComposedShader225 := ComposedShader83;
{ .SetComposedShader }
SFNode224.ComposedShader := ComposedShader225;
{ .AddSFNode }
X3DPrototype217.SFNode := SFNode224;
{ .AddX3DPrototype }
LayoutLayer117.X3DPrototype := X3DPrototype217;
Layout226 := TLayoutNode.Create;
Layout226.SetAlign(['LEFT','BOTTOM']);
Layout226.SetOffset([-0.2,0.19]);
Layout226.SetOffsetUnits(['WORLD','WORLD']);
Layout226.SetScaleMode(['NONE','NONE']);
Layout226.SetSize([0.4,0.6]);
Layout226.SetSizeUnits(['WORLD','WORLD']);
{ .SetLayout }
LayoutLayer117.Layout := Layout226;
Viewport227 := TViewportNode.Create;
Viewport227.SetClipBoundary([0,1,0,1]);
{ .SetViewport }
LayoutLayer117.Viewport := Viewport227;
{ .AddLayers }
LayerSet35.Layers := LayoutLayer117;
{ .AddChildren }
Group30.AddChildren([LayerSet35]);
{ .AddGroup }
X3D0.AddChildren([Group30]);
Result := X3D0;
end;

begin
end.
