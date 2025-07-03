function CaliforniaCampuses: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group20: TGroupNode;
WorldInfo21: TWorldInfoNode;
Switch22: TSwitchNode;
Inline23: TInlineNode;
NavigationInfo24: TNavigationInfoNode;
Group25: TGroupNode;
GeoViewpoint26: TGeoViewpointNode;
GeoViewpoint27: TGeoViewpointNode;
GeoViewpoint28: TGeoViewpointNode;
GeoViewpoint29: TGeoViewpointNode;
GeoViewpoint30: TGeoViewpointNode;
GeoViewpoint31: TGeoViewpointNode;
GeoViewpoint32: TGeoViewpointNode;
GeoViewpoint33: TGeoViewpointNode;
GeoViewpoint34: TGeoViewpointNode;
GeoViewpoint35: TGeoViewpointNode;
GeoViewpoint36: TGeoViewpointNode;
GeoViewpoint37: TGeoViewpointNode;
GeoViewpoint38: TGeoViewpointNode;
GeoViewpoint39: TGeoViewpointNode;
GeoViewpoint40: TGeoViewpointNode;
GeoViewpoint41: TGeoViewpointNode;
GeoViewpoint42: TGeoViewpointNode;
GeoViewpoint43: TGeoViewpointNode;
GeoViewpoint44: TGeoViewpointNode;
GeoViewpoint45: TGeoViewpointNode;
GeoViewpoint46: TGeoViewpointNode;
GeoViewpoint47: TGeoViewpointNode;
GeoViewpoint48: TGeoViewpointNode;
GeoViewpoint49: TGeoViewpointNode;
GeoViewpoint50: TGeoViewpointNode;
GeoViewpoint51: TGeoViewpointNode;
GeoViewpoint52: TGeoViewpointNode;
GeoViewpoint53: TGeoViewpointNode;
GeoViewpoint54: TGeoViewpointNode;
GeoViewpoint55: TGeoViewpointNode;
GeoViewpoint56: TGeoViewpointNode;
GeoViewpoint57: TGeoViewpointNode;
GeoViewpoint58: TGeoViewpointNode;
GeoViewpoint59: TGeoViewpointNode;
GeoViewpoint60: TGeoViewpointNode;
ExternProtoDeclare61: TExternProtoDeclareNode;
field62: TfieldNode;
field63: TfieldNode;
field64: TfieldNode;
field65: TfieldNode;
field66: TfieldNode;
ProtoInstance67: TProtoInstanceNode;
fieldValue68: TfieldValueNode;
fieldValue69: TfieldValueNode;
fieldValue70: TfieldValueNode;
fieldValue71: TfieldValueNode;
ExternProtoDeclare72: TExternProtoDeclareNode;
field73: TfieldNode;
field74: TfieldNode;
field75: TfieldNode;
field76: TfieldNode;
ExternProtoDeclare77: TExternProtoDeclareNode;
field78: TfieldNode;
field79: TfieldNode;
field80: TfieldNode;
field81: TfieldNode;
field82: TfieldNode;
field83: TfieldNode;
field84: TfieldNode;
field85: TfieldNode;
field86: TfieldNode;
field87: TfieldNode;
ProtoInstance88: TProtoInstanceNode;
fieldValue89: TfieldValueNode;
fieldValue90: TfieldValueNode;
fieldValue91: TfieldValueNode;
fieldValue92: TfieldValueNode;
GeoViewpoint93: TGeoViewpointNode;
GeoViewpoint94: TGeoViewpointNode;
GeoViewpoint95: TGeoViewpointNode;
GeoViewpoint96: TGeoViewpointNode;
GeoViewpoint97: TGeoViewpointNode;
GeoViewpoint98: TGeoViewpointNode;
GeoViewpoint99: TGeoViewpointNode;
GeoViewpoint100: TGeoViewpointNode;
GeoViewpoint101: TGeoViewpointNode;
GeoViewpoint102: TGeoViewpointNode;
GeoViewpoint103: TGeoViewpointNode;
GeoViewpoint104: TGeoViewpointNode;
GeoViewpoint105: TGeoViewpointNode;
GeoViewpoint106: TGeoViewpointNode;
GeoViewpoint107: TGeoViewpointNode;
GeoViewpoint108: TGeoViewpointNode;
GeoViewpoint109: TGeoViewpointNode;
GeoViewpoint110: TGeoViewpointNode;
GeoViewpoint111: TGeoViewpointNode;
GeoViewpoint112: TGeoViewpointNode;
GeoViewpoint113: TGeoViewpointNode;
GeoViewpoint114: TGeoViewpointNode;
GeoViewpoint115: TGeoViewpointNode;
GeoViewpoint116: TGeoViewpointNode;
GeoViewpoint117: TGeoViewpointNode;
GeoViewpoint118: TGeoViewpointNode;
GeoViewpoint119: TGeoViewpointNode;
GeoViewpoint120: TGeoViewpointNode;
GeoViewpoint121: TGeoViewpointNode;
GeoViewpoint122: TGeoViewpointNode;
GeoViewpoint123: TGeoViewpointNode;
GeoViewpoint124: TGeoViewpointNode;
GeoViewpoint125: TGeoViewpointNode;
GeoViewpoint126: TGeoViewpointNode;
GeoViewpoint127: TGeoViewpointNode;
Viewpoint128: TViewpointNode;
GeoLocation129: TGeoLocationNode;
Billboard130: TBillboardNode;
Shape131: TShapeNode;
Text132: TTextNode;
FontStyle133: TFontStyleNode;
Appearance134: TAppearanceNode;
Material135: TMaterialNode;
TouchSensor136: TTouchSensorNode;
BooleanToggle137: TBooleanToggleNode;
ExternProtoDeclare140: TExternProtoDeclareNode;
field141: TfieldNode;
field142: TfieldNode;
field143: TfieldNode;
field144: TfieldNode;
field145: TfieldNode;
field146: TfieldNode;
ProtoInstance147: TProtoInstanceNode;
fieldValue148: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Geospatial'] := 1;
X3D0.Meta['title'] := 'CaliforniaCampuses.x3d';
X3D0.Meta['description'] := 'Viewpoints and tour of California campuses';
X3D0.Meta['creator'] := 'Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor';
X3D0.Meta['created'] := '4 March 2010';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'CaliforniaCampuses.kml';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d-earth';
X3D0.Meta['reference'] := 'http://x3d-earth.nps.edu';
X3D0.Meta['reference'] := 'http://hamming.uc.nps.edu';
X3D0.Meta['subject'] := 'X3D Earth';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d';
X3D0.Meta['reference'] := 'http://mmog.ern.nps.edu/California/California.x3d';
X3D0.Meta['warning'] := 'under development';
X3D0.Meta['warning'] := 'mmog.ern.nps.edu restricted to internal access within NPS firewall only';
X3D0.Meta['generator'] := 'KmlToX3dViewpoints.xslt';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := 'https://savage.nps.edu/Savage/license.html';
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.Title := 'CaliforniaCampuses.x3d';
{ .AddChildren }
Group20.AddChildren([WorldInfo21]);
Switch22 := TSwitchNode.Create;
Switch22.WhichChoice := 0;
{ Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. }
Inline23 := TInlineNode.Create;
Inline23.SetUrl(['http://x3d-earth.nps.edu/osmdemo.x3d']);
{ .AddChildren }
Switch22.AddChildren([Inline23]);
{ <Inline load='false' url='"http://mmog.ern.nps.edu/California/California.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d"'/> }
{ .AddChildren }
Group20.AddChildren([Switch22]);
NavigationInfo24 := TNavigationInfoNode.Create;
NavigationInfo24.SetTransitionType(['ANIMATE']);
{ .AddChildren }
Group20.AddChildren([NavigationInfo24]);
Group25 := TGroupNode.Create;
GeoViewpoint26 := TGeoViewpointNode.Create;
GeoViewpoint26.Description := 'Naval Postgraduate School';
GeoViewpoint26.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint26.Position := (36.595599,-121.877148,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint26]);
GeoViewpoint27 := TGeoViewpointNode.Create;
GeoViewpoint27.Description := 'University of California Davis';
GeoViewpoint27.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint27.Position := (38.53650615157984,-121.7489628616831,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint27]);
GeoViewpoint28 := TGeoViewpointNode.Create;
GeoViewpoint28.Description := 'University of California Berkeley';
GeoViewpoint28.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint28.Position := (37.86963434512325,-122.2593873127355,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint28]);
GeoViewpoint29 := TGeoViewpointNode.Create;
GeoViewpoint29.Description := 'University of California San Francisco';
GeoViewpoint29.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint29.Position := (37.76340647188392,-122.4582475377715,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint29]);
GeoViewpoint30 := TGeoViewpointNode.Create;
GeoViewpoint30.Description := 'University of California Santa Cruz';
GeoViewpoint30.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint30.Position := (36.99628443046043,-122.0534325473795,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint30]);
GeoViewpoint31 := TGeoViewpointNode.Create;
GeoViewpoint31.Description := 'University of California Merced';
GeoViewpoint31.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint31.Position := (37.365508575977,-120.4252597059142,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint31]);
GeoViewpoint32 := TGeoViewpointNode.Create;
GeoViewpoint32.Description := 'University of California Santa Barbara';
GeoViewpoint32.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint32.Position := (34.41124450961521,-119.8479940053906,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint32]);
GeoViewpoint33 := TGeoViewpointNode.Create;
GeoViewpoint33.Description := 'University of California Los Angeles';
GeoViewpoint33.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint33.Position := (34.07224474392262,-118.4408472225642,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint33]);
GeoViewpoint34 := TGeoViewpointNode.Create;
GeoViewpoint34.Description := 'University of California Irvine';
GeoViewpoint34.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint34.Position := (33.64623283675919,-117.8427064139082,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint34]);
GeoViewpoint35 := TGeoViewpointNode.Create;
GeoViewpoint35.Description := 'University of California Riverside';
GeoViewpoint35.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint35.Position := (33.97350567066717,-117.3281649569839,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint35]);
GeoViewpoint36 := TGeoViewpointNode.Create;
GeoViewpoint36.Description := 'University of California San Diego';
GeoViewpoint36.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint36.Position := (32.87612136607509,-117.2367298240259,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint36]);
GeoViewpoint37 := TGeoViewpointNode.Create;
GeoViewpoint37.Description := 'Humboldt State University';
GeoViewpoint37.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint37.Position := (40.87630235623448,-124.0785789217266,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint37]);
GeoViewpoint38 := TGeoViewpointNode.Create;
GeoViewpoint38.Description := 'California State University, Chico';
GeoViewpoint38.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint38.Position := (39.73031527724385,-121.8453722745223,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint38]);
GeoViewpoint39 := TGeoViewpointNode.Create;
GeoViewpoint39.Description := 'California State University Sacramento';
GeoViewpoint39.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint39.Position := (38.5626517618963,-121.4244636520556,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint39]);
GeoViewpoint40 := TGeoViewpointNode.Create;
GeoViewpoint40.Description := 'Sonoma State University';
GeoViewpoint40.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint40.Position := (38.33922929793606,-122.6744333530031,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint40]);
GeoViewpoint41 := TGeoViewpointNode.Create;
GeoViewpoint41.Description := 'California Maritime Academy';
GeoViewpoint41.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint41.Position := (38.06907065059484,-122.2309147135222,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint41]);
GeoViewpoint42 := TGeoViewpointNode.Create;
GeoViewpoint42.Description := 'San Francisco State University';
GeoViewpoint42.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint42.Position := (37.722876,-122.4781512190666,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint42]);
GeoViewpoint43 := TGeoViewpointNode.Create;
GeoViewpoint43.Description := 'California State University, East Bay';
GeoViewpoint43.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint43.Position := (37.65707914139907,-122.0569190659761,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint43]);
GeoViewpoint44 := TGeoViewpointNode.Create;
GeoViewpoint44.Description := 'California State University Stanislaus';
GeoViewpoint44.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint44.Position := (37.52552478005697,-120.8563508560606,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint44]);
GeoViewpoint45 := TGeoViewpointNode.Create;
GeoViewpoint45.Description := 'San Jose State University';
GeoViewpoint45.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint45.Position := (37.33580940527095,-121.8815343755784,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint45]);
GeoViewpoint46 := TGeoViewpointNode.Create;
GeoViewpoint46.Description := 'California State University, Monterey Bay';
GeoViewpoint46.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint46.Position := (36.6538071781493,-121.7984465276711,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint46]);
GeoViewpoint47 := TGeoViewpointNode.Create;
GeoViewpoint47.Description := 'Fresno State University';
GeoViewpoint47.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint47.Position := (36.812166,-119.7451552005852,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint47]);
GeoViewpoint48 := TGeoViewpointNode.Create;
GeoViewpoint48.Description := 'California State University, Bakersfield';
GeoViewpoint48.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint48.Position := (35.350804,-119.1043226128032,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint48]);
GeoViewpoint49 := TGeoViewpointNode.Create;
GeoViewpoint49.Description := 'California Polytechnic State University';
GeoViewpoint49.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint49.Position := (35.30115692599171,-120.6595761796351,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint49]);
GeoViewpoint50 := TGeoViewpointNode.Create;
GeoViewpoint50.Description := 'California State University, Channel Islands';
GeoViewpoint50.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint50.Position := (34.1624126428852,-119.0425264841287,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint50]);
GeoViewpoint51 := TGeoViewpointNode.Create;
GeoViewpoint51.Description := 'California State University, Northridge';
GeoViewpoint51.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint51.Position := (34.23959265263849,-118.5284272400904,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint51]);
GeoViewpoint52 := TGeoViewpointNode.Create;
GeoViewpoint52.Description := 'California State University, Los Angeles';
GeoViewpoint52.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint52.Position := (34.06645996626264,-118.1682050902557,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint52]);
GeoViewpoint53 := TGeoViewpointNode.Create;
GeoViewpoint53.Description := 'California State Polytechnic University, Pomona';
GeoViewpoint53.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint53.Position := (34.05727150000314,-117.8215320234812,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint53]);
GeoViewpoint54 := TGeoViewpointNode.Create;
GeoViewpoint54.Description := 'California State University, San Bernardino';
GeoViewpoint54.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint54.Position := (34.18180116432101,-117.3243676664719,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint54]);
GeoViewpoint55 := TGeoViewpointNode.Create;
GeoViewpoint55.Description := 'California State University, Fullerton';
GeoViewpoint55.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint55.Position := (33.882522,-117.8868367869023,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint55]);
GeoViewpoint56 := TGeoViewpointNode.Create;
GeoViewpoint56.Description := 'California State University Dominguez Hills';
GeoViewpoint56.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint56.Position := (33.86463396857103,-118.2553596272055,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint56]);
GeoViewpoint57 := TGeoViewpointNode.Create;
GeoViewpoint57.Description := 'California State University, Long Beach';
GeoViewpoint57.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint57.Position := (33.78196696470824,-118.112678253688,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint57]);
GeoViewpoint58 := TGeoViewpointNode.Create;
GeoViewpoint58.Description := 'California State University, San Marcos';
GeoViewpoint58.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint58.Position := (33.12837619265174,-117.1600194071002,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint58]);
GeoViewpoint59 := TGeoViewpointNode.Create;
GeoViewpoint59.Description := 'San Diego State University';
GeoViewpoint59.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint59.Position := (32.77593126586385,-117.0722876242553,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint59]);
GeoViewpoint60 := TGeoViewpointNode.Create;
GeoViewpoint60.Description := 'CENIC';
GeoViewpoint60.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint60.Position := (33.879947,-118.027903,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint60]);
{ .AddChildren }
Group20.AddChildren([Group25]);
{ ==================== }
ExternProtoDeclare61 := TExternProtoDeclareNode.Create;
ExternProtoDeclare61.NameField := 'CrossHair';
ExternProtoDeclare61.Appinfo := 'CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point';
ExternProtoDeclare61.SetUrl(['../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair','https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair','../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair','https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair']);
field62 := TfieldNode.Create;
field62.NameField := 'enabled';
field62.AccessType := 'initializeOnly';
field62.Appinfo := 'whether CrossHair prototype is enabled or not';
field62.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare61.Field := field62;
field63 := TfieldNode.Create;
field63.NameField := 'set_enabled';
field63.AccessType := 'inputOnly';
field63.Appinfo := 'control whether enabled/disabled';
field63.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare61.Field := field63;
field64 := TfieldNode.Create;
field64.NameField := 'markerColor';
field64.AccessType := 'inputOutput';
field64.Appinfo := 'color of CrossHair marker';
field64.Type := 'SFColor';
{ .AddField }
ExternProtoDeclare61.Field := field64;
field65 := TfieldNode.Create;
field65.NameField := 'scale';
field65.AccessType := 'inputOutput';
field65.Appinfo := 'size of CrossHair in meters';
field65.Type := 'SFVec3f';
{ .AddField }
ExternProtoDeclare61.Field := field65;
field66 := TfieldNode.Create;
field66.NameField := 'positionOffsetFromCamera';
field66.AccessType := 'inputOutput';
field66.Appinfo := 'distance in front of HUD viewpoint';
field66.Type := 'SFVec3f';
{ .AddField }
ExternProtoDeclare61.Field := field66;
{ .AddChildren }
Group20.AddChildren([ExternProtoDeclare61]);
ProtoInstance67 := TProtoInstanceNode.Create;
ProtoInstance67.NameField := 'CrossHair';
fieldValue68 := TfieldValueNode.Create;
fieldValue68.NameField := 'enabled';
fieldValue68.Value := 'true';
{ .AddFieldValue }
ProtoInstance67.FieldValue := fieldValue68;
fieldValue69 := TfieldValueNode.Create;
fieldValue69.NameField := 'markerColor';
fieldValue69.Value := '0.1 0.8 0.1';
{ .AddFieldValue }
ProtoInstance67.FieldValue := fieldValue69;
fieldValue70 := TfieldValueNode.Create;
fieldValue70.NameField := 'scale';
fieldValue70.Value := '0.5 0.5 0.5';
{ .AddFieldValue }
ProtoInstance67.FieldValue := fieldValue70;
fieldValue71 := TfieldValueNode.Create;
fieldValue71.NameField := 'positionOffsetFromCamera';
fieldValue71.Value := '0 0 -5';
{ .AddFieldValue }
ProtoInstance67.FieldValue := fieldValue71;
{ .AddChildren }
Group20.AddChildren([ProtoInstance67]);
{ ==================== }
ExternProtoDeclare72 := TExternProtoDeclareNode.Create;
ExternProtoDeclare72.NameField := 'HeadsUpDisplay';
ExternProtoDeclare72.Appinfo := 'Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location';
ExternProtoDeclare72.SetUrl(['../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay','../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay','https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay']);
field73 := TfieldNode.Create;
field73.NameField := 'children';
field73.AccessType := 'inputOutput';
field73.Appinfo := 'X3D content positioned at HUD offset';
field73.Type := 'MFNode';
{ .AddField }
ExternProtoDeclare72.Field := field73;
field74 := TfieldNode.Create;
field74.NameField := 'screenOffset';
field74.AccessType := 'inputOutput';
field74.Appinfo := 'offset position for HUD relative to current view location, default 0 0 -5';
field74.Type := 'SFVec3f';
{ .AddField }
ExternProtoDeclare72.Field := field74;
field75 := TfieldNode.Create;
field75.NameField := 'position_changed';
field75.AccessType := 'outputOnly';
field75.Appinfo := 'HUD position update (in world coordinates) relative to original location';
field75.Type := 'SFVec3f';
{ .AddField }
ExternProtoDeclare72.Field := field75;
field76 := TfieldNode.Create;
field76.NameField := 'orientation_changed';
field76.AccessType := 'outputOnly';
field76.Appinfo := 'HUD orientation update relative to original location';
field76.Type := 'SFRotation';
{ .AddField }
ExternProtoDeclare72.Field := field76;
{ .AddChildren }
Group20.AddChildren([ExternProtoDeclare72]);
{ ==================== }
ExternProtoDeclare77 := TExternProtoDeclareNode.Create;
ExternProtoDeclare77.NameField := 'ViewpointSequencer';
ExternProtoDeclare77.Appinfo := 'Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene';
ExternProtoDeclare77.SetUrl(['../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer','https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer','../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer','https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer']);
field78 := TfieldNode.Create;
field78.NameField := 'viewpoints';
field78.AccessType := 'initializeOnly';
field78.Appinfo := 'Viewpoint USE nodes that are sequentially bound';
field78.Type := 'MFNode';
{ .AddField }
ExternProtoDeclare77.Field := field78;
field79 := TfieldNode.Create;
field79.NameField := 'interval';
field79.AccessType := 'inputOutput';
field79.Appinfo := 'number of seconds between viewpoint shifts';
field79.Type := 'SFTime';
{ .AddField }
ExternProtoDeclare77.Field := field79;
field80 := TfieldNode.Create;
field80.NameField := 'enabled';
field80.AccessType := 'inputOutput';
field80.Appinfo := 'whether ViewpointSequencer is enabled or not';
field80.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare77.Field := field80;
field81 := TfieldNode.Create;
field81.NameField := 'set_enabled';
field81.AccessType := 'inputOnly';
field81.Appinfo := 'whether ViewpointSequencer is enabled or not';
field81.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare77.Field := field81;
field82 := TfieldNode.Create;
field82.NameField := 'previous';
field82.AccessType := 'inputOnly';
field82.Appinfo := 'bind previous Viewpoint in list';
field82.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare77.Field := field82;
field83 := TfieldNode.Create;
field83.NameField := 'next';
field83.AccessType := 'inputOnly';
field83.Appinfo := 'bind next Viewpoint in list';
field83.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare77.Field := field83;
field84 := TfieldNode.Create;
field84.NameField := 'toggleMessage';
field84.AccessType := 'inputOutput';
field84.Appinfo := 'Select message to toggle ViewpointSequencer';
field84.Type := 'MFString';
{ .AddField }
ExternProtoDeclare77.Field := field84;
field85 := TfieldNode.Create;
field85.NameField := 'toggleMessageFontSize';
field85.AccessType := 'initializeOnly';
field85.Appinfo := 'Color for toggleMessage text';
field85.Type := 'SFFloat';
{ .AddField }
ExternProtoDeclare77.Field := field85;
field86 := TfieldNode.Create;
field86.NameField := 'toggleMessageColor';
field86.AccessType := 'inputOutput';
field86.Appinfo := 'Color for toggleMessage text';
field86.Type := 'SFColor';
{ .AddField }
ExternProtoDeclare77.Field := field86;
field87 := TfieldNode.Create;
field87.NameField := 'traceEnabled';
field87.AccessType := 'inputOutput';
field87.Appinfo := 'enable console output';
field87.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare77.Field := field87;
{ .AddChildren }
Group20.AddChildren([ExternProtoDeclare77]);
ProtoInstance88 := TProtoInstanceNode.Create;
ProtoInstance88.NameField := 'ViewpointSequencer';
fieldValue89 := TfieldValueNode.Create;
fieldValue89.NameField := 'interval';
fieldValue89.Value := '30';
{ .AddFieldValue }
ProtoInstance88.FieldValue := fieldValue89;
fieldValue90 := TfieldValueNode.Create;
fieldValue90.NameField := 'enabled';
fieldValue90.Value := 'true';
{ .AddFieldValue }
ProtoInstance88.FieldValue := fieldValue90;
fieldValue91 := TfieldValueNode.Create;
fieldValue91.NameField := 'toggleMessage';
fieldValue91.Value := '\"ViewpointSequencer tour\"';
{ .AddFieldValue }
ProtoInstance88.FieldValue := fieldValue91;
fieldValue92 := TfieldValueNode.Create;
fieldValue92.NameField := 'viewpoints';
GeoViewpoint93 := TGeoViewpointNode.Create;
GeoViewpoint93 := GeoViewpoint26;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint93]);
GeoViewpoint94 := TGeoViewpointNode.Create;
GeoViewpoint94 := GeoViewpoint27;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint94]);
GeoViewpoint95 := TGeoViewpointNode.Create;
GeoViewpoint95 := GeoViewpoint28;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint95]);
GeoViewpoint96 := TGeoViewpointNode.Create;
GeoViewpoint96 := GeoViewpoint29;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint96]);
GeoViewpoint97 := TGeoViewpointNode.Create;
GeoViewpoint97 := GeoViewpoint30;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint97]);
GeoViewpoint98 := TGeoViewpointNode.Create;
GeoViewpoint98 := GeoViewpoint31;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint98]);
GeoViewpoint99 := TGeoViewpointNode.Create;
GeoViewpoint99 := GeoViewpoint32;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint99]);
GeoViewpoint100 := TGeoViewpointNode.Create;
GeoViewpoint100 := GeoViewpoint33;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint100]);
GeoViewpoint101 := TGeoViewpointNode.Create;
GeoViewpoint101 := GeoViewpoint34;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint101]);
GeoViewpoint102 := TGeoViewpointNode.Create;
GeoViewpoint102 := GeoViewpoint35;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint102]);
GeoViewpoint103 := TGeoViewpointNode.Create;
GeoViewpoint103 := GeoViewpoint36;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint103]);
GeoViewpoint104 := TGeoViewpointNode.Create;
GeoViewpoint104 := GeoViewpoint37;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint104]);
GeoViewpoint105 := TGeoViewpointNode.Create;
GeoViewpoint105 := GeoViewpoint38;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint105]);
GeoViewpoint106 := TGeoViewpointNode.Create;
GeoViewpoint106 := GeoViewpoint39;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint106]);
GeoViewpoint107 := TGeoViewpointNode.Create;
GeoViewpoint107 := GeoViewpoint40;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint107]);
GeoViewpoint108 := TGeoViewpointNode.Create;
GeoViewpoint108 := GeoViewpoint41;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint108]);
GeoViewpoint109 := TGeoViewpointNode.Create;
GeoViewpoint109 := GeoViewpoint42;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint109]);
GeoViewpoint110 := TGeoViewpointNode.Create;
GeoViewpoint110 := GeoViewpoint43;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint110]);
GeoViewpoint111 := TGeoViewpointNode.Create;
GeoViewpoint111 := GeoViewpoint44;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint111]);
GeoViewpoint112 := TGeoViewpointNode.Create;
GeoViewpoint112 := GeoViewpoint45;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint112]);
GeoViewpoint113 := TGeoViewpointNode.Create;
GeoViewpoint113 := GeoViewpoint46;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint113]);
GeoViewpoint114 := TGeoViewpointNode.Create;
GeoViewpoint114 := GeoViewpoint47;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint114]);
GeoViewpoint115 := TGeoViewpointNode.Create;
GeoViewpoint115 := GeoViewpoint48;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint115]);
GeoViewpoint116 := TGeoViewpointNode.Create;
GeoViewpoint116 := GeoViewpoint49;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint116]);
GeoViewpoint117 := TGeoViewpointNode.Create;
GeoViewpoint117 := GeoViewpoint50;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint117]);
GeoViewpoint118 := TGeoViewpointNode.Create;
GeoViewpoint118 := GeoViewpoint51;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint118]);
GeoViewpoint119 := TGeoViewpointNode.Create;
GeoViewpoint119 := GeoViewpoint52;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint119]);
GeoViewpoint120 := TGeoViewpointNode.Create;
GeoViewpoint120 := GeoViewpoint53;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint120]);
GeoViewpoint121 := TGeoViewpointNode.Create;
GeoViewpoint121 := GeoViewpoint54;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint121]);
GeoViewpoint122 := TGeoViewpointNode.Create;
GeoViewpoint122 := GeoViewpoint55;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint122]);
GeoViewpoint123 := TGeoViewpointNode.Create;
GeoViewpoint123 := GeoViewpoint56;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint123]);
GeoViewpoint124 := TGeoViewpointNode.Create;
GeoViewpoint124 := GeoViewpoint57;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint124]);
GeoViewpoint125 := TGeoViewpointNode.Create;
GeoViewpoint125 := GeoViewpoint58;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint125]);
GeoViewpoint126 := TGeoViewpointNode.Create;
GeoViewpoint126 := GeoViewpoint59;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint126]);
GeoViewpoint127 := TGeoViewpointNode.Create;
GeoViewpoint127 := GeoViewpoint60;
{ .AddChildren }
fieldValue92.AddChildren([GeoViewpoint127]);
Viewpoint128 := TViewpointNode.Create;
Viewpoint128.Description := 'View four (-X axis)';
Viewpoint128.Orientation := Vector4(0,1,0,-1.57);
Viewpoint128.Position := Vector3(-10,0,0);
{ .AddChildren }
fieldValue92.AddChildren([Viewpoint128]);
{ .AddFieldValue }
ProtoInstance88.FieldValue := fieldValue92;
{ initially enabled is off, scene provides selectable text to activate }
{ .AddChildren }
Group20.AddChildren([ProtoInstance88]);
{ ==================== }
GeoLocation129 := TGeoLocationNode.Create;
GeoLocation129.GeoCoords := (36.595599,-121.877148,624990);
Billboard130 := TBillboardNode.Create;
Billboard130.AxisOfRotation := Vector3(0,0,0);
Shape131 := TShapeNode.Create;
Text132 := TTextNode.Create;
Text132.SetText(['ViewpointSequencer tour']);
FontStyle133 := TFontStyleNode.Create;
FontStyle133.Justify := fjMiddle;
FontStyle133.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text132.FontStyle := FontStyle133;
{ .SetGeometry }
Shape131.Geometry := Text132;
Appearance134 := TAppearanceNode.Create;
Material135 := TMaterialNode.Create;
Material135.AmbientIntensity := 0.25;
Material135.DiffuseColor := Vector3(0.795918,0.505869,0.093315);
Material135.Shininess := 0.39;
Material135.SpecularColor := Vector3(0.923469,0.428866,0.006369);
{ .SetMaterial }
Appearance134.Material := Material135;
{ .SetAppearance }
Shape131.Appearance := Appearance134;
{ .AddChildren }
Billboard130.AddChildren([Shape131]);
{ .AddChildren }
GeoLocation129.AddChildren([Billboard130]);
TouchSensor136 := TTouchSensorNode.Create;
TouchSensor136.Description := 'Touch text to turn tour on/off';
{ .AddChildren }
GeoLocation129.AddChildren([TouchSensor136]);
BooleanToggle137 := TBooleanToggleNode.Create;
{ .AddChildren }
GeoLocation129.AddChildren([BooleanToggle137]);
GeoLocation129.AddRoute(TouchSensor136.FdIsactive, BooleanToggle137.EventSet_boolean);
{ .AddX3DRoute }
GeoLocation129.AddRoute(BooleanToggle137.FdToggle, ProtoInstance88.EventSet_enabled);
{ .AddX3DRoute }
{ .AddChildren }
Group20.AddChildren([GeoLocation129]);
{ ==================== }
ExternProtoDeclare140 := TExternProtoDeclareNode.Create;
ExternProtoDeclare140.NameField := 'ViewPositionOrientation';
ExternProtoDeclare140.Appinfo := 'ViewPositionOrientation provides provides console output of local position and orientation as user navigates';
ExternProtoDeclare140.SetUrl(['../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation','https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation','../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation','https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation']);
field141 := TfieldNode.Create;
field141.NameField := 'enabled';
field141.AccessType := 'inputOutput';
field141.Appinfo := 'Whether or not ViewPositionOrientation sends output to console';
field141.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare140.Field := field141;
field142 := TfieldNode.Create;
field142.NameField := 'traceEnabled';
field142.AccessType := 'initializeOnly';
field142.Appinfo := 'Output internal trace messages for debugging this node, intended for developer use only';
field142.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare140.Field := field142;
field143 := TfieldNode.Create;
field143.NameField := 'set_traceEnabled';
field143.AccessType := 'inputOnly';
field143.Appinfo := 'Ability to turn output tracing on/off at runtime';
field143.Type := 'SFBool';
{ .AddField }
ExternProtoDeclare140.Field := field143;
field144 := TfieldNode.Create;
field144.NameField := 'position_changed';
field144.AccessType := 'outputOnly';
field144.Appinfo := 'Output local position';
field144.Type := 'SFVec3f';
{ .AddField }
ExternProtoDeclare140.Field := field144;
field145 := TfieldNode.Create;
field145.NameField := 'orientation_changed';
field145.AccessType := 'outputOnly';
field145.Appinfo := 'Output local orientation';
field145.Type := 'SFRotation';
{ .AddField }
ExternProtoDeclare140.Field := field145;
field146 := TfieldNode.Create;
field146.NameField := 'outputViewpointString';
field146.AccessType := 'outputOnly';
field146.Appinfo := 'MFString value of new Viewpoint';
field146.Type := 'MFString';
{ .AddField }
ExternProtoDeclare140.Field := field146;
{ .AddChildren }
Group20.AddChildren([ExternProtoDeclare140]);
ProtoInstance147 := TProtoInstanceNode.Create;
ProtoInstance147.NameField := 'ViewPositionOrientation';
fieldValue148 := TfieldValueNode.Create;
fieldValue148.NameField := 'enabled';
fieldValue148.Value := 'false';
{ .AddFieldValue }
ProtoInstance147.FieldValue := fieldValue148;
{ .AddChildren }
Group20.AddChildren([ProtoInstance147]);
{ ==================== }
{ .AddGroup }
X3D0.AddChildren([Group20]);
Result := X3D0;
end;
